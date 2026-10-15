#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define GPGPMLIGDON_CTOR_OFFSET UNITYSDK_OFFSET(0x15B4DDF0)
#define GPGPMLIGDON_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15B4DD20)
#define GPGPMLIGDON_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15B4DD60)
#define GPGPMLIGDON_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15B4DB30)
#define GPGPMLIGDON_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15B4DB40)

inline static constexpr unsigned int GPGPMLIGDON_TypeDefinitionIndex = 56143;

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
