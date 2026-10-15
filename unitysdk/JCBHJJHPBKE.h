#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define JCBHJJHPBKE_CTOR_OFFSET UNITYSDK_OFFSET(0x16579F20)
#define JCBHJJHPBKE_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x16579E60)
#define JCBHJJHPBKE_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x16579EA0)
#define JCBHJJHPBKE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16579C90)
#define JCBHJJHPBKE_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x16579CA0)

	class JCBHJJHPBKE : public ::DBGDNLLDPFI
	{
	public:
		::System::String* PBNGCKGAHLN; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBHJJHPBKE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBHJJHPBKE_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBHJJHPBKE_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBHJJHPBKE_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBHJJHPBKE_ELEPDOMDAGA_OFFSET))(this);
		}

	};
