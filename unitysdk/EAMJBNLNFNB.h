#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define EAMJBNLNFNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x181DAC90)
#define EAMJBNLNFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x181DAC80)

inline static constexpr unsigned int EAMJBNLNFNB_TypeDefinitionIndex = 61306;

	class EAMJBNLNFNB : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FFONHOEAOID()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0x1D280);
		}

		static ::System::String** StaticGet_AGNCBCLHEBM()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0x1D288);
		}

		static ::System::String** StaticGet_KEBGFEBMOIN()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0x1D290);
		}

		static ::System::String** StaticGet_MEDDJBBFGKK()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0x1D298);
		}

		static ::System::String** StaticGet_PDLGOGFGNKJ()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0x1D2A0);
		}

		static ::System::String** StaticGet_GIMHBJFLCCO()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0x1D2A8);
		}

		static ::System::String** StaticGet_LJIDBOJFICD()
		{
			return (::System::String**)UnitySDK::FromName("", "EAMJBNLNFNB")->GetStaticField(0x1D2B0);
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
