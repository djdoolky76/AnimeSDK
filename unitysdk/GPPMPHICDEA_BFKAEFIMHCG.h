#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define GPPMPHICDEA_BFKAEFIMHCG_DOCOKPKDDHL_OFFSET UNITYSDK_OFFSET(0x17ADF050)
#define GPPMPHICDEA_BFKAEFIMHCG__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADF040)

inline static constexpr unsigned int GPPMPHICDEA_BFKAEFIMHCG_TypeDefinitionIndex = 42674;

class GPPMPHICDEA_BFKAEFIMHCG : public ::System::Object
{
public:
	::System::Action* AOKHOHCJNFJ; // 0x10
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* GFKCABHFFEE; // 0x18
	::System::String* LBEBOIOHHPB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_BFKAEFIMHCG__CTOR_OFFSET))(this);
	}

	::System::Void DOCOKPKDDHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_BFKAEFIMHCG_DOCOKPKDDHL_OFFSET))(this);
	}
};
