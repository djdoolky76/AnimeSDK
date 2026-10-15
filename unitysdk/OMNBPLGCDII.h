#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define OMNBPLGCDII_CTOR_OFFSET UNITYSDK_OFFSET(0xBF34680)
#define OMNBPLGCDII_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBF34580)
#define OMNBPLGCDII_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBF345C0)
#define OMNBPLGCDII_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBF34370)
#define OMNBPLGCDII_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBF34380)

inline static constexpr unsigned int OMNBPLGCDII_TypeDefinitionIndex = 56127;

	class OMNBPLGCDII : public ::DBGDNLLDPFI
	{
	public:
		::System::String* ICEPLFPKAHC; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::UInt32 CEGOPEIKDLA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNBPLGCDII_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNBPLGCDII_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNBPLGCDII_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNBPLGCDII_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNBPLGCDII_ELEPDOMDAGA_OFFSET))(this);
		}

	};
