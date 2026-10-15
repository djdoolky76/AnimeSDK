#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define MOGGMDBOOOL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2BDF0)
#define MOGGMDBOOOL_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBA2BCA0)
#define MOGGMDBOOOL_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBA2BCE0)
#define MOGGMDBOOOL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBA2BA40)
#define MOGGMDBOOOL_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBA2BA50)

	class MOGGMDBOOOL : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::System::String* DEPNEJJMIJM; // 0x28
		::System::Boolean KMDFIPAGIAF; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGGMDBOOOL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGGMDBOOOL_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGGMDBOOOL_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGGMDBOOOL_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGGMDBOOOL_ELEPDOMDAGA_OFFSET))(this);
		}

	};
