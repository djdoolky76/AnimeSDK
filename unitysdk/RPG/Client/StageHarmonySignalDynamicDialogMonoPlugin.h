#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDOHKCEJPJP.h"
class AirShipSubwaySchedule;
namespace System { class String; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FC4A0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0x1A8FC290)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1A8FC450)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0x1A8FBF90)
#define RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1A8FC240)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDynamicDialogMonoPlugin_TypeDefinitionIndex = 72975;

	class StageHarmonySignalDynamicDialogMonoPlugin
	{
	public:
		::System::Int32 SerialID; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* Channle; // 0x38
		::AirShipSubwaySchedule* SubwaySchedule; // 0x40
		::System::Boolean UseSameContext; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void Load(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::IDOHKCEJPJP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDYNAMICDIALOGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
