#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define MGBHLJPDOPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B333CA0)
#define MGBHLJPDOPN_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1B333B00)
#define MGBHLJPDOPN_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1B333B40)
#define MGBHLJPDOPN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B333870)
#define MGBHLJPDOPN_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1B333880)

inline static constexpr unsigned int MGBHLJPDOPN_TypeDefinitionIndex = 57365;

	class MGBHLJPDOPN : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Int32 MKGHKEIIINI; // 0x2C
		::System::Int32 NKJPBAACMOD; // 0x30
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
