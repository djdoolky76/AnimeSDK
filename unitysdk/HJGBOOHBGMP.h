#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define HJGBOOHBGMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D14E00)
#define HJGBOOHBGMP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15D14D40)
#define HJGBOOHBGMP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15D14D80)
#define HJGBOOHBGMP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15D14B70)
#define HJGBOOHBGMP_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15D14B80)

inline static constexpr unsigned int HJGBOOHBGMP_TypeDefinitionIndex = 56165;

	class HJGBOOHBGMP : public ::DBGDNLLDPFI
	{
	public:
		::System::String* PCBEMEPIBCI; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGBOOHBGMP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGBOOHBGMP_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGBOOHBGMP_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGBOOHBGMP_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGBOOHBGMP_ELEPDOMDAGA_OFFSET))(this);
		}

	};
