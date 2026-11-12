#pragma once
#include "unitysdk/unitysdk.h"

#define EBGFPDCAEHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D77C4B0)

inline static constexpr unsigned int EBGFPDCAEHK_TypeDefinitionIndex = 37196;

	struct alignas(4) EBGFPDCAEHK
	{
		::System::Boolean PJONDAHHJGL; // 0x10
		::System::Boolean NJEMAHGDCON; // 0x11
		::System::Boolean CFDPLFIPNFF; // 0x12
		::System::Boolean ILDGNILAJIL; // 0x13
		static ::EBGFPDCAEHK* StaticGet_ACAOCKPIGPL()
		{
			return (::EBGFPDCAEHK*)UnitySDK::FromName("", "EBGFPDCAEHK")->GetStaticField(0x151D0);
		}

		static ::EBGFPDCAEHK* StaticGet_JOINAABKFHM()
		{
			return (::EBGFPDCAEHK*)UnitySDK::FromName("", "EBGFPDCAEHK")->GetStaticField(0x151D4);
		}

		static ::EBGFPDCAEHK* StaticGet_PLFFEGJOADD()
		{
			return (::EBGFPDCAEHK*)UnitySDK::FromName("", "EBGFPDCAEHK")->GetStaticField(0x151D8);
		}

		static ::EBGFPDCAEHK* StaticGet_GFGPFNNHNPD()
		{
			return (::EBGFPDCAEHK*)UnitySDK::FromName("", "EBGFPDCAEHK")->GetStaticField(0x151DC);
		}

		static ::EBGFPDCAEHK* StaticGet_KOJMNNOAHHN()
		{
			return (::EBGFPDCAEHK*)UnitySDK::FromName("", "EBGFPDCAEHK")->GetStaticField(0x151E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBGFPDCAEHK_CCTOR_OFFSET))();
		}

	};
