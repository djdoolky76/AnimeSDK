#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define NOLHGJPAHKA_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF37F0)
#define NOLHGJPAHKA_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBCF36F0)
#define NOLHGJPAHKA_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBCF3730)
#define NOLHGJPAHKA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBCF34E0)
#define NOLHGJPAHKA_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBCF34F0)

inline static constexpr unsigned int NOLHGJPAHKA_TypeDefinitionIndex = 56136;

	class NOLHGJPAHKA : public ::DBGDNLLDPFI
	{
	public:
		::System::String* HCOAKLFBOCK; // 0x10
		::System::UInt32 FJEHBAMMNEG; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLHGJPAHKA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLHGJPAHKA_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLHGJPAHKA_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLHGJPAHKA_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLHGJPAHKA_ELEPDOMDAGA_OFFSET))(this);
		}

	};
