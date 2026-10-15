#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBFKEKEDOGD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFE0A00)
#define DBFKEKEDOGD_JCIHMJGKNGG_OFFSET UNITYSDK_OFFSET(0xDFE0910)

	class DBFKEKEDOGD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_DPLKOLBOGDI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)UnitySDK::FromName("", "DBFKEKEDOGD")->GetStaticField(0x5CD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBFKEKEDOGD_CCTOR_OFFSET))();
		}

		static ::System::Type* JCIHMJGKNGG(::System::String* a1)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + DBFKEKEDOGD_JCIHMJGKNGG_OFFSET))(a1);
		}

	};
