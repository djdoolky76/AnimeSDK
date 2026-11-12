#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANFHJIOJJMG.h"
#include "unitysdk/ANOBAENCAOD.h"
#include "unitysdk/FMPCODLIOLG.h"
class IOLGDGNPEEO;
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define GNHEKDHMANH_AKMGALBKAGP_OFFSET UNITYSDK_OFFSET(0x16A8D050)
#define GNHEKDHMANH_CCTOR_OFFSET UNITYSDK_OFFSET(0x16A8D260)
#define GNHEKDHMANH_CTOR_OFFSET UNITYSDK_OFFSET(0x16A8D230)
#define GNHEKDHMANH_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0x16A8CE90)
#define GNHEKDHMANH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16A8CE20)
#define GNHEKDHMANH_NLMKFNDDHNN_OFFSET UNITYSDK_OFFSET(0x16A8D1C0)
#define GNHEKDHMANH__ONBIND_OFFSET UNITYSDK_OFFSET(0x16A8CC60)

inline static constexpr unsigned int GNHEKDHMANH_TypeDefinitionIndex = 73440;

	class GNHEKDHMANH : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x60
		::UnityEngine::RectTransform* HACIPINNIOG; // 0x68
		::UnityEngine::UI::Image* MKOCDHEFAME; // 0x70
		static ::System::Collections::Generic::Dictionary_2<::ANFHJIOJJMG, ::System::String*>** StaticGet_DOKLAJNEDGF()
		{
			return (::System::Collections::Generic::Dictionary_2<::ANFHJIOJJMG, ::System::String*>**)UnitySDK::FromName("", "GNHEKDHMANH")->GetStaticField(0x6D8A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::ANOBAENCAOD, ::System::String*>** StaticGet_MEGMMHLDHHF()
		{
			return (::System::Collections::Generic::Dictionary_2<::ANOBAENCAOD, ::System::String*>**)UnitySDK::FromName("", "GNHEKDHMANH")->GetStaticField(0x6D8A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHEKDHMANH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNHEKDHMANH_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHEKDHMANH__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IOLGDGNPEEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOLGDGNPEEO*))((::PBYTE)hIl2Cpp + GNHEKDHMANH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Single NLMKFNDDHNN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHEKDHMANH_NLMKFNDDHNN_OFFSET))(this);
		}

		::System::Void JEJLPHKIHLB(::ANFHJIOJJMG a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANFHJIOJJMG))((::PBYTE)hIl2Cpp + GNHEKDHMANH_JEJLPHKIHLB_OFFSET))(this, a1);
		}

		::System::Void AKMGALBKAGP(::ANOBAENCAOD a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANOBAENCAOD))((::PBYTE)hIl2Cpp + GNHEKDHMANH_AKMGALBKAGP_OFFSET))(this, a1);
		}

	};
