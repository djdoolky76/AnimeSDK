#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define KIOFGMCFPON_CTOR_OFFSET UNITYSDK_OFFSET(0xB436C10)
#define KIOFGMCFPON_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB436B20)
#define KIOFGMCFPON_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB436B60)
#define KIOFGMCFPON_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB436920)
#define KIOFGMCFPON_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB436930)

inline static constexpr unsigned int KIOFGMCFPON_TypeDefinitionIndex = 56097;

	class KIOFGMCFPON : public ::DBGDNLLDPFI
	{
	public:
		::System::String* GMNPKDNIPJE; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOFGMCFPON_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOFGMCFPON_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOFGMCFPON_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOFGMCFPON_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOFGMCFPON_ELEPDOMDAGA_OFFSET))(this);
		}

	};
