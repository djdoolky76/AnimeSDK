#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PNHPNNENFLI_EPPMHMFCOGM.h"

class PNHPNNENFLI;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define PNHPNNENFLI_CAJEIAFEMFP_IDGCGFNPEPJ_OFFSET UNITYSDK_OFFSET(0x1D9D6A00)
#define PNHPNNENFLI_CAJEIAFEMFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D69F0)

inline static constexpr unsigned int PNHPNNENFLI_CAJEIAFEMFP_TypeDefinitionIndex = 67264;

class PNHPNNENFLI_CAJEIAFEMFP : public ::System::Object
{
public:
	::PNHPNNENFLI* KLHPEBKNIFB; // 0x10
	::UnityEngine::Transform* JNLBPMKIFNK; // 0x18
	::System::Action_2<::System::Boolean, ::UnityEngine::GameObject*>* EJGDHCIBCJH; // 0x20
	::UnityEngine::Quaternion GJNLCLDFFIN; // 0x28
	::UnityEngine::Vector3 CKPGOKHECCH; // 0x38
	::System::Int32 GAFEIIKPNPJ; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHPNNENFLI_CAJEIAFEMFP__CTOR_OFFSET))(this);
	}

	::System::Void IDGCGFNPEPJ(::System::Boolean EBAJLMBGMFE, ::PNHPNNENFLI_EPPMHMFCOGM EBJICBIMOHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PNHPNNENFLI_EPPMHMFCOGM))((::PBYTE)hIl2Cpp + PNHPNNENFLI_CAJEIAFEMFP_IDGCGFNPEPJ_OFFSET))(this, EBAJLMBGMFE, EBJICBIMOHN);
	}
};
