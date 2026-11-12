#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define IAINCJNENGI_CTOR_OFFSET UNITYSDK_OFFSET(0x16DB9C60)
#define IAINCJNENGI_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x16DB9C10)
#define IAINCJNENGI_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x16DB9950)

inline static constexpr unsigned int IAINCJNENGI_TypeDefinitionIndex = 74799;

	class IAINCJNENGI : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* PPKIBOIKHLK; // 0x18
		::RPG::Client::MonoInControlTip* JFMAOKDHGDP; // 0x20
		::UnityEngine::Transform* BCPCCBKJNMH; // 0x28
		::UnityEngine::Transform* LLMJAEJMJMC; // 0x30
		::RPG::Client::CustomButton* NJCHEPJPNHF; // 0x38
		::RPG::Client::CustomButton* ODBHKKIJNEK; // 0x40
		::UnityEngine::Transform* BEDANEIMMDL; // 0x48
		::RPG::Client::LocalizedText* LIEPKHCEILC; // 0x50
		::RPG::Client::LocalizedText* PFEMEDIOFBI; // 0x58
		::RPG::Client::LocalizedText* HDDAJHCLMGF; // 0x60
		::RPG::Client::CustomButton* GJINCGEJDAG; // 0x68
		::RPG::Client::LocalizedText* GDGCKHKFGKB; // 0x70
		::UnityEngine::Transform* NABMKCEBNOL; // 0x78
		::UnityEngine::Transform* CENHBNBOCBG; // 0x80
		::RPG::Client::CustomButton* MIAMIOELBPE; // 0x88
		::RPG::Client::LocalizedText* CEEAKEPIOKL; // 0x90
		::RPG::Client::LocalizedText* LKMGLADGDHP; // 0x98
		::UnityEngine::UI::HorizontalLayoutGroup* HGBFOFJKODN; // 0xA0
		::RPG::Client::AnimatorButton* GLKHFCPKIJC; // 0xA8
		::UnityEngine::Transform* CPJOAFMIGMD; // 0xB0
		::RPG::Client::LocalizedText* CADMEMOFOEM; // 0xB8
		::RPG::Client::CustomButton* FPNIIGOJKGG; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAINCJNENGI_CTOR_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAINCJNENGI_JCKGONAAIPB_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAINCJNENGI_IAMCNOAAALI_OFFSET))(this);
		}

	};
