#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CoopModeSubsystem_RegionGroupInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EIMIEPOMPFD;
class NKDBEDEEKOB;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COOPMODESUBSYSTEM_ENTERCOOPSOLOMODE_OFFSET UNITYSDK_OFFSET(0x1A060570)
#define MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1A060FE0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYSTART_OFFSET UNITYSDK_OFFSET(0x1A060E00)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_ISCOOPREGIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1A060550)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_ISINCOOPSTORYMODE_OFFSET UNITYSDK_OFFSET(0x1A05FE40)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_LASTREGIONINFO_OFFSET UNITYSDK_OFFSET(0x1A060D10)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_PREVLASTREGIONINFO_OFFSET UNITYSDK_OFFSET(0x1A060D80)
#define MOLEMOLE_COOPMODESUBSYSTEM_ISENTITYHIDEBYMPSOLOMODE_OFFSET UNITYSDK_OFFSET(0x1A05FE60)
#define MOLEMOLE_COOPMODESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A05FF60)
#define MOLEMOLE_COOPMODESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A060050)
#define MOLEMOLE_COOPMODESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A05FFF0)
#define MOLEMOLE_COOPMODESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A05FF00)
#define MOLEMOLE_COOPMODESUBSYSTEM_SET_ISCOOPREGIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1A060560)
#define MOLEMOLE_COOPMODESUBSYSTEM_SET_ISINCOOPSTORYMODE_OFFSET UNITYSDK_OFFSET(0x1A05FE50)
#define MOLEMOLE_COOPMODESUBSYSTEM_SOLODISABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x1A0600B0)
#define MOLEMOLE_COOPMODESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A061250)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A0612B0)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A061340)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A0613D0)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A061460)

namespace MoleMole
{
	inline static constexpr unsigned int CoopModeSubsystem_TypeDefinitionIndex = 84995;

	class CoopModeSubsystem
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _regionGroupInfoList; // 0x10
		::System::Boolean _IsInCoopStoryMode_k__BackingField; // 0x18
		::System::Boolean _IsCoopRegionStarted_k__BackingField; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 _validIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInCoopStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_GET_ISINCOOPSTORYMODE_OFFSET))(this);
		}

		::System::Void set_IsInCoopStoryMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_SET_ISINCOOPSTORYMODE_OFFSET))(this, value);
		}

		::System::Boolean IsEntityHideByMpSoloMode(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ISENTITYHIDEBYMPSOLOMODE_OFFSET))(this, entity);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void SoloDisableAvatar(::MoleMole::EntityHandle entityMaster)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_SOLODISABLEAVATAR_OFFSET))(this, entityMaster);
		}

		::System::Boolean get_IsCoopRegionStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_GET_ISCOOPREGIONSTARTED_OFFSET))(this);
		}

		::System::Void set_IsCoopRegionStarted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_SET_ISCOOPREGIONSTARTED_OFFSET))(this, value);
		}

		::System::Boolean EnterCoopSoloMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ENTERCOOPSOLOMODE_OFFSET))(this);
		}

		::MoleMole::CoopModeSubsystem_RegionGroupInfo get_lastRegionInfo()
		{
			return ((::MoleMole::CoopModeSubsystem_RegionGroupInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_GET_LASTREGIONINFO_OFFSET))(this);
		}

		::MoleMole::CoopModeSubsystem_RegionGroupInfo get_prevLastRegionInfo()
		{
			return ((::MoleMole::CoopModeSubsystem_RegionGroupInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_GET_PREVLASTREGIONINFO_OFFSET))(this);
		}

		::System::Void EnterRegionPlayStart(::NKDBEDEEKOB* notify)
		{
			return ((::System::Void(*)(::PVOID, ::NKDBEDEEKOB*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYSTART_OFFSET))(this, notify);
		}

		::System::Void EnterRegionPlayFinish(::EIMIEPOMPFD* notify)
		{
			return ((::System::Void(*)(::PVOID, ::EIMIEPOMPFD*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYFINISH_OFFSET))(this, notify);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
