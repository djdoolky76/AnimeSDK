#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define KAPLLBEPOME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C47B7A0)
#define KAPLLBEPOME_JCIICGEDPCI_OFFSET UNITYSDK_OFFSET(0x1C47AF20)
#define KAPLLBEPOME_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C47B2D0)
#define KAPLLBEPOME_LEMGFGLHNMN_OFFSET UNITYSDK_OFFSET(0x1C47B400)

inline static constexpr unsigned int KAPLLBEPOME_TypeDefinitionIndex = 41374;

	class KAPLLBEPOME : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_LIOJKFIGGIJ()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "KAPLLBEPOME")->GetStaticField(0x1B950);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_BFDMLAFFNCG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)UnitySDK::FromName("", "KAPLLBEPOME")->GetStaticField(0x1B958);
		}

		static ::System::Boolean* StaticGet_KLICCELODLB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KAPLLBEPOME")->GetStaticField(0x5F50);
		}

		static ::System::Int32* StaticGet_GIBBAFIIBAI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KAPLLBEPOME")->GetStaticField(0x5F54);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAPLLBEPOME_CCTOR_OFFSET))();
		}

		static ::System::Void JCIICGEDPCI(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KAPLLBEPOME_JCIICGEDPCI_OFFSET))(a1);
		}

		static ::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAPLLBEPOME_JLANKNHFKCN_OFFSET))();
		}

		static ::System::Void LEMGFGLHNMN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAPLLBEPOME_LEMGFGLHNMN_OFFSET))();
		}

	};
