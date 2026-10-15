#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define MGBHLJPDOPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB90ED10)
#define MGBHLJPDOPN_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB90EB70)
#define MGBHLJPDOPN_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB90EBB0)
#define MGBHLJPDOPN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB90E8E0)
#define MGBHLJPDOPN_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB90E8F0)

inline static constexpr unsigned int MGBHLJPDOPN_TypeDefinitionIndex = 56153;

	class MGBHLJPDOPN : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Int32 NKJPBAACMOD; // 0x2C
		::System::Int32 MKGHKEIIINI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHLJPDOPN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHLJPDOPN_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHLJPDOPN_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHLJPDOPN_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHLJPDOPN_ELEPDOMDAGA_OFFSET))(this);
		}

	};
