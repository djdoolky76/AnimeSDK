#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournFormulaRandomRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJGPOJKADMG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCCD020)
#define AJGPOJKADMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCCD5F0)
#define AJGPOJKADMG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCCD190)
#define AJGPOJKADMG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCCCA90)
#define AJGPOJKADMG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCCCD20)
#define AJGPOJKADMG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCCD230)
#define AJGPOJKADMG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCCD280)
#define AJGPOJKADMG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCCD060)
#define AJGPOJKADMG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCCCCC0)
#define AJGPOJKADMG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCCCE90)
#define AJGPOJKADMG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCCD0F0)
#define AJGPOJKADMG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCCCA10)

	class AJGPOJKADMG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AJGPOJKADMG")->GetStaticField(0x39210);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AJGPOJKADMG")->GetStaticField(0x39218);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRandomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRandomRow*>**)UnitySDK::FromName("", "AJGPOJKADMG")->GetStaticField(0x39220);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AJGPOJKADMG")->GetStaticField(0xC360);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AJGPOJKADMG")->GetStaticField(0xC361);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJGPOJKADMG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRandomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRandomRow*>*(*)())((::PBYTE)hIl2Cpp + AJGPOJKADMG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AJGPOJKADMG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRandomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRandomRow*>(*)())((::PBYTE)hIl2Cpp + AJGPOJKADMG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournFormulaRandomRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournFormulaRandomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AJGPOJKADMG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AJGPOJKADMG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJGPOJKADMG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJGPOJKADMG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AJGPOJKADMG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJGPOJKADMG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AJGPOJKADMG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournFormulaRandomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournFormulaRandomRow*))((::PBYTE)hIl2Cpp + AJGPOJKADMG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
