#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define JIHPNGCKCGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FB5C0)
#define JIHPNGCKCGC_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xB1FB550)
#define JIHPNGCKCGC_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xB1FB360)

	class JIHPNGCKCGC : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* EDJNKKDHJBO; // 0x18
		::RPG::Client::LocalizedText* CADMEMOFOEM; // 0x20
		::UnityEngine::Transform* HJNFHLOBOCM; // 0x28
		::RPG::Client::LocalizedText* HDDAJHCLMGF; // 0x30
		::RPG::Client::LocalizedText* NDDEKDDEGAP; // 0x38
		::RPG::Client::CustomButton* LAHOOFIEBKF; // 0x40
		::UnityEngine::Transform* NABMKCEBNOL; // 0x48
		::RPG::Client::CustomButton* FPNIIGOJKGG; // 0x50
		::RPG::Client::CustomButton* LFEAAPCBADA; // 0x58
		::RPG::Client::LocalizedText* LIEPKHCEILC; // 0x60
		::RPG::Client::CustomButton* NNLKPJKDJBP; // 0x68
		::UnityEngine::Transform* PGFAFAHOBEF; // 0x70
		::RPG::Client::CustomButton* OKJEFKPNIKB; // 0x78
		::RPG::Client::CustomButton* AEJFLBOIKNK; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHPNGCKCGC_CTOR_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHPNGCKCGC_JCKGONAAIPB_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHPNGCKCGC_IAMCNOAAALI_OFFSET))(this);
		}

	};
