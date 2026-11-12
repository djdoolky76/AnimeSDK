#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define AELPODDGDHG_CTOR_OFFSET UNITYSDK_OFFSET(0xD5B47B0)
#define AELPODDGDHG_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xD5B46F0)
#define AELPODDGDHG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xD5B4730)
#define AELPODDGDHG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD5B4520)
#define AELPODDGDHG_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xD5B4530)

inline static constexpr unsigned int AELPODDGDHG_TypeDefinitionIndex = 57349;

	class AELPODDGDHG : public ::DBGDNLLDPFI
	{
	public:
		::System::String* KNJOABFKMHD; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELPODDGDHG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + AELPODDGDHG_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELPODDGDHG_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELPODDGDHG_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELPODDGDHG_ELEPDOMDAGA_OFFSET))(this);
		}

	};
