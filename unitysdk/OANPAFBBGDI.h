#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }

#define OANPAFBBGDI_CTOR_OFFSET UNITYSDK_OFFSET(0xBD280C0)
#define OANPAFBBGDI_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xBD27FD0)
#define OANPAFBBGDI_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xBD28040)

inline static constexpr unsigned int OANPAFBBGDI_TypeDefinitionIndex = 71711;

	class OANPAFBBGDI : public ::LBAMBIMMJKB
	{
	public:
		::RPG::Client::LocalizedText* BMKBAMOJHMP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANPAFBBGDI_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANPAFBBGDI_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANPAFBBGDI_JCKGONAAIPB_OFFSET))(this);
		}

	};
