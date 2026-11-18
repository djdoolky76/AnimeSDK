#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigMovementStateControl.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class DBJDGODFDCA;
class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_CLONE_OFFSET UNITYSDK_OFFSET(0x1BA469B0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA469A0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA46FC0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA46AC0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1BA47550)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETCONTROLTIMEPOINTLIST_OFFSET UNITYSDK_OFFSET(0x1BA47370)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BA46AB0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA47020)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA46B40)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA471C0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA46E60)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA475A0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL___BASE_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1BA475B0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL___BASE_GETCONTROLTIMEPOINTLIST_OFFSET UNITYSDK_OFFSET(0x1BA47640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitSkyStateControl_TypeDefinitionIndex = 38803;

	class HitSkyStateControl : public ::MoleMole::Config::ConfigMovementStateControl
	{
	public:
		::System::Single ToFallNormalizedTime; // 0x10
		::System::Single ToFloatNormalizedTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovementStateControl* Clone()
		{
			return ((::MoleMole::Config::ConfigMovementStateControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HitSkyStateControl* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HitSkyStateControl*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HitSkyStateControl* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HitSkyStateControl*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Collections::Generic::List_1<::DBJDGODFDCA*>* GetControlTimePointList()
		{
			return ((::System::Collections::Generic::List_1<::DBJDGODFDCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETCONTROLTIMEPOINTLIST_OFFSET))(this);
		}

		::System::Single GetAllowCheckFallDownNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET))(this);
		}

		::System::Single __base_GetAllowCheckFallDownNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL___BASE_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DBJDGODFDCA*>* __base_GetControlTimePointList()
		{
			return ((::System::Collections::Generic::List_1<::DBJDGODFDCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL___BASE_GETCONTROLTIMEPOINTLIST_OFFSET))(this);
		}
	};
}
