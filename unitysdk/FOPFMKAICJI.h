#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantQuestGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOPFMKAICJI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDEB220)
#define FOPFMKAICJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDEB7A0)
#define FOPFMKAICJI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDEB390)
#define FOPFMKAICJI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDEAD10)
#define FOPFMKAICJI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDEAFA0)
#define FOPFMKAICJI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDEB430)
#define FOPFMKAICJI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDEB480)
#define FOPFMKAICJI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDEB260)
#define FOPFMKAICJI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDEAF40)
#define FOPFMKAICJI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDEB0D0)
#define FOPFMKAICJI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDEB2F0)
#define FOPFMKAICJI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDEAC90)

inline static constexpr unsigned int FOPFMKAICJI_TypeDefinitionIndex = 11393;

	class FOPFMKAICJI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x138B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>**)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x138B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x138C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x4060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FOPFMKAICJI")->GetStaticField(0x4061);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>*(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantQuestGroupRow*>(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantQuestGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantQuestGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOPFMKAICJI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOPFMKAICJI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOPFMKAICJI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOPFMKAICJI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FOPFMKAICJI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RestaurantQuestGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantQuestGroupRow*))((::PBYTE)hIl2Cpp + FOPFMKAICJI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
