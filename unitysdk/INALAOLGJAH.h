#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define INALAOLGJAH_CTOR_OFFSET UNITYSDK_OFFSET(0x164D7C40)
#define INALAOLGJAH_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x164D7B00)
#define INALAOLGJAH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x164D7B40)
#define INALAOLGJAH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x164D78B0)
#define INALAOLGJAH_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x164D78C0)

inline static constexpr unsigned int INALAOLGJAH_TypeDefinitionIndex = 56125;

	class INALAOLGJAH : public ::DBGDNLLDPFI
	{
	public:
		::System::String* JEEOMGHKDNB; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Byte GHGOBIACNDM; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INALAOLGJAH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + INALAOLGJAH_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INALAOLGJAH_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INALAOLGJAH_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INALAOLGJAH_ELEPDOMDAGA_OFFSET))(this);
		}

	};
