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

#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6E2730)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6E2720)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6E2BC0)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6E2840)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_GETCONTROLTIMEPOINTLIST_OFFSET UNITYSDK_OFFSET(0x1C6E2F30)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C6E2830)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6E2C20)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6E28C0)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6E2D80)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6E2A60)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E30B0)
#define MOLEMOLE_CONFIG_HITAIRSTATECONTROL___BASE_GETCONTROLTIMEPOINTLIST_OFFSET UNITYSDK_OFFSET(0x1C6E30C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitAirStateControl_TypeDefinitionIndex = 57055;

	class HitAirStateControl : public ::MoleMole::Config::ConfigMovementStateControl
	{
	public:
		::System::Single ToFallNormalizedTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovementStateControl* Clone()
		{
			return ((::MoleMole::Config::ConfigMovementStateControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HitAirStateControl* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HitAirStateControl*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HitAirStateControl* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HitAirStateControl*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Collections::Generic::List_1<::DBJDGODFDCA*>* GetControlTimePointList()
		{
			return ((::System::Collections::Generic::List_1<::DBJDGODFDCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL_GETCONTROLTIMEPOINTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DBJDGODFDCA*>* __base_GetControlTimePointList()
		{
			return ((::System::Collections::Generic::List_1<::DBJDGODFDCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITAIRSTATECONTROL___BASE_GETCONTROLTIMEPOINTLIST_OFFSET))(this);
		}
	};
}
