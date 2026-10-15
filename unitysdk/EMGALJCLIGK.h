#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define EMGALJCLIGK_CTOR_OFFSET UNITYSDK_OFFSET(0x15536EF0)
#define EMGALJCLIGK_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15536DE0)
#define EMGALJCLIGK_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15536E20)
#define EMGALJCLIGK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15536BD0)
#define EMGALJCLIGK_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15536BE0)

	class EMGALJCLIGK : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA PJJGPDNKMJH; // 0x10
		::System::String* GMNPKDNIPJE; // 0x28
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGALJCLIGK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGALJCLIGK_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGALJCLIGK_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGALJCLIGK_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGALJCLIGK_ELEPDOMDAGA_OFFSET))(this);
		}

	};
