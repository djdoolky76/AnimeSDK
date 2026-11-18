#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MiHoYo/SDK/DeviceInfoManager_MEMORY_INFO.h"

namespace MiHoYo::SDK { class DeviceInfoManager_MiHoYoSDKDriverInfo; }
namespace System { class String; }

#define MIHOYO_SDK_DEVICEINFOMANAGER_GETCURRENTDRIVENAME_OFFSET UNITYSDK_OFFSET(0x1F150700)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETDISKFREESPACEEXA_OFFSET UNITYSDK_OFFSET(0x1F150A60)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVEINFO_OFFSET UNITYSDK_OFFSET(0x1F150720)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVETOTALFREESPACE_OFFSET UNITYSDK_OFFSET(0x1F150850)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVETOTALSPACE_OFFSET UNITYSDK_OFFSET(0x1F1506D0)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETMACADDRESS_OFFSET UNITYSDK_OFFSET(0x1F150010)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKADAPTERDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F150A10)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKADAPTERLIST_OFFSET UNITYSDK_OFFSET(0x1F1501C0)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKTYPE_OFFSET UNITYSDK_OFFSET(0x1F1505A0)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETRAMREMAIN_OFFSET UNITYSDK_OFFSET(0x1F150900)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GLOBALMEMORYSTATUS_OFFSET UNITYSDK_OFFSET(0x1F150880)
#define MIHOYO_SDK_DEVICEINFOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F150B10)
#define MIHOYO_SDK_DEVICEINFOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F14FFE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DeviceInfoManager_TypeDefinitionIndex = 35495;

	class DeviceInfoManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DeviceInfoManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DeviceInfoManager**)Il2CppClass::FromTypeDefinitionIndex(DeviceInfoManager_TypeDefinitionIndex)->GetStaticField(0x2AB00);
		}
		::System::String* strNetworkType; // 0x10
		::System::String* strMacAddr; // 0x18
		::System::String* strAdapterInfoList; // 0x20
		::System::String* strAdapterDescription; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER__CCTOR_OFFSET))();
		}

		::System::Double GetDriveTotalSpace(::System::String* strDriveName)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVETOTALSPACE_OFFSET))(this, strDriveName);
		}

		::System::Double GetDriveTotalFreeSpace(::System::String* strDriveName)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVETOTALFREESPACE_OFFSET))(this, strDriveName);
		}

		static ::System::Void GlobalMemoryStatus(::MiHoYo::SDK::DeviceInfoManager_MEMORY_INFO& memInfo)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::DeviceInfoManager_MEMORY_INFO&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GLOBALMEMORYSTATUS_OFFSET))(memInfo);
		}

		::System::Double GetRamRemain()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETRAMREMAIN_OFFSET))(this);
		}

		::System::String* GetMacAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETMACADDRESS_OFFSET))(this);
		}

		::System::String* GetNetworkAdapterDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKADAPTERDESCRIPTION_OFFSET))(this);
		}

		::System::String* GetNetworkAdapterList()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKADAPTERLIST_OFFSET))(this);
		}

		::System::String* GetNetworkType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKTYPE_OFFSET))(this);
		}

		::System::String* GetCurrentDriveName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETCURRENTDRIVENAME_OFFSET))(this);
		}

		static ::System::Int32 GetDiskFreeSpaceExA(::System::String* lpDirectoryName, ::System::Int64& lpFreeBytesAvailable, ::System::Int64& lpTotalNumberOfBytes, ::System::Int64& lpTotalNumberOfFreeBytes)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int64&, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETDISKFREESPACEEXA_OFFSET))(lpDirectoryName, lpFreeBytesAvailable, lpTotalNumberOfBytes, lpTotalNumberOfFreeBytes);
		}

		::MiHoYo::SDK::DeviceInfoManager_MiHoYoSDKDriverInfo* GetDriveInfo(::System::String* strDriveName)
		{
			return ((::MiHoYo::SDK::DeviceInfoManager_MiHoYoSDKDriverInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVEINFO_OFFSET))(this, strDriveName);
		}
	};
}
