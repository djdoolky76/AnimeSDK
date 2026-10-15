#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define MHHOMOMKPFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB93B0F0)
#define MHHOMOMKPFF_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB93B030)
#define MHHOMOMKPFF_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB93B070)
#define MHHOMOMKPFF_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB93AE60)
#define MHHOMOMKPFF_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB93AE70)

	class MHHOMOMKPFF : public ::DBGDNLLDPFI
	{
	public:
		::System::String* DFJJIKBPJHP; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHOMOMKPFF_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHOMOMKPFF_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHOMOMKPFF_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHOMOMKPFF_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHHOMOMKPFF_ELEPDOMDAGA_OFFSET))(this);
		}

	};
