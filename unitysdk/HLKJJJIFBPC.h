#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController_UIBuddySelect; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class RawImage; }

#define HLKJJJIFBPC_AIDOJMINKKB_OFFSET UNITYSDK_OFFSET(0x15B69CA0)
#define HLKJJJIFBPC_AKJLFNBOJBJ_OFFSET UNITYSDK_OFFSET(0x15B69A30)
#define HLKJJJIFBPC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15B697F0)
#define HLKJJJIFBPC_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x15B69740)
#define HLKJJJIFBPC_JNALOOPACLL_OFFSET UNITYSDK_OFFSET(0x15B69D20)
#define HLKJJJIFBPC__CTOR_OFFSET UNITYSDK_OFFSET(0x15B69730)

inline static constexpr unsigned int HLKJJJIFBPC_TypeDefinitionIndex = 57352;

class HLKJJJIFBPC : public ::System::Object
{
public:
	::System::Action* OCJFNKJDNDK; // 0x10
	::UnityEngine::UI::RawImage* FHLDAJFKJGN; // 0x18
	::System::String* ODLBMPBBIPI; // 0x20
	::MoleMole::UILineupSelectPageController_UIBuddySelect* KCBDGFHGNJN; // 0x28
	::System::Int32 ECAFPALMHLI; // 0x30
	::System::Int32 IHOJNIIBOEL; // 0x34

	::System::Void _ctor(::System::String* ODLBMPBBIPI, ::System::Action* OCJFNKJDNDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HLKJJJIFBPC__CTOR_OFFSET))(this, ODLBMPBBIPI, OCJFNKJDNDK);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKJJJIFBPC_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 IHOJNIIBOEL, ::UnityEngine::UI::RawImage* FHLDAJFKJGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + HLKJJJIFBPC_BBOMJDBNHIC_OFFSET))(this, IHOJNIIBOEL, FHLDAJFKJGN);
	}

	::System::Void AKJLFNBOJBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKJJJIFBPC_AKJLFNBOJBJ_OFFSET))(this);
	}

	::System::Void JNALOOPACLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKJJJIFBPC_JNALOOPACLL_OFFSET))(this);
	}

	::System::Int32 AIDOJMINKKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKJJJIFBPC_AIDOJMINKKB_OFFSET))(this);
	}
};
