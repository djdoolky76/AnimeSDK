#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMGLILNMKDP_AdditionalTransformAnim_AdditionalTransformAnimType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define FMGLILNMKDP_ADDITIONALTRANSFORMANIM_BIECOAKLHOK_OFFSET UNITYSDK_OFFSET(0x1584A020)
#define FMGLILNMKDP_ADDITIONALTRANSFORMANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1584A390)
#define FMGLILNMKDP_ADDITIONALTRANSFORMANIM_HNEADNPJHEB_OFFSET UNITYSDK_OFFSET(0x15849EC0)

inline static constexpr unsigned int FMGLILNMKDP_AdditionalTransformAnim_TypeDefinitionIndex = 70334;

	class FMGLILNMKDP_AdditionalTransformAnim : public ::System::Object
	{
	public:
		::FMGLILNMKDP_AdditionalTransformAnim_AdditionalTransformAnimType Type; // 0x10
		::UnityEngine::Vector2 RandomRotationAngleSpeedRange; // 0x14
		::UnityEngine::Vector2 RandomRotationAxisXRange; // 0x1C
		::UnityEngine::Vector2 RandomRotationAxisYRange; // 0x24
		::UnityEngine::Vector2 RandomRotationAxisZRange; // 0x2C
		::UnityEngine::Vector2 FadeScaleInOutPoint; // 0x34
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* FadeScaleCurve; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_ADDITIONALTRANSFORMANIM_CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion HNEADNPJHEB(::System::Single a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMGLILNMKDP_ADDITIONALTRANSFORMANIM_HNEADNPJHEB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BIECOAKLHOK(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMGLILNMKDP_ADDITIONALTRANSFORMANIM_BIECOAKLHOK_OFFSET))(this, a1);
		}

	};
