#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LAJHHHCPIGN.h"
#include "unitysdk/PJGGDJJPPJP_ALLPGHPMHHC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGROTATION_APPLYCONFIGROTATIONSTEER_OFFSET UNITYSDK_OFFSET(0x121C9770)
#define MOLEMOLE_CONFIG_CONFIGROTATION_CLONE_OFFSET UNITYSDK_OFFSET(0x121C9BD0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x121C9BC0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8A39E0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x121C9CE0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x121C9CD0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8A3A40)
#define MOLEMOLE_CONFIG_CONFIGROTATION_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x121C9D60)
#define MOLEMOLE_CONFIG_CONFIGROTATION_ONENDROTATION_OFFSET UNITYSDK_OFFSET(0x121C95A0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_ONSTARTROTATION_OFFSET UNITYSDK_OFFSET(0x121C9400)
#define MOLEMOLE_CONFIG_CONFIGROTATION_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8A3E50)
#define MOLEMOLE_CONFIG_CONFIGROTATION_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8A3910)
#define MOLEMOLE_CONFIG_CONFIGROTATION_SETUP_OFFSET UNITYSDK_OFFSET(0x121C9240)
#define MOLEMOLE_CONFIG_CONFIGROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x121C9220)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotation_TypeDefinitionIndex = 41336;

	class ConfigRotation : public ::System::Object
	{
	public:
		// static const ::System::Single REACH_THRESHOLD; // 0x0
		::System::Boolean AllowRootMotionRotation; // 0x10
		::System::Boolean FreezeRotateY; // 0x11
		::System::Boolean FreezeRotateXZ; // 0x12
		::System::Boolean _isRotationStarted; // 0x13
		::System::Single Duration; // 0x14
		::LAJHHHCPIGN TimesUpRotateOption; // 0x18
		::UnityEngine::Vector3 _originalForward; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::PJGGDJJPPJP_ALLPGHPMHHC& rotateState, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_SETUP_OFFSET))(this, movementComponent, other, rotateState, caster, instancedAbility);
		}

		::System::Void OnStartRotation(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_ONSTARTROTATION_OFFSET))(this, entity);
		}

		::System::Void OnEndRotation(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_ONENDROTATION_OFFSET))(this, entity);
		}

		::System::Void ApplyConfigRotationSteer(::GEIHCPAOKKK* modelComponent, ::UnityEngine::Vector3 steerDir, ::System::Boolean isInstant, ::UnityEngine::Vector3 up, ::System::Boolean applyRotationDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_APPLYCONFIGROTATIONSTEER_OFFSET))(this, modelComponent, steerDir, isInstant, up, applyRotationDirectly);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotation* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotation* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
