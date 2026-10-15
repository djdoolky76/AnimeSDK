#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCIFDHMKADE_CameraState.h"
#include "unitysdk/BCIFDHMKADE_OPCKNPGJDLN.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BCIFDHMKADE;
namespace System { class Object; }

#define BCIFDHMKADE_JEMCGEMJKFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E9BFC0)
#define BCIFDHMKADE_JEMCGEMJKFG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15E9CA80)
#define BCIFDHMKADE_JEMCGEMJKFG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15E9CD90)
#define BCIFDHMKADE_JEMCGEMJKFG_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0x15E9D160)

inline static constexpr unsigned int BCIFDHMKADE_JEMCGEMJKFG_TypeDefinitionIndex = 78640;

	class BCIFDHMKADE_JEMCGEMJKFG : public ::BCIFDHMKADE_OPCKNPGJDLN
	{
	public:
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x20
		::UnityEngine::Vector3 MNOKAIAOCPH; // 0x2C
		::System::Void _ctor(::BCIFDHMKADE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCIFDHMKADE*))((::PBYTE)hIl2Cpp + BCIFDHMKADE_JEMCGEMJKFG_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::BCIFDHMKADE_CameraState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCIFDHMKADE_CameraState, ::System::Object*))((::PBYTE)hIl2Cpp + BCIFDHMKADE_JEMCGEMJKFG_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCIFDHMKADE_JEMCGEMJKFG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void POAACIDJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_JEMCGEMJKFG_POAACIDJOKM_OFFSET))(this);
		}

	};
