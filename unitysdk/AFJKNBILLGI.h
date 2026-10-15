#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EReplayTag.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFJKNBILLGI_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF0F450)
#define AFJKNBILLGI_CJDLJMKBNON_OFFSET UNITYSDK_OFFSET(0xCF0EAD0)
#define AFJKNBILLGI_CJMELLLIEDE_OFFSET UNITYSDK_OFFSET(0xCF0F160)
#define AFJKNBILLGI_CLOPDENLHGD_OFFSET UNITYSDK_OFFSET(0xCF0F3B0)
#define AFJKNBILLGI_EDJIMEKCDEM_OFFSET UNITYSDK_OFFSET(0xCF0F1C0)
#define AFJKNBILLGI_EKCBJICMGGC_OFFSET UNITYSDK_OFFSET(0xCF0F3F0)
#define AFJKNBILLGI_GABHJEMADGN_OFFSET UNITYSDK_OFFSET(0xCF0EB30)
#define AFJKNBILLGI_KNPMDHNGNKP_OFFSET UNITYSDK_OFFSET(0xCF0F2F0)
#define AFJKNBILLGI_OBADCLNHMJL_OFFSET UNITYSDK_OFFSET(0xCF0EB00)

	class AFJKNBILLGI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_ICPKEOFMIAO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)UnitySDK::FromName("", "AFJKNBILLGI")->GetStaticField(0x4D3F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_NNDOBIMOFEO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)UnitySDK::FromName("", "AFJKNBILLGI")->GetStaticField(0x4D3F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFJKNBILLGI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* CJDLJMKBNON()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + AFJKNBILLGI_CJDLJMKBNON_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* OBADCLNHMJL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + AFJKNBILLGI_OBADCLNHMJL_OFFSET))();
		}

		static ::System::Void GABHJEMADGN(::RPG::GameCore::EReplayTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::EReplayTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AFJKNBILLGI_GABHJEMADGN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CJMELLLIEDE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFJKNBILLGI_CJMELLLIEDE_OFFSET))();
		}

		static ::System::Void KNPMDHNGNKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AFJKNBILLGI_KNPMDHNGNKP_OFFSET))(a1);
		}

		static ::System::Void CLOPDENLHGD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFJKNBILLGI_CLOPDENLHGD_OFFSET))();
		}

		static ::System::Void EKCBJICMGGC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFJKNBILLGI_EKCBJICMGGC_OFFSET))();
		}

		static ::System::Void EDJIMEKCDEM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFJKNBILLGI_EDJIMEKCDEM_OFFSET))();
		}

	};
