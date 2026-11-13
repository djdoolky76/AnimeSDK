#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define BHCNCIJJHPF_CTOR_OFFSET UNITYSDK_OFFSET(0x151E1D30)
#define BHCNCIJJHPF_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x151E1C40)
#define BHCNCIJJHPF_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x151E1C80)
#define BHCNCIJJHPF_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x151E1A40)
#define BHCNCIJJHPF_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x151E1A50)

inline static constexpr unsigned int BHCNCIJJHPF_TypeDefinitionIndex = 57367;

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
