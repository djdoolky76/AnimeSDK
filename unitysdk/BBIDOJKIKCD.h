#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define BBIDOJKIKCD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E8D830)
#define BBIDOJKIKCD_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15E8D770)
#define BBIDOJKIKCD_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15E8D7B0)
#define BBIDOJKIKCD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15E8D590)
#define BBIDOJKIKCD_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15E8D5A0)

inline static constexpr unsigned int BBIDOJKIKCD_TypeDefinitionIndex = 56109;

	class BBIDOJKIKCD : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA PJJGPDNKMJH; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIDOJKIKCD_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIDOJKIKCD_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIDOJKIKCD_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIDOJKIKCD_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIDOJKIKCD_ELEPDOMDAGA_OFFSET))(this);
		}

	};
