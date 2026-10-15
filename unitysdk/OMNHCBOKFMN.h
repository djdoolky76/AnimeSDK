#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMNHCBOKFMN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF349F0)
#define OMNHCBOKFMN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF349E0)

	class OMNHCBOKFMN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_JNACBACPDEM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("", "OMNHCBOKFMN")->GetStaticField(0xCD40);
		}

		// static const ::System::Object NLCDGIPGFDJ; // 0x0
		// static const ::System::Object BFLENEMBIBM; // 0x0
		// static const ::System::Object PDBPCBILEBP; // 0x0
		// static const ::System::Object JPANAKLCINB; // 0x0
		// static const ::System::Object DONAIDKHFFA; // 0x0
		// static const ::System::Object PJAAADFOKKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNHCBOKFMN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNHCBOKFMN_CCTOR_OFFSET))();
		}

	};
