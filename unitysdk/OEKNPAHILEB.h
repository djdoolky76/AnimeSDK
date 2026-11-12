#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define OEKNPAHILEB_CTOR_OFFSET UNITYSDK_OFFSET(0xC6E8F60)
#define OEKNPAHILEB_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xC6E8E80)
#define OEKNPAHILEB_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xC6E8EC0)
#define OEKNPAHILEB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC6E8C70)
#define OEKNPAHILEB_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xC6E8C80)

inline static constexpr unsigned int OEKNPAHILEB_TypeDefinitionIndex = 57351;

	class OEKNPAHILEB : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::System::String* BBMMBAKDJBC; // 0x28
		::System::String* MMILCIBMANG; // 0x30
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKNPAHILEB_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKNPAHILEB_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKNPAHILEB_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKNPAHILEB_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKNPAHILEB_ELEPDOMDAGA_OFFSET))(this);
		}

	};
