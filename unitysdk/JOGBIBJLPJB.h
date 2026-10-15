#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace System { class Object; }

#define JOGBIBJLPJB_BJJCMCHHKDJ_OFFSET UNITYSDK_OFFSET(0x127E0)
#define JOGBIBJLPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x127B0)
#define JOGBIBJLPJB_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xB2A0480)
#define JOGBIBJLPJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x128A0)
#define JOGBIBJLPJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x12840)
#define JOGBIBJLPJB_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xB2A03E0)
#define JOGBIBJLPJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x12930)

	struct alignas(4) JOGBIBJLPJB
	{
		::System::Int32 EOGHMIGDMGJ; // 0x10
		::System::Boolean GEMLHAGDHKA; // 0x14
		::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*))((::PBYTE)hIl2Cpp + JOGBIBJLPJB_CTOR_OFFSET))(this, a1);
		}

		/*
		::JOGBIBJLPJB BJJCMCHHKDJ()
		{
			return ((::JOGBIBJLPJB(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGBIBJLPJB_BJJCMCHHKDJ_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean Equals(::JOGBIBJLPJB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + JOGBIBJLPJB_EQUALS_OFFSET))(this, a1);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::Boolean(*)(::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + JOGBIBJLPJB_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::JOGBIBJLPJB a1, ::JOGBIBJLPJB a2)
		{
			return ((::System::Boolean(*)(::JOGBIBJLPJB, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + JOGBIBJLPJB_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOGBIBJLPJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGBIBJLPJB_GETHASHCODE_OFFSET))(this);
		}

	};
