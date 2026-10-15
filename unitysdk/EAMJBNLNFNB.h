#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define EAMJBNLNFNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x12683750)
#define EAMJBNLNFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x12683740)

inline static constexpr unsigned int EAMJBNLNFNB_TypeDefinitionIndex = 60022;

	class EAMJBNLNFNB : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MEDDJBBFGKK()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xC1E0);
		}

		static ::System::String** StaticGet_GIMHBJFLCCO()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xC1E8);
		}

		static ::System::String** StaticGet_PDLGOGFGNKJ()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xC1F0);
		}

		static ::System::String** StaticGet_AGNCBCLHEBM()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xC1F8);
		}

		static ::System::String** StaticGet_KEBGFEBMOIN()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xC200);
		}

		static ::System::String** StaticGet_FFONHOEAOID()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xC208);
		}

		static ::System::String** StaticGet_LJIDBOJFICD()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0xC210);
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
