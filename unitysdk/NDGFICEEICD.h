#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
class AMCOEFHHBPO;
class BDEHEINMEJB;
class NDGFICEEICD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDGFICEEICD_AEIMKAIFCNC_OFFSET UNITYSDK_OFFSET(0xBB24F70)
#define NDGFICEEICD_BNPBAFODOFI_OFFSET UNITYSDK_OFFSET(0xBB27D20)
#define NDGFICEEICD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB247A0)
#define NDGFICEEICD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB280C0)
#define NDGFICEEICD_IMGGNJDBLCM_OFFSET UNITYSDK_OFFSET(0xBB24DD0)
#define NDGFICEEICD_JPLGGJHFBDO_OFFSET UNITYSDK_OFFSET(0xBB27B50)
#define NDGFICEEICD_LIFGLFMOJED_OFFSET UNITYSDK_OFFSET(0xBB24EE0)
#define NDGFICEEICD_LJFAEBMFIKI_OFFSET UNITYSDK_OFFSET(0xBB27EF0)
#define NDGFICEEICD_MBJBKAOLIFD_OFFSET UNITYSDK_OFFSET(0xBB251F0)
#define NDGFICEEICD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBB25470)

inline static constexpr unsigned int NDGFICEEICD_TypeDefinitionIndex = 64883;

	class NDGFICEEICD : public ::System::Object
	{
	public:
		::BDEHEINMEJB* BKIFMPHBIAK; // 0x10
		::System::Collections::Generic::List_1<::AMCOEFHHBPO*>* GACHBPBBDFL; // 0x18
		static ::NDGFICEEICD** StaticGet_FMJPMFEDIJL()
		{
			return (::NDGFICEEICD**)UnitySDK::FromName("", "NDGFICEEICD")->GetStaticField(0xAB70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGFICEEICD_CTOR_OFFSET))(this);
		}

		::System::Void IMGGNJDBLCM(::AMCOEFHHBPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMCOEFHHBPO*))((::PBYTE)hIl2Cpp + NDGFICEEICD_IMGGNJDBLCM_OFFSET))(this, a1);
		}

		::System::Void LIFGLFMOJED(::AMCOEFHHBPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMCOEFHHBPO*))((::PBYTE)hIl2Cpp + NDGFICEEICD_LIFGLFMOJED_OFFSET))(this, a1);
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
