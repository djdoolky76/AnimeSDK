#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define JMGOLPMLNIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA90700)
#define JMGOLPMLNIO_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBA90480)
#define JMGOLPMLNIO_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBA904C0)
#define JMGOLPMLNIO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBA90110)
#define JMGOLPMLNIO_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBA90120)

inline static constexpr unsigned int JMGOLPMLNIO_TypeDefinitionIndex = 57336;

	class JMGOLPMLNIO : public ::DBGDNLLDPFI
	{
	public:
		::System::String* IFNAGLOMHBK; // 0x10
		::System::String* DINBCKPJJEL; // 0x18
		::System::String* BBMMBAKDJBC; // 0x20
		::RPG::GameCore::FixPoint IHJPJGJDHNN; // 0x28
		::RPG::GameCore::FixPoint CEIFPNFFBPK; // 0x30
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint PIDECKOBKIJ; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGOLPMLNIO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGOLPMLNIO_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGOLPMLNIO_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGOLPMLNIO_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGOLPMLNIO_ELEPDOMDAGA_OFFSET))(this);
		}

	};
