#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define ILNHFFMIEHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5AE370)
#define ILNHFFMIEHK_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1B5AE250)
#define ILNHFFMIEHK_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1B5AE290)
#define ILNHFFMIEHK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B5AE020)
#define ILNHFFMIEHK_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1B5AE030)

inline static constexpr unsigned int ILNHFFMIEHK_TypeDefinitionIndex = 57347;

	class ILNHFFMIEHK : public ::DBGDNLLDPFI
	{
	public:
		::System::String* BBMMBAKDJBC; // 0x10
		::System::String* FCOOFCJFFNP; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
		::System::UInt32 BOKJJKFCFME; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNHFFMIEHK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNHFFMIEHK_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNHFFMIEHK_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNHFFMIEHK_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNHFFMIEHK_ELEPDOMDAGA_OFFSET))(this);
		}

	};
