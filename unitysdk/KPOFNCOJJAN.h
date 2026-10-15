#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define KPOFNCOJJAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D03B0)
#define KPOFNCOJJAN_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB5D02D0)
#define KPOFNCOJJAN_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB5D0310)
#define KPOFNCOJJAN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB5D00C0)
#define KPOFNCOJJAN_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB5D00D0)

	class KPOFNCOJJAN : public ::DBGDNLLDPFI
	{
	public:
		::System::String* CIDCEJCGOGB; // 0x10
		::System::String* GBAKCOBOMJP; // 0x18
		::System::String* NGIJFAEONCK; // 0x20
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFNCOJJAN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFNCOJJAN_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFNCOJJAN_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFNCOJJAN_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFNCOJJAN_ELEPDOMDAGA_OFFSET))(this);
		}

	};
