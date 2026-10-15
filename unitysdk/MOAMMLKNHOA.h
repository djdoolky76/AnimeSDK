#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }

#define MOAMMLKNHOA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA1C270)
#define MOAMMLKNHOA_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xBA1C1A0)
#define MOAMMLKNHOA_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xBA1C1F0)

	class MOAMMLKNHOA : public ::LBAMBIMMJKB
	{
	public:
		::RPG::Client::LocalizedText* KEGANNHEKHA; // 0x18
		::RPG::Client::LocalizedText* MNOHILEHCNB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAMMLKNHOA_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAMMLKNHOA_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAMMLKNHOA_JCKGONAAIPB_OFFSET))(this);
		}

	};
