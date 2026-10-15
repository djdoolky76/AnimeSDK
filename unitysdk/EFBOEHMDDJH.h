#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define EFBOEHMDDJH_CTOR_OFFSET UNITYSDK_OFFSET(0x13A477E0)
#define EFBOEHMDDJH_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x13A47690)
#define EFBOEHMDDJH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x13A476D0)
#define EFBOEHMDDJH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x13A47430)
#define EFBOEHMDDJH_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x13A47440)

	class EFBOEHMDDJH : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 LBEFDGPIALG; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
		::System::Int32 LAOACNPDOLD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBOEHMDDJH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBOEHMDDJH_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBOEHMDDJH_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBOEHMDDJH_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBOEHMDDJH_ELEPDOMDAGA_OFFSET))(this);
		}

	};
