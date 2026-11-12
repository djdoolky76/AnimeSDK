#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEANOGAFBGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AFAF0)
#define AEANOGAFBGK_GET_ADDSTATMAP_OFFSET UNITYSDK_OFFSET(0xB7AFAD0)
#define AEANOGAFBGK_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xB7AFAB0)
#define AEANOGAFBGK_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB7AFA90)
#define AEANOGAFBGK_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0xB7AFA50)
#define AEANOGAFBGK_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB7AFA70)
#define AEANOGAFBGK_SET_ADDSTATMAP_OFFSET UNITYSDK_OFFSET(0xB7AFAE0)
#define AEANOGAFBGK_SET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xB7AFAC0)
#define AEANOGAFBGK_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB7AFAA0)
#define AEANOGAFBGK_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0xB7AFA60)
#define AEANOGAFBGK_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB7AFA80)

inline static constexpr unsigned int AEANOGAFBGK_TypeDefinitionIndex = 84500;

	class AEANOGAFBGK : public ::System::Object
	{
	public:
		::System::String* _AvatarIconPath_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _AddStatMap_k__BackingField; // 0x18
		::System::UInt32 _DriverID_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::RPG::Client::TextID _Desc_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEANOGAFBGK_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DriverID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEANOGAFBGK_GET_DRIVERID_OFFSET))(this);
		}

		::System::Void set_DriverID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEANOGAFBGK_SET_DRIVERID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + AEANOGAFBGK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + AEANOGAFBGK_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + AEANOGAFBGK_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + AEANOGAFBGK_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_AvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEANOGAFBGK_GET_AVATARICONPATH_OFFSET))(this);
		}

		::System::Void set_AvatarIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AEANOGAFBGK_SET_AVATARICONPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_AddStatMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEANOGAFBGK_GET_ADDSTATMAP_OFFSET))(this);
		}

		::System::Void set_AddStatMap(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + AEANOGAFBGK_SET_ADDSTATMAP_OFFSET))(this, a1);
		}

	};
