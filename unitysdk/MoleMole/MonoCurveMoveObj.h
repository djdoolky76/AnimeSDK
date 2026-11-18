#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOCURVEMOVEOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x180F9000)
#define MOLEMOLE_MONOCURVEMOVEOBJ_EGNLNKOEJJH_OFFSET UNITYSDK_OFFSET(0x180F9D30)
#define MOLEMOLE_MONOCURVEMOVEOBJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x180F9050)
#define MOLEMOLE_MONOCURVEMOVEOBJ_MHJAIPHPEPC_OFFSET UNITYSDK_OFFSET(0x180F9B20)
#define MOLEMOLE_MONOCURVEMOVEOBJ_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x180F91B0)
#define MOLEMOLE_MONOCURVEMOVEOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x180F9C10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCurveMoveObj_TypeDefinitionIndex = 51546;

	class MonoCurveMoveObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::UnityEngine::GameObject* modelGo; // 0x40
		::UnityEngine::GameObject* collider; // 0x48
		::System::Single minHeight; // 0x50
		::System::Single maxHeight; // 0x54
		::System::Single colliderOpenHeight; // 0x58
		::System::Single timeOffset; // 0x5C
		::System::Single DMDDMABICPN; // 0x60
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Single>* timePeriods; // 0x68
		::Il2CppArray<::System::Single>* FDJLIMIBKBL; // 0x70
		::System::String* UpCurveKey; // 0x78
		::System::String* DownCurveKey; // 0x80
		::UnityEngine::AnimationCurve* AIIDMLEDIGH; // 0x88
		::UnityEngine::AnimationCurve* EKFEKCDBKEA; // 0x90
		::System::String* SoundUpEvent; // 0x98
		::System::String* SoundDownEvent; // 0xA0
		::System::Int32 CPAJLDCNFCL; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ_INITIALIZE_OFFSET))(this);
		}

		::System::Void OnDoUpdate(::System::UInt32 BNNCKJIALIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ_ONDOUPDATE_OFFSET))(this, BNNCKJIALIO);
		}

		::System::Void EGNLNKOEJJH(::System::UInt32 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ_EGNLNKOEJJH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Int32 MHJAIPHPEPC(::System::Single FNIOPKPHDEH, ::System::Single& KILPCOMOCMD)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJ_MHJAIPHPEPC_OFFSET))(this, FNIOPKPHDEH, KILPCOMOCMD);
		}
	};
}
