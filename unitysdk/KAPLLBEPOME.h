#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define KAPLLBEPOME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D62D9B0)
#define KAPLLBEPOME_JCIICGEDPCI_OFFSET UNITYSDK_OFFSET(0x1D62D100)
#define KAPLLBEPOME_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1D62D4B0)
#define KAPLLBEPOME_LEMGFGLHNMN_OFFSET UNITYSDK_OFFSET(0x1D62D5E0)

inline static constexpr unsigned int KAPLLBEPOME_TypeDefinitionIndex = 42349;

	class KAPLLBEPOME : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_LIOJKFIGGIJ()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "KAPLLBEPOME")->GetStaticField(0xA5F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_BFDMLAFFNCG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)UnitySDK::FromName("", "KAPLLBEPOME")->GetStaticField(0xA5F8);
		}

		static ::System::Boolean* StaticGet_KLICCELODLB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KAPLLBEPOME")->GetStaticField(0xFB0);
		}

		static ::System::Int32* StaticGet_GIBBAFIIBAI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KAPLLBEPOME")->GetStaticField(0xFB4);
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
