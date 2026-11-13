#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CGJDJIIDKFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1785E1A0)
#define CGJDJIIDKFA_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1785E020)
#define CGJDJIIDKFA_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1785E060)
#define CGJDJIIDKFA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1785DDA0)
#define CGJDJIIDKFA_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1785DDB0)

inline static constexpr unsigned int CGJDJIIDKFA_TypeDefinitionIndex = 57313;

	class CGJDJIIDKFA : public ::DBGDNLLDPFI
	{
	public:
		::System::Int32 KHBBNDBJAFK; // 0x10
		::System::Int32 DHPDILNLIPC; // 0x14
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJDJIIDKFA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJDJIIDKFA_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJDJIIDKFA_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJDJIIDKFA_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJDJIIDKFA_ELEPDOMDAGA_OFFSET))(this);
		}

	};
