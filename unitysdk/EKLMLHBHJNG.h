#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define EKLMLHBHJNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1550D440)
#define EKLMLHBHJNG_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1550D270)
#define EKLMLHBHJNG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1550D2B0)
#define EKLMLHBHJNG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1550CFA0)
#define EKLMLHBHJNG_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1550CFB0)

inline static constexpr unsigned int EKLMLHBHJNG_TypeDefinitionIndex = 56150;

	class EKLMLHBHJNG : public ::DBGDNLLDPFI
	{
	public:
		::System::String* MFIEDDGBIPH; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint FOBILLOEFJK; // 0x20
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMLHBHJNG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMLHBHJNG_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMLHBHJNG_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMLHBHJNG_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLMLHBHJNG_ELEPDOMDAGA_OFFSET))(this);
		}

	};
