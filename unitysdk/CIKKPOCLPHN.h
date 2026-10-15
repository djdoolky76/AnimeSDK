#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define CIKKPOCLPHN_CTOR_OFFSET UNITYSDK_OFFSET(0xCF8D970)
#define CIKKPOCLPHN_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xCF8D740)
#define CIKKPOCLPHN_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xCF8D780)
#define CIKKPOCLPHN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCF8D410)
#define CIKKPOCLPHN_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xCF8D420)

	class CIKKPOCLPHN : public ::DBGDNLLDPFI
	{
	public:
		::System::String* MCLLALGABAB; // 0x10
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
		::RPG::GameCore::FixPoint DHPDILNLIPC; // 0x20
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Int32 ACHILGIPGKL; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKKPOCLPHN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKKPOCLPHN_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKKPOCLPHN_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKKPOCLPHN_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKKPOCLPHN_ELEPDOMDAGA_OFFSET))(this);
		}

	};
