#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KEAKGPKGJPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5D2D40)
#define KEAKGPKGJPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5D2D30)

inline static constexpr unsigned int KEAKGPKGJPH_TypeDefinitionIndex = 76692;

	class KEAKGPKGJPH : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MKMHAALLPII()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3B0);
		}

		static ::System::String** StaticGet_JAGHHNPBPHG()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_EKHACMADJED()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3C0);
		}

		static ::System::String** StaticGet_EMGKPIPKJPO()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3C8);
		}

		static ::System::String** StaticGet_NNFCONCNJIO()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3D0);
		}

		static ::System::String** StaticGet_ELJNLHHDIMB()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_BANHKGOOOLJ()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3E0);
		}

		static ::System::String** StaticGet_OGINGCIAPGP()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3E8);
		}

		static ::System::String** StaticGet_FHMKABILAJK()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3F0);
		}

		static ::System::String** StaticGet_OLJHIFPFECJ()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB3F8);
		}

		static ::System::String** StaticGet_GBFFDMIHLLE()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB400);
		}

		static ::System::String** StaticGet_GIEADBDDCDM()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB408);
		}

		static ::System::String** StaticGet_MLOPBCANLCF()
		{
			return (::System::String**)UnitySDK::FromName("", "KEAKGPKGJPH")->GetStaticField(0xB410);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEAKGPKGJPH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEAKGPKGJPH_CCTOR_OFFSET))();
		}

	};
