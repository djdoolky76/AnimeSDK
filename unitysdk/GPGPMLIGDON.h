#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define GPGPMLIGDON_CTOR_OFFSET UNITYSDK_OFFSET(0x17DBB240)
#define GPGPMLIGDON_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x17DBB170)
#define GPGPMLIGDON_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x17DBB1B0)
#define GPGPMLIGDON_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17DBAF80)
#define GPGPMLIGDON_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x17DBAF90)

inline static constexpr unsigned int GPGPMLIGDON_TypeDefinitionIndex = 57355;

	class GPGPMLIGDON : public ::DBGDNLLDPFI
	{
	public:
		::System::String* BBMMBAKDJBC; // 0x10
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x18
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
