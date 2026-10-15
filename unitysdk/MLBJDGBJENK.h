#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class EOPFDKJOBIO;
class MLBJDGBJENK;
namespace System { class String; }

#define MLBJDGBJENK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A59E0)
#define MLBJDGBJENK_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB9A5880)
#define MLBJDGBJENK_GET_FULLDESC_OFFSET UNITYSDK_OFFSET(0xB9A58E0)
#define MLBJDGBJENK_GET_ID_OFFSET UNITYSDK_OFFSET(0xB9A5840)
#define MLBJDGBJENK_GET_MIDDLEDESC_OFFSET UNITYSDK_OFFSET(0xB9A58C0)
#define MLBJDGBJENK_GET_OWNERSNAME_OFFSET UNITYSDK_OFFSET(0xB9A58A0)
#define MLBJDGBJENK_GET_SERVANTCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0xB9A5860)
#define MLBJDGBJENK_IKOHLMDFNGH_OFFSET UNITYSDK_OFFSET(0xB9A5900)
#define MLBJDGBJENK_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB9A5890)
#define MLBJDGBJENK_SET_FULLDESC_OFFSET UNITYSDK_OFFSET(0xB9A58F0)
#define MLBJDGBJENK_SET_ID_OFFSET UNITYSDK_OFFSET(0xB9A5850)
#define MLBJDGBJENK_SET_MIDDLEDESC_OFFSET UNITYSDK_OFFSET(0xB9A58D0)
#define MLBJDGBJENK_SET_OWNERSNAME_OFFSET UNITYSDK_OFFSET(0xB9A58B0)
#define MLBJDGBJENK_SET_SERVANTCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0xB9A5870)

	class MLBJDGBJENK : public ::System::Object
	{
	public:
		::System::String* _FullDesc_k__BackingField; // 0x10
		::RPG::Client::TextID _OwnersName_k__BackingField; // 0x18
		::RPG::Client::TextID _Desc_k__BackingField; // 0x28
		::RPG::GameCore::FateRinHouguOwnerType _ServantCardOwnerType_k__BackingField; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x3C
		::RPG::Client::TextID _MiddleDesc_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLBJDGBJENK_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_ServantCardOwnerType()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_GET_SERVANTCARDOWNERTYPE_OFFSET))(this);
		}

		::System::Void set_ServantCardOwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + MLBJDGBJENK_SET_SERVANTCARDOWNERTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OwnersName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_GET_OWNERSNAME_OFFSET))(this);
		}

		::System::Void set_OwnersName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_SET_OWNERSNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MiddleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_GET_MIDDLEDESC_OFFSET))(this);
		}

		::System::Void set_MiddleDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_SET_MIDDLEDESC_OFFSET))(this, a1);
		}

		::System::String* get_FullDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJDGBJENK_GET_FULLDESC_OFFSET))(this);
		}

		::System::Void set_FullDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLBJDGBJENK_SET_FULLDESC_OFFSET))(this, a1);
		}

		static ::MLBJDGBJENK* IKOHLMDFNGH(::EOPFDKJOBIO* a1)
		{
			return ((::MLBJDGBJENK*(*)(::EOPFDKJOBIO*))((::PBYTE)hIl2Cpp + MLBJDGBJENK_IKOHLMDFNGH_OFFSET))(a1);
		}

	};
