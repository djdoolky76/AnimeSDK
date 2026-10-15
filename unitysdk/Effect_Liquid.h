#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define EFFECT_LIQUID_BLOMFILGDBA_OFFSET UNITYSDK_OFFSET(0x155E19B0)
#define EFFECT_LIQUID_CTOR_OFFSET UNITYSDK_OFFSET(0x155E2B10)
#define EFFECT_LIQUID_DFFNOPBPECB_OFFSET UNITYSDK_OFFSET(0x155E2740)
#define EFFECT_LIQUID_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x155E1840)
#define EFFECT_LIQUID_FIOEFKBHKJF_OFFSET UNITYSDK_OFFSET(0x155E28C0)
#define EFFECT_LIQUID_GCOAANBCAPA_OFFSET UNITYSDK_OFFSET(0x155E1AE0)
#define EFFECT_LIQUID_NCGPACPBPAJ_OFFSET UNITYSDK_OFFSET(0x155E1B70)
#define EFFECT_LIQUID_START_OFFSET UNITYSDK_OFFSET(0x155E17F0)
#define EFFECT_LIQUID_UPDATE_OFFSET UNITYSDK_OFFSET(0x155E1C80)

inline static constexpr unsigned int Effect_Liquid_TypeDefinitionIndex = 47453;

	class Effect_Liquid : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 CenterPosOffset; // 0x18
		::System::Single ForceFromOffsetScale; // 0x24
		::System::Single ForceFromRotateScale; // 0x28
		::System::Single RecoverSpeed; // 0x2C
		::System::Single OvelapScale; // 0x30
		::System::Single DampingScale; // 0x34
		::System::Single k; // 0x38
		::System::Single OutForceClamp; // 0x3C
		::Il2CppArray<::UnityEngine::Vector3>* JAIBKGHGPML; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* CPGBLFAMMHI; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* HEGEMHEKBJG; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* NOPAKCFBJLB; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* EHAMFDOKMDE; // 0x60
		::Il2CppArray<::UnityEngine::Vector3>* KFMDDEAELMI; // 0x68
		::Il2CppArray<::UnityEngine::Vector3>* FKLOGPJNHDC; // 0x70
		::Il2CppArray<::UnityEngine::Vector3>* AEEMOBDNNLC; // 0x78
		::UnityEngine::Vector3 DGFFNHJOFKP; // 0x80
		::UnityEngine::Vector3 DDOMPJAFJMA; // 0x8C
		::UnityEngine::Vector3 NJLJMPNJBJM; // 0x98
		::UnityEngine::Quaternion NODODOMHAGN; // 0xA4
		::System::Single CMGAHOCIDDE; // 0xB4
		::System::Single EHHIGCABMNJ; // 0xB8
		::UnityEngine::Vector3 EDEJBLKNMNB; // 0xBC
		::System::Single MHKPMPIFHIM; // 0xC8
		::System::Byte _padding0[0x4];
		::UnityEngine::Renderer* JAMDAALMOAL; // 0xD0
		::UnityEngine::MaterialPropertyBlock* DNCLJJLAFKA; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_START_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void BLOMFILGDBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_BLOMFILGDBA_OFFSET))(this);
		}

		::UnityEngine::Vector4 GCOAANBCAPA(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_GCOAANBCAPA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 NCGPACPBPAJ(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_NCGPACPBPAJ_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_UPDATE_OFFSET))(this);
		}

		::System::Void DFFNOPBPECB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_DFFNOPBPECB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FIOEFKBHKJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_FIOEFKBHKJF_OFFSET))(this);
		}

	};
