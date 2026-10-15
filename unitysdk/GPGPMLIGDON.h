#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define GPGPMLIGDON_CTOR_OFFSET UNITYSDK_OFFSET(0x15B597B0)
#define GPGPMLIGDON_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15B596E0)
#define GPGPMLIGDON_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15B59720)
#define GPGPMLIGDON_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15B594F0)
#define GPGPMLIGDON_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15B59500)

	class GPGPMLIGDON : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::System::String* BBMMBAKDJBC; // 0x28
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGPMLIGDON_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGPMLIGDON_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGPMLIGDON_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGPMLIGDON_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGPMLIGDON_ELEPDOMDAGA_OFFSET))(this);
		}

	};
