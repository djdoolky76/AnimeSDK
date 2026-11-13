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

#define IAINCJNENGI_CTOR_OFFSET UNITYSDK_OFFSET(0x19423710)
#define IAINCJNENGI_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x194236C0)
#define IAINCJNENGI_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x19423400)

inline static constexpr unsigned int IAINCJNENGI_TypeDefinitionIndex = 74798;

	class IAINCJNENGI : public ::LBAMBIMMJKB
	{
	public:
		::RPG::Client::CustomButton* ODBHKKIJNEK; // 0x18
		::RPG::Client::MonoInControlTip* JFMAOKDHGDP; // 0x20
		::UnityEngine::Transform* LLMJAEJMJMC; // 0x28
		::RPG::Client::LocalizedText* GDGCKHKFGKB; // 0x30
		::UnityEngine::Transform* CENHBNBOCBG; // 0x38
		::RPG::Client::CustomButton* NJCHEPJPNHF; // 0x40
		::RPG::Client::CustomButton* FPNIIGOJKGG; // 0x48
		::UnityEngine::Transform* CPJOAFMIGMD; // 0x50
		::RPG::Client::AnimatorButton* GLKHFCPKIJC; // 0x58
		::RPG::Client::LocalizedText* HDDAJHCLMGF; // 0x60
		::RPG::Client::CustomButton* MIAMIOELBPE; // 0x68
		::UnityEngine::Transform* PPKIBOIKHLK; // 0x70
		::RPG::Client::LocalizedText* LIEPKHCEILC; // 0x78
		::RPG::Client::LocalizedText* CEEAKEPIOKL; // 0x80
		::UnityEngine::UI::HorizontalLayoutGroup* HGBFOFJKODN; // 0x88
		::RPG::Client::LocalizedText* CADMEMOFOEM; // 0x90
		::UnityEngine::Transform* BEDANEIMMDL; // 0x98
		::UnityEngine::Transform* BCPCCBKJNMH; // 0xA0
		::UnityEngine::Transform* NABMKCEBNOL; // 0xA8
		::RPG::Client::LocalizedText* LKMGLADGDHP; // 0xB0
		::RPG::Client::LocalizedText* PFEMEDIOFBI; // 0xB8
		::RPG::Client::CustomButton* GJINCGEJDAG; // 0xC0
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
