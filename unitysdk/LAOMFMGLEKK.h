#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define LAOMFMGLEKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E9740)
#define LAOMFMGLEKK_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB5E9660)
#define LAOMFMGLEKK_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB5E96A0)
#define LAOMFMGLEKK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB5E9450)
#define LAOMFMGLEKK_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB5E9460)

inline static constexpr unsigned int LAOMFMGLEKK_TypeDefinitionIndex = 56141;

	class LAOMFMGLEKK : public ::DBGDNLLDPFI
	{
	public:
		::System::String* DINBCKPJJEL; // 0x10
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x18
		::System::String* BBMMBAKDJBC; // 0x30
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_ELEPDOMDAGA_OFFSET))(this);
		}

	};
