#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
namespace RPG::Client::TAUtils { class Vector3AnimationCurve; }

#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE1957D0)
#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xE195590)
#define RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0xE195670)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int SimpleTransformAnimationCurve_TypeDefinitionIndex = 73646;

	class SimpleTransformAnimationCurve : public ::System::Object
	{
	public:
		::RPG::Client::TAUtils::Vector3AnimationCurve* position; // 0x10
		::RPG::Client::TAUtils::Vector3AnimationCurve* rotation; // 0x18
		::RPG::Client::TAUtils::Vector3AnimationCurve* scale; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_CTOR_OFFSET))(this);
		}

		::RPG::Client::TAUtils::SimpleTransform KFGJEKJHIMB(::System::Single a1)
		{
			return ((::RPG::Client::TAUtils::SimpleTransform(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_SIMPLETRANSFORMANIMATIONCURVE_NLDLLPECLCH_OFFSET))(this);
		}

	};
}
