#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define MGGFHBIECOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB91D080)
#define MGGFHBIECOP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB91D030)
#define MGGFHBIECOP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB91CF80)
#define MGGFHBIECOP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB91CE10)
#define MGGFHBIECOP_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB91CE20)

inline static constexpr unsigned int MGGFHBIECOP_TypeDefinitionIndex = 56123;

	class MGGFHBIECOP : public ::DBGDNLLDPFI
	{
	public:
		::System::String* LMODFJIHGCH; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFHBIECOP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFHBIECOP_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFHBIECOP_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFHBIECOP_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFHBIECOP_ELEPDOMDAGA_OFFSET))(this);
		}

	};
