#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define LAOMFMGLEKK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE7B000)
#define LAOMFMGLEKK_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBE7AF20)
#define LAOMFMGLEKK_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBE7AF60)
#define LAOMFMGLEKK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE7AD10)
#define LAOMFMGLEKK_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBE7AD20)

inline static constexpr unsigned int LAOMFMGLEKK_TypeDefinitionIndex = 57353;

	class LAOMFMGLEKK : public ::DBGDNLLDPFI
	{
	public:
		::System::String* DINBCKPJJEL; // 0x10
		::System::String* BBMMBAKDJBC; // 0x18
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x20
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOMFMGLEKK_ELEPDOMDAGA_OFFSET))(this);
		}

	};
