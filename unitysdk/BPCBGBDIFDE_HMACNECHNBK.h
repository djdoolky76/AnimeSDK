#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE_FMJOBBKJPNJ;
namespace UnityEngine { class GameObject; }

#define BPCBGBDIFDE_HMACNECHNBK_IDEAMLGBKNJ_OFFSET UNITYSDK_OFFSET(0xFF94AF0)
#define BPCBGBDIFDE_HMACNECHNBK__CTOR_OFFSET UNITYSDK_OFFSET(0xFF94AE0)

inline static constexpr unsigned int BPCBGBDIFDE_HMACNECHNBK_TypeDefinitionIndex = 78653;

class BPCBGBDIFDE_HMACNECHNBK : public ::System::Object
{
public:
	::UnityEngine::GameObject* NIDBLOCIBPC; // 0x10
	::BPCBGBDIFDE_FMJOBBKJPNJ* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HMACNECHNBK__CTOR_OFFSET))(this);
	}

	::System::Void IDEAMLGBKNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HMACNECHNBK_IDEAMLGBKNJ_OFFSET))(this);
	}
};
