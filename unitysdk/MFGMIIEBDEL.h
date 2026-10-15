#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueMagicMarkType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRoomType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicRoomMarkRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFGMIIEBDEL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D157E00)
#define MFGMIIEBDEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D158400)
#define MFGMIIEBDEL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D157F70)
#define MFGMIIEBDEL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D157820)
#define MFGMIIEBDEL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D157AB0)
#define MFGMIIEBDEL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D158010)
#define MFGMIIEBDEL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D158060)
#define MFGMIIEBDEL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D157E40)
#define MFGMIIEBDEL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D157A50)
#define MFGMIIEBDEL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D157C20)
#define MFGMIIEBDEL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D157ED0)
#define MFGMIIEBDEL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1577A0)

	class MFGMIIEBDEL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MFGMIIEBDEL")->GetStaticField(0x49F30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>**)UnitySDK::FromName("", "MFGMIIEBDEL")->GetStaticField(0x49F38);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MFGMIIEBDEL")->GetStaticField(0x49F40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MFGMIIEBDEL")->GetStaticField(0x114D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MFGMIIEBDEL")->GetStaticField(0x114D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFGMIIEBDEL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>*(*)())((::PBYTE)hIl2Cpp + MFGMIIEBDEL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFGMIIEBDEL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>(*)())((::PBYTE)hIl2Cpp + MFGMIIEBDEL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicRoomMarkRow* LMBKNCAIDLC(::RPG::GameCore::RogueMagicRoomType a1, ::RPG::GameCore::RogueMagicMarkType a2)
		{
			return ((::RPG::GameCore::RogueMagicRoomMarkRow*(*)(::RPG::GameCore::RogueMagicRoomType, ::RPG::GameCore::RogueMagicMarkType))((::PBYTE)hIl2Cpp + MFGMIIEBDEL_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFGMIIEBDEL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFGMIIEBDEL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFGMIIEBDEL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MFGMIIEBDEL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MFGMIIEBDEL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MFGMIIEBDEL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicRoomMarkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicRoomMarkRow*))((::PBYTE)hIl2Cpp + MFGMIIEBDEL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
