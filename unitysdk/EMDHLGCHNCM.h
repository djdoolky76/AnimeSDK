#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define EMDHLGCHNCM_CTOR_OFFSET UNITYSDK_OFFSET(0x187CC120)
#define EMDHLGCHNCM_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x187CC050)
#define EMDHLGCHNCM_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x187CC090)
#define EMDHLGCHNCM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x187CBE60)
#define EMDHLGCHNCM_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x187CBE70)

inline static constexpr unsigned int EMDHLGCHNCM_TypeDefinitionIndex = 57352;

	class EMDHLGCHNCM : public ::DBGDNLLDPFI
	{
	public:
		::System::String* IFNAGLOMHBK; // 0x10
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_ELEPDOMDAGA_OFFSET))(this);
		}

	};
