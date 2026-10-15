#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicMiscDisplayRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIECIFMMPNL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F63A0)
#define LIECIFMMPNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F6970)
#define LIECIFMMPNL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F6510)
#define LIECIFMMPNL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F5E10)
#define LIECIFMMPNL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F60A0)
#define LIECIFMMPNL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F65B0)
#define LIECIFMMPNL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F6600)
#define LIECIFMMPNL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F63E0)
#define LIECIFMMPNL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F6040)
#define LIECIFMMPNL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F6210)
#define LIECIFMMPNL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F6470)
#define LIECIFMMPNL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F5D90)

	class LIECIFMMPNL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicMiscDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicMiscDisplayRow*>**)UnitySDK::FromName("", "LIECIFMMPNL")->GetStaticField(0x3DE60);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LIECIFMMPNL")->GetStaticField(0x3DE68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIECIFMMPNL")->GetStaticField(0x3DE70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIECIFMMPNL")->GetStaticField(0xD3E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIECIFMMPNL")->GetStaticField(0xD3E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIECIFMMPNL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicMiscDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicMiscDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + LIECIFMMPNL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIECIFMMPNL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicMiscDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicMiscDisplayRow*>(*)())((::PBYTE)hIl2Cpp + LIECIFMMPNL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicMiscDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicMiscDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LIECIFMMPNL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIECIFMMPNL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIECIFMMPNL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIECIFMMPNL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIECIFMMPNL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIECIFMMPNL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIECIFMMPNL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicMiscDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicMiscDisplayRow*))((::PBYTE)hIl2Cpp + LIECIFMMPNL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
