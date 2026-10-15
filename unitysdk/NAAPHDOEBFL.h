#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define NAAPHDOEBFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA4D160)
#define NAAPHDOEBFL_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBA4D070)
#define NAAPHDOEBFL_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBA4D0B0)
#define NAAPHDOEBFL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBA4CE70)
#define NAAPHDOEBFL_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBA4CE80)

inline static constexpr unsigned int NAAPHDOEBFL_TypeDefinitionIndex = 56098;

	class NAAPHDOEBFL : public ::DBGDNLLDPFI
	{
	public:
		::System::String* GMNPKDNIPJE; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAPHDOEBFL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAPHDOEBFL_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAPHDOEBFL_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAPHDOEBFL_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAPHDOEBFL_ELEPDOMDAGA_OFFSET))(this);
		}

	};
