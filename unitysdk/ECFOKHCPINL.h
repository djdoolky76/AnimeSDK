#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/RPG/Client/ComicDessert/ComicDessertDeviceId.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class HHDNPOIGMOP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define ECFOKHCPINL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D4A70)
#define ECFOKHCPINL_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1C3D4810)
#define ECFOKHCPINL_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1C3D4830)
#define ECFOKHCPINL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C3D4850)
#define ECFOKHCPINL_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1C3D48B0)
#define ECFOKHCPINL_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1C3D4870)
#define ECFOKHCPINL_GET_UNLOCKCYCLEID_OFFSET UNITYSDK_OFFSET(0x1C3D4890)
#define ECFOKHCPINL_GET_UPGRADECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C3D48D0)
#define ECFOKHCPINL_LPDOAOHKHMB_OFFSET UNITYSDK_OFFSET(0x1C3D48F0)
#define ECFOKHCPINL_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1C3D4820)
#define ECFOKHCPINL_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1C3D4840)
#define ECFOKHCPINL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C3D4860)
#define ECFOKHCPINL_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1C3D48C0)
#define ECFOKHCPINL_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1C3D4880)
#define ECFOKHCPINL_SET_UNLOCKCYCLEID_OFFSET UNITYSDK_OFFSET(0x1C3D48A0)
#define ECFOKHCPINL_SET_UPGRADECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C3D48E0)

inline static constexpr unsigned int ECFOKHCPINL_TypeDefinitionIndex = 77053;

	class ECFOKHCPINL : public ::System::Object
	{
	public:
		::System::String* _ModelPath_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::HHDNPOIGMOP*>* _UpgradeConfigs_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::RPG::Client::TextID _DeviceName_k__BackingField; // 0x28
		::BAMIOFOKCEB _UnlockCycleId_k__BackingField; // 0x38
		::RPG::Client::ComicDessert::ComicDessertDeviceId _DeviceId_k__BackingField; // 0x3C
		::System::UInt32 _MaxLevel_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFOKHCPINL_CTOR_OFFSET))(this);
		}

		::RPG::Client::ComicDessert::ComicDessertDeviceId get_DeviceId()
		{
			return ((::RPG::Client::ComicDessert::ComicDessertDeviceId(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFOKHCPINL_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::RPG::Client::ComicDessert::ComicDessertDeviceId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertDeviceId))((::PBYTE)hIl2Cpp + ECFOKHCPINL_SET_DEVICEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DeviceName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFOKHCPINL_GET_DEVICENAME_OFFSET))(this);
		}

		::System::Void set_DeviceName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + ECFOKHCPINL_SET_DEVICENAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFOKHCPINL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECFOKHCPINL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFOKHCPINL_GET_MODELPATH_OFFSET))(this);
		}

		::System::Void set_ModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECFOKHCPINL_SET_MODELPATH_OFFSET))(this, a1);
		}

		::BAMIOFOKCEB get_UnlockCycleId()
		{
			return ((::BAMIOFOKCEB(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFOKHCPINL_GET_UNLOCKCYCLEID_OFFSET))(this);
		}

		::System::Void set_UnlockCycleId(::BAMIOFOKCEB a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + ECFOKHCPINL_SET_UNLOCKCYCLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFOKHCPINL_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECFOKHCPINL_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::HHDNPOIGMOP*>* get_UpgradeConfigs()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::HHDNPOIGMOP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFOKHCPINL_GET_UPGRADECONFIGS_OFFSET))(this);
		}

		::System::Void set_UpgradeConfigs(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::HHDNPOIGMOP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::HHDNPOIGMOP*>*))((::PBYTE)hIl2Cpp + ECFOKHCPINL_SET_UPGRADECONFIGS_OFFSET))(this, a1);
		}

		::HHDNPOIGMOP* LPDOAOHKHMB(::System::UInt32 a1)
		{
			return ((::HHDNPOIGMOP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECFOKHCPINL_LPDOAOHKHMB_OFFSET))(this, a1);
		}

	};
