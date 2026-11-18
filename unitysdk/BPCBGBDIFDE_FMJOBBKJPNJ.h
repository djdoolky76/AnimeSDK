#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BOALGPJCKIE;
class BPCBGBDIFDE;
namespace MoleMole { class ConfigUIUrbanMap; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BPCBGBDIFDE_FMJOBBKJPNJ_HFCMDDBFKJH_OFFSET UNITYSDK_OFFSET(0x159A3370)
#define BPCBGBDIFDE_FMJOBBKJPNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x159A3360)

inline static constexpr unsigned int BPCBGBDIFDE_FMJOBBKJPNJ_TypeDefinitionIndex = 78642;

class BPCBGBDIFDE_FMJOBBKJPNJ : public ::System::Object
{
public:
	::UnityEngine::Transform* IAPKABMDJNF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::String* AKAMDIJAFIA; // 0x20
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x28
	::UnityEngine::Camera* DPMFFFBLEDJ; // 0x30
	::BOALGPJCKIE* HMMMOCJAEOA; // 0x38
	::UnityEngine::GameObject* ODIPFAGEGAM; // 0x40
	::MoleMole::ConfigUIUrbanMap* NGLKIKLLLFL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FMJOBBKJPNJ__CTOR_OFFSET))(this);
	}

	::System::Void HFCMDDBFKJH(::UnityEngine::GameObject* CDJAGGEDLMG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FMJOBBKJPNJ_HFCMDDBFKJH_OFFSET))(this, CDJAGGEDLMG);
	}
};
