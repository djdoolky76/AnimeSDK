#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CBBGGAGGNDL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC497510)
#define CBBGGAGGNDL_CTOR_OFFSET UNITYSDK_OFFSET(0xC497500)
#define CBBGGAGGNDL_DLEDCEEOLAK_OFFSET UNITYSDK_OFFSET(0xC496AA0)
#define CBBGGAGGNDL_HLEJMCJEMNB_1_OFFSET UNITYSDK_OFFSET(0xC496DF0)
#define CBBGGAGGNDL_HLEJMCJEMNB_OFFSET UNITYSDK_OFFSET(0xC496D70)
#define CBBGGAGGNDL_KDMEFAMAEJM_OFFSET UNITYSDK_OFFSET(0xC496870)
#define CBBGGAGGNDL_KOGJGPJPKDF_OFFSET UNITYSDK_OFFSET(0xC497350)

inline static constexpr unsigned int CBBGGAGGNDL_TypeDefinitionIndex = 61284;

	class CBBGGAGGNDL : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_LHAOLCPOHAN()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD1E0);
		}

		static ::System::String** StaticGet_OMNHCBGHIGD()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD1E8);
		}

		static ::System::String** StaticGet_EAJDCMLKPGN()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD1F0);
		}

		static ::System::String** StaticGet_EAGPDHGFOMI()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD1F8);
		}

		static ::System::String** StaticGet_CDEFGFIJNLB()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD200);
		}

		static ::System::String** StaticGet_LJGADDOLAFC()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD208);
		}

		static ::System::String** StaticGet_GECOJCONCNI()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD210);
		}

		static ::System::String** StaticGet_EGJBNACMCKB()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD218);
		}

		static ::System::String** StaticGet_OAGHMGFGMLB()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD220);
		}

		static ::System::String** StaticGet_OPMHJNDOLFP()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD228);
		}

		static ::System::String** StaticGet_JJKGIKGACKP()
		{
			return (::System::String**)UnitySDK::FromName("", "CBBGGAGGNDL")->GetStaticField(0xD230);
		}

		// static const ::System::String* MDKFJDBHOGF; // 0x0
		// static const ::System::String* EIDPLEBDLDM; // 0x0
		// static const ::System::String* ADPPDINACEO; // 0x0
		// static const ::System::String* FKJHDMJOFLD; // 0x0
		// static const ::System::String* HBOAAGMAIDH; // 0x0
		// static const ::System::String* NIGBBBIMGDI; // 0x0
		// static const ::System::String* FCJDEFMADJF; // 0x0
		// static const ::System::String* PJBCAMNAGLN; // 0x0
		// static const ::System::String* BGHHLLOGMGN; // 0x0
		// static const ::System::String* MKFEGIMACLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBGGAGGNDL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBBGGAGGNDL_CCTOR_OFFSET))();
		}

		static ::System::String* KDMEFAMAEJM()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CBBGGAGGNDL_KDMEFAMAEJM_OFFSET))();
		}

		static ::System::String* DLEDCEEOLAK()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CBBGGAGGNDL_DLEDCEEOLAK_OFFSET))();
		}

		static ::System::String* HLEJMCJEMNB()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CBBGGAGGNDL_HLEJMCJEMNB_OFFSET))();
		}

		static ::System::String* HLEJMCJEMNB_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CBBGGAGGNDL_HLEJMCJEMNB_1_OFFSET))(a1);
		}

		static ::System::String* KOGJGPJPKDF()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CBBGGAGGNDL_KOGJGPJPKDF_OFFSET))();
		}

	};
