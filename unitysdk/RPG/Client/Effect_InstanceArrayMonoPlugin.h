#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::TAUtils { class QuaternionTransformAnimationCurve; }
namespace RPG::Client::TAUtils { class Vector3AnimationCurve; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD3C8E0)

namespace RPG::Client
{
	class Effect_InstanceArrayMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RendererPackages; // 0x30
		::RPG::Client::TAUtils::SimpleTransform RelativeTransform; // 0x38
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* AdditionalTransformers; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* PossiblePropertiesFloat; // 0x68
		::System::Collections::Generic::List_1<::System::Object*>* PossiblePropertiesVector; // 0x70
		::System::Boolean EnableAnimation; // 0x78
		::System::Byte _padding1[0x3];
		::System::Single AnimationTime; // 0x7C
		::System::Single AnimationDuration; // 0x80
		::System::Byte _padding2[0x4];
		::RPG::Client::TAUtils::Vector3AnimationCurve* AnimationTranslation; // 0x88
		::RPG::Client::TAUtils::Vector3AnimationCurve* AnimationRotation; // 0x90
		::RPG::Client::TAUtils::Vector3AnimationCurve* AnimationScale; // 0x98
		::System::Collections::Generic::List_1<::System::Object*>* AnimationPropertyFloat; // 0xA0
		::System::Collections::Generic::List_1<::System::Object*>* AnimationPropertyVector; // 0xA8
		::System::Boolean AutoPlay; // 0xB0
		::System::Byte _padding3[0x3];
		::System::Single AutoPlaySpeed; // 0xB4
		::System::Boolean AutoPlayLoop; // 0xB8
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector2 AutoPlayLoopRange; // 0xBC
		::System::Boolean UseRandomSeed; // 0xC4
		::System::Byte _padding5[0x3];
		::System::Int32 RandomSeed; // 0xC8
		::System::Byte _padding6[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* InitialTransforms; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* InitialTransformProxies; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::QuaternionTransformAnimationCurve*>* InitialTransformAnimations; // 0xE0
		::System::Collections::Generic::List_1<::System::Single>* InitialAnimationDelays; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
