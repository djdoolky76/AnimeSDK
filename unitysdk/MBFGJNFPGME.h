#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }

#define MBFGJNFPGME_AHEBEDHGMGK_OFFSET UNITYSDK_OFFSET(0x1B81F780)
#define MBFGJNFPGME_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B81F840)
#define MBFGJNFPGME_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B81F980)
#define MBFGJNFPGME_CFEOLGOGMOG_OFFSET UNITYSDK_OFFSET(0x1B81F5F0)
#define MBFGJNFPGME_CTOR_OFFSET UNITYSDK_OFFSET(0x1B81FAA0)
#define MBFGJNFPGME_FDGKNJOILDE_OFFSET UNITYSDK_OFFSET(0x1B81F500)
#define MBFGJNFPGME_GKFAOMHGCCF_OFFSET UNITYSDK_OFFSET(0x1B81F590)
#define MBFGJNFPGME_HAKEGEMLAOG_OFFSET UNITYSDK_OFFSET(0x1B81F380)
#define MBFGJNFPGME_IMKGLNFCHAE_OFFSET UNITYSDK_OFFSET(0x1B81F640)
#define MBFGJNFPGME__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B81F210)

inline static constexpr unsigned int MBFGJNFPGME_TypeDefinitionIndex = 73943;

	class MBFGJNFPGME : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* JINLLOBAGML; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* JFMIAKKDAKF; // 0x68
		::UnityEngine::Animation* BKHOINAHNFE; // 0x70
		::System::Int32 JHFJLGCADBI; // 0x78
		// static const ::System::String* DOKAAFKPLBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFGJNFPGME_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFGJNFPGME__ONBIND_OFFSET))(this);
		}

		::System::Void HAKEGEMLAOG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBFGJNFPGME_HAKEGEMLAOG_OFFSET))(this, a1);
		}

		::System::Void FDGKNJOILDE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBFGJNFPGME_FDGKNJOILDE_OFFSET))(this, a1);
		}

		::System::Void GKFAOMHGCCF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBFGJNFPGME_GKFAOMHGCCF_OFFSET))(this, a1);
		}

		::System::Void CFEOLGOGMOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFGJNFPGME_CFEOLGOGMOG_OFFSET))(this);
		}

		::System::Void IMKGLNFCHAE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBFGJNFPGME_IMKGLNFCHAE_OFFSET))(this, a1);
		}

		::System::Void AHEBEDHGMGK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBFGJNFPGME_AHEBEDHGMGK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFGJNFPGME_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFGJNFPGME_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
