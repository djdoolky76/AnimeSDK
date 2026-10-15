#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyRewardConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIPILMHFJIA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D8093C0)
#define BIPILMHFJIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D809FA0)
#define BIPILMHFJIA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D809760)
#define BIPILMHFJIA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D809400)
#define BIPILMHFJIA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D809CA0)
#define BIPILMHFJIA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D809800)
#define BIPILMHFJIA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D809850)
#define BIPILMHFJIA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D809630)
#define BIPILMHFJIA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D809C40)
#define BIPILMHFJIA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D809E10)
#define BIPILMHFJIA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D8096C0)
#define BIPILMHFJIA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D809BC0)

	class BIPILMHFJIA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyRewardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyRewardConfigRow*>**)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0x35C10);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0x35C18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0x35C20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0xB580);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BIPILMHFJIA")->GetStaticField(0xB581);
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
