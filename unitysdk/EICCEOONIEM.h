#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EICCEOONIEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD86EB0)
#define EICCEOONIEM_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1CD86D40)
#define EICCEOONIEM_OCDAEECDMCF_OFFSET UNITYSDK_OFFSET(0x1CD86BD0)

	class EICCEOONIEM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_DCNMPCPPHJO()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)UnitySDK::FromName("", "EICCEOONIEM")->GetStaticField(0x54130);
		}

		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_OAFDNADLKAO()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)UnitySDK::FromName("", "EICCEOONIEM")->GetStaticField(0x54138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EICCEOONIEM_CCTOR_OFFSET))();
		}

		static ::System::Void OCDAEECDMCF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EICCEOONIEM_OCDAEECDMCF_OFFSET))();
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EICCEOONIEM_HFBAFEEPOLN_OFFSET))();
		}

	};
