#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RayfireRecorder_F00C440C0834CB26.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RayFire { class RFCache; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIRERECORDER_A225EFEED894447F_OFFSET UNITYSDK_OFFSET(0x29ABC00)
#define RAYFIRE_RAYFIRERECORDER_A4AA14819246AEAD_OFFSET UNITYSDK_OFFSET(0x29AC670)
#define RAYFIRE_RAYFIRERECORDER_B68EB16C0B07F835_OFFSET UNITYSDK_OFFSET(0x29ABE80)
#define RAYFIRE_RAYFIRERECORDER_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x29AB4E0)
#define RAYFIRE_RAYFIRERECORDER_E18465B6DB9F6720_OFFSET UNITYSDK_OFFSET(0x29AC610)
#define RAYFIRE_RAYFIRERECORDER_E49CB1E23A2D9AF3_OFFSET UNITYSDK_OFFSET(0x29AC830)
#define RAYFIRE_RAYFIRERECORDER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x29AC720)
#define RAYFIRE_RAYFIRERECORDER_F551E2F185D594CE_OFFSET UNITYSDK_OFFSET(0x29AC0A0)
#define RAYFIRE_RAYFIRERECORDER_FAAE5C71605297F2_OFFSET UNITYSDK_OFFSET(0x29AB520)
#define RAYFIRE_RAYFIRERECORDER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x29AB460)
#define RAYFIRE_RAYFIRERECORDER_FF5CA9FE9768D837_OFFSET UNITYSDK_OFFSET(0x29AB470)
#define RAYFIRE_RAYFIRERECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x29AC840)

namespace RayFire
{
	inline static constexpr unsigned int RayfireRecorder_TypeDefinitionIndex = 15565;

	class RayfireRecorder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RayFire::RayfireRecorder_F00C440C0834CB26 mode; // 0x20
		::System::Boolean recordOnStart; // 0x24
		::System::Byte _padding0[0x3];
		::System::String* clipName; // 0x28
		::System::Single duration; // 0x30
		::System::Int32 rate; // 0x34
		::System::Boolean reduceKeys; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single threshold; // 0x3C
		::System::Boolean playOnStart; // 0x40
		::System::Byte _padding2[0x7];
		::UnityEngine::AnimationClip* animationClip; // 0x48
		::UnityEngine::RuntimeAnimatorController* controller; // 0x50
		::System::Boolean setToKinematic; // 0x58
		::System::Boolean recorder; // 0x59
		::System::Byte _padding3[0x2];
		::System::Single recordedTime; // 0x5C
		::System::Int32 A0BD87BA2862B26F; // 0x60
		::System::Byte _padding4[0x4];
		::System::String* ED333162FE5C48E5; // 0x68
		::System::String* FB920A3140EA5B60; // 0x70
		::System::Single BFB9509EC62B709D; // 0x78
		::System::Byte _padding5[0x4];
		::UnityEngine::Animator* A2B120FE2BB45477; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* A00F01955994A233; // 0x88
		::System::Collections::Generic::List_1<::RayFire::RFCache*>* A4CAB34497D81221; // 0x90
		::System::Collections::Generic::List_1<::System::Single>* EFA83F530021557B; // 0x98

		::System::Void E49CB1E23A2D9AF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_E49CB1E23A2D9AF3_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void A225EFEED894447F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_A225EFEED894447F_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FF5CA9FE9768D837()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_FF5CA9FE9768D837_OFFSET))(this);
		}

		::System::Void F551E2F185D594CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_F551E2F185D594CE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER__CTOR_OFFSET))(this);
		}

		::System::Void E18465B6DB9F6720()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_E18465B6DB9F6720_OFFSET))(this);
		}

		::System::Void FAAE5C71605297F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_FAAE5C71605297F2_OFFSET))(this);
		}

		::System::Void B68EB16C0B07F835()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_B68EB16C0B07F835_OFFSET))(this);
		}

		::System::Void A4AA14819246AEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERECORDER_A4AA14819246AEAD_OFFSET))(this);
		}
	};
}
