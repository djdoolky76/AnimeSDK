#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define DBKEBIADBHN_CTOR_OFFSET UNITYSDK_OFFSET(0xE223150)
#define DBKEBIADBHN_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xE223090)
#define DBKEBIADBHN_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xE2230D0)
#define DBKEBIADBHN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE222EB0)
#define DBKEBIADBHN_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xE222EC0)

inline static constexpr unsigned int DBKEBIADBHN_TypeDefinitionIndex = 56138;

	class DBKEBIADBHN : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKEBIADBHN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKEBIADBHN_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKEBIADBHN_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKEBIADBHN_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKEBIADBHN_ELEPDOMDAGA_OFFSET))(this);
		}

	};
