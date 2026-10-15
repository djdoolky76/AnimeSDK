#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"

#define NCPLKHJEBFG_AACOKONKPKC_OFFSET UNITYSDK_OFFSET(0x1FC20)
#define NCPLKHJEBFG_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB1E270)
#define NCPLKHJEBFG_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xBB1DE20)

inline static constexpr unsigned int NCPLKHJEBFG_TypeDefinitionIndex = 57457;

	struct alignas(4) NCPLKHJEBFG
	{
		::System::Int32 PLLLPAOABLC; // 0x10
		::System::UInt32 MMPDHHIKGLJ; // 0x14
		::System::Boolean BNCGDPKJLPL; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x1C
		::System::Boolean BCAMNPDLBNM; // 0x20
		static ::NCPLKHJEBFG* StaticGet_HGLIFJGHADE()
		{
			return (::NCPLKHJEBFG*)UnitySDK::FromName("", "NCPLKHJEBFG")->GetStaticField(0x52B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPLKHJEBFG_CCTOR_OFFSET))();
		}

		/*
		::System::Boolean AACOKONKPKC(::NCPLKHJEBFG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCPLKHJEBFG))((::PBYTE)hIl2Cpp + NCPLKHJEBFG_AACOKONKPKC_OFFSET))(this, a1);
		}
		*/

		/*
		static ::NCPLKHJEBFG EHFLDBMLBPM()
		{
			return ((::NCPLKHJEBFG(*)())((::PBYTE)hIl2Cpp + NCPLKHJEBFG_EHFLDBMLBPM_OFFSET))();
		}
		*/

	};
