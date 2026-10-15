#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ICLJOJLJAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E520C0)
#define ICLJOJLJAKF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E520B0)

inline static constexpr unsigned int ICLJOJLJAKF_TypeDefinitionIndex = 78755;

	class ICLJOJLJAKF : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PAAAPFPFANN()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x4B090);
		}

		static ::System::String** StaticGet_LGNGAEMJPNE()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x4B098);
		}

		static ::System::String** StaticGet_CKAMKIFGFKG()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x4B0A0);
		}

		static ::System::String** StaticGet_DNKGEOEMAFD()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x4B0A8);
		}

		static ::System::String** StaticGet_OFIPOFLOGBC()
		{
			return (::System::String**)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x4B0B0);
		}

		static ::System::Int32* StaticGet_KENNHJJMKMN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116D0);
		}

		static ::System::Int32* StaticGet_KCCCNGEMIJE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116D4);
		}

		static ::System::Int32* StaticGet_LNGDBLEKGHG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116D8);
		}

		static ::System::Int32* StaticGet_NNGNPHDGJHA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116DC);
		}

		static ::System::Int32* StaticGet_JKECCKBBLFM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116E0);
		}

		static ::System::Int32* StaticGet_FHMMAOOCOPN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116E4);
		}

		static ::System::Int32* StaticGet_MJGHKNLEINB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116E8);
		}

		static ::System::Int32* StaticGet_FDFABDEOKEF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116EC);
		}

		static ::System::Int32* StaticGet_MFGHDOEGOGK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116F0);
		}

		static ::System::Int32* StaticGet_NOFHFKNDBAO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ICLJOJLJAKF")->GetStaticField(0x116F4);
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
