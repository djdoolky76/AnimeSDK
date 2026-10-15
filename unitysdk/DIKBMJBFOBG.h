#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ContributionOwner.h"
namespace System { class Object; }
namespace System { class String; }

#define DIKBMJBFOBG_CTOR_OFFSET UNITYSDK_OFFSET(0x54B0C0)
#define DIKBMJBFOBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x54B1A0)
#define DIKBMJBFOBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x54B0F0)
#define DIKBMJBFOBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x54B1B0)
#define DIKBMJBFOBG_GET_BLOCKNAME_OFFSET UNITYSDK_OFFSET(0x1D30)
#define DIKBMJBFOBG_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x211F0)
#define DIKBMJBFOBG_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0xACE0)
#define DIKBMJBFOBG_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x3260)

	struct alignas(8) DIKBMJBFOBG
	{
		::System::String* _BlockName_k__BackingField; // 0x10
		::System::Int32 _RegionId_k__BackingField; // 0x18
		::RPG::Client::ContributionOwner _Owner_k__BackingField; // 0x1C
		::System::Int32 _Slot_k__BackingField; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::RPG::Client::ContributionOwner a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::RPG::Client::ContributionOwner, ::System::Int32))((::PBYTE)hIl2Cpp + DIKBMJBFOBG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_BlockName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBMJBFOBG_GET_BLOCKNAME_OFFSET))(this);
		}

		::System::Int32 get_RegionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBMJBFOBG_GET_REGIONID_OFFSET))(this);
		}

		::RPG::Client::ContributionOwner get_Owner()
		{
			return ((::RPG::Client::ContributionOwner(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBMJBFOBG_GET_OWNER_OFFSET))(this);
		}

		::System::Int32 get_Slot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBMJBFOBG_GET_SLOT_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::DIKBMJBFOBG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIKBMJBFOBG))((::PBYTE)hIl2Cpp + DIKBMJBFOBG_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIKBMJBFOBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBMJBFOBG_GETHASHCODE_OFFSET))(this);
		}

	};
