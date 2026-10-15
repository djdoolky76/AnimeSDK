#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define EAMJBNLNFNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1267E750)
#define EAMJBNLNFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1267E740)

inline static constexpr unsigned int EAMJBNLNFNB_TypeDefinitionIndex = 60022;

	class EAMJBNLNFNB : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_KEBGFEBMOIN()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xBA50);
		}

		static ::System::String** StaticGet_PDLGOGFGNKJ()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xBA58);
		}

		static ::System::String** StaticGet_AGNCBCLHEBM()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xBA60);
		}

		static ::System::String** StaticGet_FFONHOEAOID()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xBA68);
		}

		static ::System::String** StaticGet_LJIDBOJFICD()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xBA70);
		}

		static ::System::String** StaticGet_MEDDJBBFGKK()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xBA78);
		}

		static ::System::String** StaticGet_GIMHBJFLCCO()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xBA80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMJBNLNFNB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAMJBNLNFNB_CCTOR_OFFSET))();
		}

	};
