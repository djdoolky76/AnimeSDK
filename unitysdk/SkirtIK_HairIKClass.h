#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define SKIRTIK_HAIRIKCLASS_AIJFJPGLOAJ_OFFSET UNITYSDK_OFFSET(0xE972D40)
#define SKIRTIK_HAIRIKCLASS_CTOR_OFFSET UNITYSDK_OFFSET(0xE972D80)
#define SKIRTIK_HAIRIKCLASS_GPOHHLEEMKC_OFFSET UNITYSDK_OFFSET(0xE972D00)

	class SkirtIK_HairIKClass : public ::System::Object
	{
	public:
		::UnityEngine::Quaternion HairRotation; // 0x10
		::UnityEngine::Vector3 HairPosition; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* RatioCurve; // 0x30
		::System::Boolean CE; // 0x38
		::System::Boolean REC; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKCLASS_CTOR_OFFSET))(this);
		}

		::System::Void GPOHHLEEMKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKCLASS_GPOHHLEEMKC_OFFSET))(this);
		}

		::System::Void AIJFJPGLOAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKCLASS_AIJFJPGLOAJ_OFFSET))(this);
		}

	};
