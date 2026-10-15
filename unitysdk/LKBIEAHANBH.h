#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LKBIEAHANBH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB721D00)

inline static constexpr unsigned int LKBIEAHANBH_TypeDefinitionIndex = 62203;

	class LKBIEAHANBH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_DBLNAGCBLOO()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "LKBIEAHANBH")->GetStaticField(0x68EC0);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_OGKFHLIILIN()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "LKBIEAHANBH")->GetStaticField(0x68EC8);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_IPOPCFKIPEK()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "LKBIEAHANBH")->GetStaticField(0x68ED0);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_ACALFDBODOD()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "LKBIEAHANBH")->GetStaticField(0x68ED8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKBIEAHANBH_CCTOR_OFFSET))();
		}

	};
