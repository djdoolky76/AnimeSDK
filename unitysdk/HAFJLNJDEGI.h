#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAFJLNJDEGI_PhotoGraphSwipeCameraState.h"
#include "unitysdk/JNAMFHKBIGF.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cinemachine/CameraState.h"
class NKDJJJCBAFF;

#define HAFJLNJDEGI_CTOR_OFFSET UNITYSDK_OFFSET(0x16AF9990)
#define HAFJLNJDEGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16AF9920)
#define HAFJLNJDEGI_HFPLENGJJNM_OFFSET UNITYSDK_OFFSET(0x16AF9210)
#define HAFJLNJDEGI_HOMPLOIMPAI_OFFSET UNITYSDK_OFFSET(0x16AF9180)
#define HAFJLNJDEGI_JIIEAOKKFIM_OFFSET UNITYSDK_OFFSET(0x16AF8CC0)
#define HAFJLNJDEGI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16AF9470)

inline static constexpr unsigned int HAFJLNJDEGI_TypeDefinitionIndex = 71623;

	class HAFJLNJDEGI : public ::JNAMFHKBIGF
	{
	public:
		::NKDJJJCBAFF* JBDLEALMLDJ; // 0x60
		::Il2CppArray<::UnityEngine::Vector3>* CAPHPDMLOMI; // 0x68
		::UnityEngine::Vector2 FPMMGOGGDPA; // 0x70
		::System::Single MNOKAIAOCPH; // 0x78
		::UnityEngine::Quaternion MGFPKGIOKEN; // 0x7C
		::System::Single EEHMPHBHMDK; // 0x8C
		::HAFJLNJDEGI_PhotoGraphSwipeCameraState MPNAHKOANLI; // 0x90
		::UnityEngine::Vector2 JMLLKDLMODM; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFJLNJDEGI_CTOR_OFFSET))(this);
		}

		::System::Void JIIEAOKKFIM(::NKDJJJCBAFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKDJJJCBAFF*))((::PBYTE)hIl2Cpp + HAFJLNJDEGI_JIIEAOKKFIM_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + HAFJLNJDEGI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFJLNJDEGI_DISPOSE_OFFSET))(this);
		}

		::System::Void HFPLENGJJNM(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HAFJLNJDEGI_HFPLENGJJNM_OFFSET))(this, a1, a2);
		}

		::System::Boolean HOMPLOIMPAI(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HAFJLNJDEGI_HOMPLOIMPAI_OFFSET))(this, a1);
		}

	};
