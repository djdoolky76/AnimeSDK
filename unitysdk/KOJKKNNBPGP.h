#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define KOJKKNNBPGP_CTOR_OFFSET UNITYSDK_OFFSET(0xB599760)
#define KOJKKNNBPGP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB599670)
#define KOJKKNNBPGP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB5996B0)
#define KOJKKNNBPGP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB599470)
#define KOJKKNNBPGP_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB599480)

	class KOJKKNNBPGP : public ::DBGDNLLDPFI
	{
	public:
		::System::UInt32 FEHABNJEENK; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJKKNNBPGP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJKKNNBPGP_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJKKNNBPGP_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJKKNNBPGP_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJKKNNBPGP_ELEPDOMDAGA_OFFSET))(this);
		}

	};
