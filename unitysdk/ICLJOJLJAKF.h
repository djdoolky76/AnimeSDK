#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ICLJOJLJAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x188D16B0)
#define ICLJOJLJAKF_CTOR_OFFSET UNITYSDK_OFFSET(0x188D16A0)

inline static constexpr unsigned int ICLJOJLJAKF_TypeDefinitionIndex = 81489;

	class ICLJOJLJAKF : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CKAMKIFGFKG()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x38D60);
		}

		static ::System::String** StaticGet_OFIPOFLOGBC()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x38D68);
		}

		static ::System::String** StaticGet_DNKGEOEMAFD()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x38D70);
		}

		static ::System::String** StaticGet_LGNGAEMJPNE()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x38D78);
		}

		static ::System::String** StaticGet_PAAAPFPFANN()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x38D80);
		}

		static ::System::Int32* StaticGet_FHMMAOOCOPN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3B0);
		}

		static ::System::Int32* StaticGet_JKECCKBBLFM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3B4);
		}

		static ::System::Int32* StaticGet_NOFHFKNDBAO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3B8);
		}

		static ::System::Int32* StaticGet_LNGDBLEKGHG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3BC);
		}

		static ::System::Int32* StaticGet_KENNHJJMKMN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3C0);
		}

		static ::System::Int32* StaticGet_FDFABDEOKEF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3C4);
		}

		static ::System::Int32* StaticGet_KCCCNGEMIJE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3C8);
		}

		static ::System::Int32* StaticGet_MJGHKNLEINB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3CC);
		}

		static ::System::Int32* StaticGet_NNGNPHDGJHA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3D0);
		}

		static ::System::Int32* StaticGet_MFGHDOEGOGK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0xB3D4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLJOJLJAKF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICLJOJLJAKF_CCTOR_OFFSET))();
		}

	};
