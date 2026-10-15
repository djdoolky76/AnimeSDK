#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define SKIRTIK_SKIRTIKCLASS_AIJFJPGLOAJ_OFFSET UNITYSDK_OFFSET(0xE972F70)
#define SKIRTIK_SKIRTIKCLASS_CTOR_OFFSET UNITYSDK_OFFSET(0xE972FB0)
#define SKIRTIK_SKIRTIKCLASS_GPOHHLEEMKC_OFFSET UNITYSDK_OFFSET(0xE972F30)

	class SkirtIK_SkirtIKClass : public ::System::Object
	{
	public:
		::UnityEngine::Transform* skirtBone; // 0x10
		::UnityEngine::Quaternion skirtRotation; // 0x18
		::UnityEngine::Vector3 skirtPosition; // 0x28
		::UnityEngine::Quaternion oriSkirtRotation; // 0x34
		::UnityEngine::Vector3 oriSkirPosition; // 0x44
		::System::Single aniRatio; // 0x50
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* RatioCurve; // 0x58
		::System::Boolean CurveEnable; // 0x60
		::System::Boolean SpPos; // 0x61
		::System::Boolean REC; // 0x62
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_SKIRTIKCLASS_CTOR_OFFSET))(this);
		}

		::System::Void GPOHHLEEMKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_SKIRTIKCLASS_GPOHHLEEMKC_OFFSET))(this);
		}

		::System::Void AIJFJPGLOAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_SKIRTIKCLASS_AIJFJPGLOAJ_OFFSET))(this);
		}

	};
