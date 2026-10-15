#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define JMGOLPMLNIO_CTOR_OFFSET UNITYSDK_OFFSET(0xB25F1F0)
#define JMGOLPMLNIO_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB25EF70)
#define JMGOLPMLNIO_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB25EFB0)
#define JMGOLPMLNIO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB25EC00)
#define JMGOLPMLNIO_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB25EC10)

inline static constexpr unsigned int JMGOLPMLNIO_TypeDefinitionIndex = 56124;

	class JMGOLPMLNIO : public ::DBGDNLLDPFI
	{
	public:
		::System::String* BBMMBAKDJBC; // 0x10
		::System::String* IFNAGLOMHBK; // 0x18
		::System::String* DINBCKPJJEL; // 0x20
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CEIFPNFFBPK; // 0x30
		::RPG::GameCore::FixPoint PIDECKOBKIJ; // 0x38
		::RPG::GameCore::FixPoint IHJPJGJDHNN; // 0x40
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
