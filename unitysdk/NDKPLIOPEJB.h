#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/System/Object.h"

#define NDKPLIOPEJB_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3D5420)
#define NDKPLIOPEJB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3D5410)

inline static constexpr unsigned int NDKPLIOPEJB_TypeDefinitionIndex = 60949;

	class NDKPLIOPEJB : public ::System::Object
	{
	public:
		static ::PFACHJFCILN_PreloadType* StaticGet_GEIOKNADNKB()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x7BB0);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_BPCCPKMNIAE()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x7BB4);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_HAIDKAEHMLL()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x7BB8);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_GOEAKLEPGLI()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x7BBC);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_KAGLHJMOPNC()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x7BC0);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_CDNLLLFPEPG()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x7BC4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKPLIOPEJB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDKPLIOPEJB_CCTOR_OFFSET))();
		}

	};
