#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define MHHOMOMKPFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB9350C0)
#define MHHOMOMKPFF_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB935000)
#define MHHOMOMKPFF_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB935040)
#define MHHOMOMKPFF_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB934E30)
#define MHHOMOMKPFF_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB934E40)

inline static constexpr unsigned int MHHOMOMKPFF_TypeDefinitionIndex = 56158;

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
