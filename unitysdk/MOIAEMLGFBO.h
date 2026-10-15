#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define MOIAEMLGFBO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2CDF0)
#define MOIAEMLGFBO_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBA2CD30)
#define MOIAEMLGFBO_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBA2CD70)
#define MOIAEMLGFBO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBA2CB60)
#define MOIAEMLGFBO_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBA2CB70)

	class MOIAEMLGFBO : public ::DBGDNLLDPFI
	{
	public:
		::System::String* HCOAKLFBOCK; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIAEMLGFBO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIAEMLGFBO_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIAEMLGFBO_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIAEMLGFBO_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIAEMLGFBO_ELEPDOMDAGA_OFFSET))(this);
		}

	};
