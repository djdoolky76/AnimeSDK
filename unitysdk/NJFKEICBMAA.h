#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define NJFKEICBMAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A78B440)
#define NJFKEICBMAA_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1A78B380)
#define NJFKEICBMAA_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1A78B3C0)
#define NJFKEICBMAA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A78B1A0)
#define NJFKEICBMAA_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1A78B1B0)

inline static constexpr unsigned int NJFKEICBMAA_TypeDefinitionIndex = 57322;

	class NJFKEICBMAA : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA PJJGPDNKMJH; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFKEICBMAA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFKEICBMAA_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFKEICBMAA_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFKEICBMAA_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFKEICBMAA_ELEPDOMDAGA_OFFSET))(this);
		}

	};
