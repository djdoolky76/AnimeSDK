#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigRotationToTarget.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
class GEIHCPAOKKK;
class PJGGDJJPPJP;
namespace MoleMole::Config { class ConfigRotation; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_CLONE_OFFSET UNITYSDK_OFFSET(0x11EA0840)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x11EA07D0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11EA0B60)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11EA0950)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x11EA0940)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x11EA0750)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11EA0BF0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x11EA09D0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11EA0C50)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x11EA0A00)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_RECORDPOSROTPARAM_OFFSET UNITYSDK_OFFSET(0x11EA0490)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA0440)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION___BASE_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x11EA0E30)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION___BASE_RECORDPOSROTPARAM_OFFSET UNITYSDK_OFFSET(0x11EA0E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationToTargetRotation_TypeDefinitionIndex = 75427;

	class ConfigRotationToTargetRotation : public ::MoleMole::Config::ConfigRotationToTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION__CTOR_OFFSET))(this);
		}

		::System::Void RecordPosRotParam(::PJGGDJJPPJP* movementComponent, ::LFGBJHCEJID posRot)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::LFGBJHCEJID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_RECORDPOSROTPARAM_OFFSET))(this, movementComponent, posRot);
		}

		::UnityEngine::Vector3 GetRotationDir(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_GETROTATIONDIR_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotationToTargetRotation* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotationToTargetRotation*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotationToTargetRotation* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotationToTargetRotation*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::UnityEngine::Vector3 __base_GetRotationDir(::GEIHCPAOKKK* P0, ::PJGGDJJPPJP* P1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION___BASE_GETROTATIONDIR_OFFSET))(this, P0, P1);
		}

		::System::Void __base_RecordPosRotParam(::PJGGDJJPPJP* P0, ::LFGBJHCEJID P1)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::LFGBJHCEJID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGETROTATION___BASE_RECORDPOSROTPARAM_OFFSET))(this, P0, P1);
		}
	};
}
