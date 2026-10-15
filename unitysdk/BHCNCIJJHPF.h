#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define BHCNCIJJHPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB4741F0)
#define BHCNCIJJHPF_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB474100)
#define BHCNCIJJHPF_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB474140)
#define BHCNCIJJHPF_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB473F00)
#define BHCNCIJJHPF_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB473F10)

inline static constexpr unsigned int BHCNCIJJHPF_TypeDefinitionIndex = 56155;

	class BHCNCIJJHPF : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 HLKCKMIGJFJ; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNCIJJHPF_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNCIJJHPF_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNCIJJHPF_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNCIJJHPF_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNCIJJHPF_ELEPDOMDAGA_OFFSET))(this);
		}

	};
