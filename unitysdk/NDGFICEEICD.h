#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
class AMCOEFHHBPO;
class BDEHEINMEJB;
class NDGFICEEICD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDGFICEEICD_AEIMKAIFCNC_OFFSET UNITYSDK_OFFSET(0xBB1EE40)
#define NDGFICEEICD_BNPBAFODOFI_OFFSET UNITYSDK_OFFSET(0xBB21BF0)
#define NDGFICEEICD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB1E670)
#define NDGFICEEICD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB21F90)
#define NDGFICEEICD_IMGGNJDBLCM_OFFSET UNITYSDK_OFFSET(0xBB1ECA0)
#define NDGFICEEICD_JPLGGJHFBDO_OFFSET UNITYSDK_OFFSET(0xBB21A20)
#define NDGFICEEICD_LIFGLFMOJED_OFFSET UNITYSDK_OFFSET(0xBB1EDB0)
#define NDGFICEEICD_LJFAEBMFIKI_OFFSET UNITYSDK_OFFSET(0xBB21DC0)
#define NDGFICEEICD_MBJBKAOLIFD_OFFSET UNITYSDK_OFFSET(0xBB1F0C0)
#define NDGFICEEICD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBB1F340)

inline static constexpr unsigned int NDGFICEEICD_TypeDefinitionIndex = 64883;

	class NDGFICEEICD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AMCOEFHHBPO*>* GACHBPBBDFL; // 0x10
		::BDEHEINMEJB* BKIFMPHBIAK; // 0x18
		static ::NDGFICEEICD** StaticGet_FMJPMFEDIJL()
		{
			return (::NDGFICEEICD**)UnitySDK::FromName("", "NDGFICEEICD")->GetStaticField(0xB810);
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
