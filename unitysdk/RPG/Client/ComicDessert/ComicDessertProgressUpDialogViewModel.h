#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD509DB0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_DEVICEICONPATH_OFFSET UNITYSDK_OFFSET(0xD509E20)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0xD509E10)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_HASDEVICEUNLOCK_OFFSET UNITYSDK_OFFSET(0xD509E00)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_ISLONGTAIL_OFFSET UNITYSDK_OFFSET(0xD509E30)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xD509DF0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_STARTPROGRESS_OFFSET UNITYSDK_OFFSET(0xD509DE0)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertProgressUpDialogViewModel_TypeDefinitionIndex = 77123;

	class ComicDessertProgressUpDialogViewModel : public ::System::Object
	{
	public:
		::System::String* _DeviceIconPath_k__BackingField; // 0x10
		::System::UInt32 _StartProgress_k__BackingField; // 0x18
		::System::UInt32 _Progress_k__BackingField; // 0x1C
		::System::Boolean _HasDeviceUnlock_k__BackingField; // 0x20
		::System::Boolean _IsLongTail_k__BackingField; // 0x21
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID _DeviceName_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::RPG::Client::TextID a4, ::System::String* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::Client::TextID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 get_StartProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_STARTPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_PROGRESS_OFFSET))(this);
		}

		::System::Boolean get_HasDeviceUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_HASDEVICEUNLOCK_OFFSET))(this);
		}

		::RPG::Client::TextID get_DeviceName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_DEVICENAME_OFFSET))(this);
		}

		::System::String* get_DeviceIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_DEVICEICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTPROGRESSUPDIALOGVIEWMODEL_GET_ISLONGTAIL_OFFSET))(this);
		}

	};
}
