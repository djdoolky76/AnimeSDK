#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define ENHPKADJIHF_CTOR_OFFSET UNITYSDK_OFFSET(0x155A46B0)
#define ENHPKADJIHF_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x155A44D0)
#define ENHPKADJIHF_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x155A4510)
#define ENHPKADJIHF_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x155A41F0)
#define ENHPKADJIHF_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x155A4200)

inline static constexpr unsigned int ENHPKADJIHF_TypeDefinitionIndex = 56118;

	class ENHPKADJIHF : public ::DBGDNLLDPFI
	{
	public:
		::System::String* KMCAMMNBLGI; // 0x10
		::System::String* BBMMBAKDJBC; // 0x18
		::System::Int32 GADJHNPODIP; // 0x20
		::System::UInt32 FJEHBAMMNEG; // 0x24
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Int32 PJFCFDKMALA; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHPKADJIHF_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHPKADJIHF_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHPKADJIHF_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHPKADJIHF_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHPKADJIHF_ELEPDOMDAGA_OFFSET))(this);
		}

	};
