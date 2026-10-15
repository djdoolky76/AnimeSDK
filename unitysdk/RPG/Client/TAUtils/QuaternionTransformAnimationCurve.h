#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
namespace RPG::Client::TAUtils { class Vector3AnimationCurve; }
namespace RPG::Client::TAUtils { class Vector4AnimationCurve; }

#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE188D50)
#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xE188760)
#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0xE188B10)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int QuaternionTransformAnimationCurve_TypeDefinitionIndex = 73646;

	class QuaternionTransformAnimationCurve : public ::System::Object
	{
	public:
		::RPG::Client::TAUtils::Vector3AnimationCurve* position; // 0x10
		::RPG::Client::TAUtils::Vector4AnimationCurve* rotation; // 0x18
		::RPG::Client::TAUtils::Vector3AnimationCurve* scale; // 0x20
		::System::Boolean rotationUseQuaternion; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_CTOR_OFFSET))(this);
		}

		::RPG::Client::TAUtils::QuaternionTransform KFGJEKJHIMB(::System::Single a1)
		{
			return ((::RPG::Client::TAUtils::QuaternionTransform(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORMANIMATIONCURVE_NLDLLPECLCH_OFFSET))(this);
		}

	};
}
