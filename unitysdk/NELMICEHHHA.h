#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define NELMICEHHHA_CTOR_OFFSET UNITYSDK_OFFSET(0x16FEB2E0)
#define NELMICEHHHA_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x16FEB220)
#define NELMICEHHHA_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x16FEB260)
#define NELMICEHHHA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16FEB050)
#define NELMICEHHHA_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x16FEB060)

inline static constexpr unsigned int NELMICEHHHA_TypeDefinitionIndex = 57376;

	class NELMICEHHHA : public ::DBGDNLLDPFI
	{
	public:
		::System::String* PCBEMEPIBCI; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELMICEHHHA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NELMICEHHHA_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELMICEHHHA_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELMICEHHHA_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELMICEHHHA_ELEPDOMDAGA_OFFSET))(this);
		}

	};
