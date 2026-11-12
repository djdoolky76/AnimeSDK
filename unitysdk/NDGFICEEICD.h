#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
class BDEHEINMEJB;
class NDGFICEEICD;
namespace RPG::Client { class GridFightUpdateSummarizer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDGFICEEICD_AEIMKAIFCNC_OFFSET UNITYSDK_OFFSET(0xC3AE420)
#define NDGFICEEICD_BNPBAFODOFI_OFFSET UNITYSDK_OFFSET(0xC3B1640)
#define NDGFICEEICD_CTOR_OFFSET UNITYSDK_OFFSET(0xC3AD820)
#define NDGFICEEICD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC3B19E0)
#define NDGFICEEICD_IMGGNJDBLCM_OFFSET UNITYSDK_OFFSET(0xC3AE280)
#define NDGFICEEICD_JPLGGJHFBDO_OFFSET UNITYSDK_OFFSET(0xC3B1470)
#define NDGFICEEICD_LIFGLFMOJED_OFFSET UNITYSDK_OFFSET(0xC3AE390)
#define NDGFICEEICD_LJFAEBMFIKI_OFFSET UNITYSDK_OFFSET(0xC3B1810)
#define NDGFICEEICD_MBJBKAOLIFD_OFFSET UNITYSDK_OFFSET(0xC3AE6A0)
#define NDGFICEEICD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC3AE920)

inline static constexpr unsigned int NDGFICEEICD_TypeDefinitionIndex = 66438;

	class NDGFICEEICD : public ::System::Object
	{
	public:
		::BDEHEINMEJB* BKIFMPHBIAK; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightUpdateSummarizer*>* GACHBPBBDFL; // 0x18
		static ::NDGFICEEICD** StaticGet_FMJPMFEDIJL()
		{
			return (::NDGFICEEICD**)UnitySDK::FromName("", "NDGFICEEICD")->GetStaticField(0x11C90);
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
