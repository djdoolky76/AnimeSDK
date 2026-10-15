#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKAEANLGHIB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB461750)

	class KKAEANLGHIB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_MALMHPMEHBC()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)UnitySDK::FromName("", "KKAEANLGHIB")->GetStaticField(0x59080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKAEANLGHIB_CCTOR_OFFSET))();
		}

	};
