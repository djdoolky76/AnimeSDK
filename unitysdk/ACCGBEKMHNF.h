#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
class CAKNHIMMBOM;

#define ACCGBEKMHNF_GJGNIIOEAMC_OFFSET UNITYSDK_OFFSET(0x1C877CF0)
#define ACCGBEKMHNF_HOMPNAKMKOH_1_OFFSET UNITYSDK_OFFSET(0x1C877C20)
#define ACCGBEKMHNF_HOMPNAKMKOH_OFFSET UNITYSDK_OFFSET(0x1C877B00)
#define ACCGBEKMHNF_KAMMPPOEHFM_OFFSET UNITYSDK_OFFSET(0x1C877DD0)

	struct alignas(8) ACCGBEKMHNF
	{
		::System::UInt32 JCJGJBLENCP; // 0x10
		::System::UInt32 EDIGEANPBNL; // 0x14
		::CAKNHIMMBOM* GMNANGJHBPK; // 0x18
		::RPG::GameCore::Match3::BombType HDCBHKGBABI; // 0x20
		::System::UInt32 JDCOJKMKFIA; // 0x24
		::System::Boolean NLDBOFMDOHJ; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::Match3::BombType JBDBEEKACGA; // 0x2C
		::System::Boolean MJIBLFAGEED; // 0x30
		::System::Byte _padding1[0x3];
		::System::UInt32 NJHBEDINIOH; // 0x34
		::System::UInt32 CKKOPLEHHGL; // 0x38
		/*
		static ::ACCGBEKMHNF HOMPNAKMKOH(::System::UInt32 a1, ::System::UInt32 a2, ::CAKNHIMMBOM* a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::Boolean a6, ::RPG::GameCore::Match3::BombType a7, ::System::UInt32 a8, ::System::UInt32 a9)
		{
			return ((::ACCGBEKMHNF(*)(::System::UInt32, ::System::UInt32, ::CAKNHIMMBOM*, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ACCGBEKMHNF_HOMPNAKMKOH_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		static ::ACCGBEKMHNF HOMPNAKMKOH_1(::System::UInt32 a1, ::System::UInt32 a2, ::CAKNHIMMBOM* a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::ACCGBEKMHNF(*)(::System::UInt32, ::System::UInt32, ::CAKNHIMMBOM*, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ACCGBEKMHNF_HOMPNAKMKOH_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::ACCGBEKMHNF GJGNIIOEAMC(::System::UInt32 a1, ::System::UInt32 a2, ::CAKNHIMMBOM* a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::ACCGBEKMHNF(*)(::System::UInt32, ::System::UInt32, ::CAKNHIMMBOM*, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ACCGBEKMHNF_GJGNIIOEAMC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::ACCGBEKMHNF KAMMPPOEHFM(::System::UInt32 a1, ::System::UInt32 a2, ::CAKNHIMMBOM* a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::ACCGBEKMHNF(*)(::System::UInt32, ::System::UInt32, ::CAKNHIMMBOM*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ACCGBEKMHNF_KAMMPPOEHFM_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

	};
