#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/System/Object.h"

#define DBGDNLLDPFI_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE12C0)
#define DBGDNLLDPFI_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xDFE1140)
#define DBGDNLLDPFI_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xDFE1200)
#define DBGDNLLDPFI_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDFE12B0)
#define DBGDNLLDPFI_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xDFE1180)

	class DBGDNLLDPFI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDNLLDPFI_CTOR_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDNLLDPFI_ELEPDOMDAGA_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDNLLDPFI_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDNLLDPFI_FPKLDCGAJGP_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDNLLDPFI_GET_TYPE_OFFSET))(this);
		}

	};
