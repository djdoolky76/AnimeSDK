#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define EFBOEHMDDJH_CTOR_OFFSET UNITYSDK_OFFSET(0x13A48090)
#define EFBOEHMDDJH_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x13A47F40)
#define EFBOEHMDDJH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x13A47F80)
#define EFBOEHMDDJH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x13A47CE0)
#define EFBOEHMDDJH_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x13A47CF0)

inline static constexpr unsigned int EFBOEHMDDJH_TypeDefinitionIndex = 56152;

	class EFBOEHMDDJH : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
		::System::Int32 LAOACNPDOLD; // 0x14
		::System::UInt32 LBEFDGPIALG; // 0x18
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
