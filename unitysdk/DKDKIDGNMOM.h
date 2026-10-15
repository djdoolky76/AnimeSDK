#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatDiceContentRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKDKIDGNMOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD34FB0)
#define DKDKIDGNMOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD35580)
#define DKDKIDGNMOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD35120)
#define DKDKIDGNMOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD34A20)
#define DKDKIDGNMOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD34CB0)
#define DKDKIDGNMOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD351C0)
#define DKDKIDGNMOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD35210)
#define DKDKIDGNMOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD34FF0)
#define DKDKIDGNMOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD34C50)
#define DKDKIDGNMOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD34E20)
#define DKDKIDGNMOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD35080)
#define DKDKIDGNMOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD349A0)

	class DKDKIDGNMOM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DKDKIDGNMOM")->GetStaticField(0x4DF70);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DKDKIDGNMOM")->GetStaticField(0x4DF78);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>**)UnitySDK::FromName("", "DKDKIDGNMOM")->GetStaticField(0x4DF80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DKDKIDGNMOM")->GetStaticField(0x11F10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DKDKIDGNMOM")->GetStaticField(0x11F11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKDKIDGNMOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>*(*)())((::PBYTE)hIl2Cpp + DKDKIDGNMOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKDKIDGNMOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>(*)())((::PBYTE)hIl2Cpp + DKDKIDGNMOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatDiceContentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceCombatDiceContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DKDKIDGNMOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKDKIDGNMOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKDKIDGNMOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKDKIDGNMOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DKDKIDGNMOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKDKIDGNMOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DKDKIDGNMOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceCombatDiceContentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatDiceContentRow*))((::PBYTE)hIl2Cpp + DKDKIDGNMOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
