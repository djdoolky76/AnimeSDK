#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyRewardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIPILMHFJIA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F1952B0)
#define BIPILMHFJIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F195E90)
#define BIPILMHFJIA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F195650)
#define BIPILMHFJIA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F1952F0)
#define BIPILMHFJIA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F195B90)
#define BIPILMHFJIA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F1956F0)
#define BIPILMHFJIA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F195740)
#define BIPILMHFJIA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F195520)
#define BIPILMHFJIA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F195B30)
#define BIPILMHFJIA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F195D00)
#define BIPILMHFJIA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F1955B0)
#define BIPILMHFJIA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F195AB0)

inline static constexpr unsigned int BIPILMHFJIA_TypeDefinitionIndex = 15512;

	class BIPILMHFJIA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyRewardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyRewardConfigRow*>**)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0x48E80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0x48E88);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0x48E90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0xE200);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0xE201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIPILMHFJIA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BIPILMHFJIA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIPILMHFJIA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIPILMHFJIA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BIPILMHFJIA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIPILMHFJIA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BIPILMHFJIA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyRewardConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyRewardConfigRow*))((::PBYTE)hIl2Cpp + BIPILMHFJIA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyRewardConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyRewardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BIPILMHFJIA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BIPILMHFJIA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyRewardConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyRewardConfigRow*>(*)())((::PBYTE)hIl2Cpp + BIPILMHFJIA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyRewardConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyRewardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BIPILMHFJIA_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
