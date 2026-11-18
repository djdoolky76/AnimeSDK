#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_EROSIONDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x18C3F540)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_GETCUREYEPERCENT_OFFSET UNITYSDK_OFFSET(0x18C3FC40)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_GETCURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x18C3F9E0)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18C3F380)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C3F7F0)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONEROSIONAREAUPDATEFINISH_OFFSET UNITYSDK_OFFSET(0x18C3F990)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONEROSIONSTAGECHANGED_OFFSET UNITYSDK_OFFSET(0x18C3FBF0)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_SENDUICHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x18C3FAF0)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3FDE0)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18C3FDF0)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C3FE80)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovErosionEyeSubsystem_TypeDefinitionIndex = 53576;

	class ZenkovErosionEyeSubsystem
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* AllErosionAreaList; // 0x10
		::System::Single debugPercent; // 0x18
		::System::UInt32 OpenEyeCount; // 0x1C
		::System::Boolean debug; // 0x20
		::System::Boolean HasErosionData; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnErosionAreaUpdateFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONEROSIONAREAUPDATEFINISH_OFFSET))(this, args);
		}

		::System::Void ErosionDataUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_EROSIONDATAUPDATE_OFFSET))(this);
		}

		::System::Int32 GetCurrentStage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_GETCURRENTSTAGE_OFFSET))(this);
		}

		::System::Void OnErosionStageChanged(::System::Int32 erosionStage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONEROSIONSTAGECHANGED_OFFSET))(this, erosionStage);
		}

		::System::Single GetCurEyePercent(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_GETCUREYEPERCENT_OFFSET))(this, index);
		}

		::System::Void SendUIChangeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_SENDUICHANGEEVENT_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
