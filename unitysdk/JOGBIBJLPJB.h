#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace System { class Object; }

#define JOGBIBJLPJB_BJJCMCHHKDJ_OFFSET UNITYSDK_OFFSET(0x3E74660)
#define JOGBIBJLPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x3E74630)
#define JOGBIBJLPJB_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1B4DBB10)
#define JOGBIBJLPJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E74720)
#define JOGBIBJLPJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E746C0)
#define JOGBIBJLPJB_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1B4DBA70)
#define JOGBIBJLPJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E747B0)

inline static constexpr unsigned int JOGBIBJLPJB_TypeDefinitionIndex = 71255;

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
