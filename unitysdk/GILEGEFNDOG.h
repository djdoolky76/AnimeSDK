#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define GILEGEFNDOG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A46370)
#define GILEGEFNDOG_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15A462B0)
#define GILEGEFNDOG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15A462F0)
#define GILEGEFNDOG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15A460E0)
#define GILEGEFNDOG_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15A460F0)

inline static constexpr unsigned int GILEGEFNDOG_TypeDefinitionIndex = 56167;

	class GILEGEFNDOG : public ::DBGDNLLDPFI
	{
	public:
		::System::String* PBNGCKGAHLN; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILEGEFNDOG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + GILEGEFNDOG_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILEGEFNDOG_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILEGEFNDOG_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILEGEFNDOG_ELEPDOMDAGA_OFFSET))(this);
		}

	};
