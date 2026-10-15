#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define JGOOPPGAKHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A12B0)
#define JGOOPPGAKHP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB1A11F0)
#define JGOOPPGAKHP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB1A1230)
#define JGOOPPGAKHP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB1A1020)
#define JGOOPPGAKHP_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB1A1030)

inline static constexpr unsigned int JGOOPPGAKHP_TypeDefinitionIndex = 56119;

	class JGOOPPGAKHP : public ::DBGDNLLDPFI
	{
	public:
		::System::String* PJCMBHBKNMI; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOOPPGAKHP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOOPPGAKHP_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOOPPGAKHP_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOOPPGAKHP_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOOPPGAKHP_ELEPDOMDAGA_OFFSET))(this);
		}

	};
