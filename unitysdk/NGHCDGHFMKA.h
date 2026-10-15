#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class NGHCDGHFMKA;

#define NGHCDGHFMKA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBA0DF0)
#define NGHCDGHFMKA_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA0EB0)
#define NGHCDGHFMKA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBBA0EC0)
#define NGHCDGHFMKA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xBBA0EE0)
#define NGHCDGHFMKA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBBA0ED0)
#define NGHCDGHFMKA_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xBBA0EF0)

inline static constexpr unsigned int NGHCDGHFMKA_TypeDefinitionIndex = 75079;

	class NGHCDGHFMKA : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Name_k__BackingField; // 0x10
		::System::UInt32 _Rarity_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCDGHFMKA_CTOR_OFFSET))(this);
		}

		static ::NGHCDGHFMKA* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::NGHCDGHFMKA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NGHCDGHFMKA_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCDGHFMKA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NGHCDGHFMKA_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCDGHFMKA_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGHCDGHFMKA_SET_RARITY_OFFSET))(this, a1);
		}

	};
