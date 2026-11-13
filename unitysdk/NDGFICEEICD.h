#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
class BDEHEINMEJB;
class NDGFICEEICD;
namespace RPG::Client { class GridFightUpdateSummarizer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDGFICEEICD_AEIMKAIFCNC_OFFSET UNITYSDK_OFFSET(0x16F9DC00)
#define NDGFICEEICD_BNPBAFODOFI_OFFSET UNITYSDK_OFFSET(0x16FA0E20)
#define NDGFICEEICD_CTOR_OFFSET UNITYSDK_OFFSET(0x16F9D000)
#define NDGFICEEICD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16FA11C0)
#define NDGFICEEICD_IMGGNJDBLCM_OFFSET UNITYSDK_OFFSET(0x16F9DA60)
#define NDGFICEEICD_JPLGGJHFBDO_OFFSET UNITYSDK_OFFSET(0x16FA0C50)
#define NDGFICEEICD_LIFGLFMOJED_OFFSET UNITYSDK_OFFSET(0x16F9DB70)
#define NDGFICEEICD_LJFAEBMFIKI_OFFSET UNITYSDK_OFFSET(0x16FA0FF0)
#define NDGFICEEICD_MBJBKAOLIFD_OFFSET UNITYSDK_OFFSET(0x16F9DE80)
#define NDGFICEEICD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16F9E100)

inline static constexpr unsigned int NDGFICEEICD_TypeDefinitionIndex = 66438;

	class NDGFICEEICD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightUpdateSummarizer*>* GACHBPBBDFL; // 0x10
		::BDEHEINMEJB* BKIFMPHBIAK; // 0x18
		static ::NDGFICEEICD** StaticGet_FMJPMFEDIJL()
		{
			return (::NDGFICEEICD**)UnitySDK::FromName("", "NDGFICEEICD")->GetStaticField(0x138A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGFICEEICD_CTOR_OFFSET))(this);
		}

		::System::Void IMGGNJDBLCM(::RPG::Client::GridFightUpdateSummarizer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightUpdateSummarizer*))((::PBYTE)hIl2Cpp + NDGFICEEICD_IMGGNJDBLCM_OFFSET))(this, a1);
		}

		::System::Void LIFGLFMOJED(::RPG::Client::GridFightUpdateSummarizer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightUpdateSummarizer*))((::PBYTE)hIl2Cpp + NDGFICEEICD_LIFGLFMOJED_OFFSET))(this, a1);
		}

		::System::Void AEIMKAIFCNC(::ABPLALCHNFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPLALCHNFA*))((::PBYTE)hIl2Cpp + NDGFICEEICD_AEIMKAIFCNC_OFFSET))(this, a1);
		}

		::System::Void MBJBKAOLIFD(::ABPLALCHNFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPLALCHNFA*))((::PBYTE)hIl2Cpp + NDGFICEEICD_MBJBKAOLIFD_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::ABPLALCHNFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPLALCHNFA*))((::PBYTE)hIl2Cpp + NDGFICEEICD_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void JPLGGJHFBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGFICEEICD_JPLGGJHFBDO_OFFSET))(this);
		}

		::System::Void BNPBAFODOFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGFICEEICD_BNPBAFODOFI_OFFSET))(this);
		}

		::System::Void LJFAEBMFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGFICEEICD_LJFAEBMFIKI_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGFICEEICD_HADOHLNHHGB_OFFSET))(this);
		}

	};
