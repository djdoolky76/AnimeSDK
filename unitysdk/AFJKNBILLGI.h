#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EReplayTag.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFJKNBILLGI_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF08060)
#define AFJKNBILLGI_CJDLJMKBNON_OFFSET UNITYSDK_OFFSET(0xCF076E0)
#define AFJKNBILLGI_CJMELLLIEDE_OFFSET UNITYSDK_OFFSET(0xCF07D70)
#define AFJKNBILLGI_CLOPDENLHGD_OFFSET UNITYSDK_OFFSET(0xCF07FC0)
#define AFJKNBILLGI_EDJIMEKCDEM_OFFSET UNITYSDK_OFFSET(0xCF07DD0)
#define AFJKNBILLGI_EKCBJICMGGC_OFFSET UNITYSDK_OFFSET(0xCF08000)
#define AFJKNBILLGI_GABHJEMADGN_OFFSET UNITYSDK_OFFSET(0xCF07740)
#define AFJKNBILLGI_KNPMDHNGNKP_OFFSET UNITYSDK_OFFSET(0xCF07F00)
#define AFJKNBILLGI_OBADCLNHMJL_OFFSET UNITYSDK_OFFSET(0xCF07710)

inline static constexpr unsigned int AFJKNBILLGI_TypeDefinitionIndex = 56197;

	class AFJKNBILLGI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_ICPKEOFMIAO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)UnitySDK::FromName("", "AFJKNBILLGI")->GetStaticField(0x40430);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_NNDOBIMOFEO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)UnitySDK::FromName("", "AFJKNBILLGI")->GetStaticField(0x40438);
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
