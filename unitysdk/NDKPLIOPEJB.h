#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/System/Object.h"

#define NDKPLIOPEJB_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB45BB0)
#define NDKPLIOPEJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB45BA0)

inline static constexpr unsigned int NDKPLIOPEJB_TypeDefinitionIndex = 59672;

	class NDKPLIOPEJB : public ::System::Object
	{
	public:
		static ::PFACHJFCILN_PreloadType* StaticGet_CDNLLLFPEPG()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x9780);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_BPCCPKMNIAE()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x9784);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_GOEAKLEPGLI()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x9788);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_KAGLHJMOPNC()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x978C);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_HAIDKAEHMLL()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x9790);
		}

		static ::PFACHJFCILN_PreloadType* StaticGet_GEIOKNADNKB()
		{
			return (::PFACHJFCILN_PreloadType*)UnitySDK::FromName("", "NDKPLIOPEJB")->GetStaticField(0x9794);
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
