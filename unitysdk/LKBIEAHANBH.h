#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LKBIEAHANBH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB728A70)

	class LKBIEAHANBH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_DBLNAGCBLOO()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "LKBIEAHANBH")->GetStaticField(0x64620);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_ACALFDBODOD()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "LKBIEAHANBH")->GetStaticField(0x64628);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_OGKFHLIILIN()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "LKBIEAHANBH")->GetStaticField(0x64630);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_IPOPCFKIPEK()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "LKBIEAHANBH")->GetStaticField(0x64638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKBIEAHANBH_CCTOR_OFFSET))();
		}

	};
