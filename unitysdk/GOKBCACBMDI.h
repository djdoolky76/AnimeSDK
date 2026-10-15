#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomSlotOffsetRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOKBCACBMDI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE747F0)
#define GOKBCACBMDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE74DC0)
#define GOKBCACBMDI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE74960)
#define GOKBCACBMDI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE74260)
#define GOKBCACBMDI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE744F0)
#define GOKBCACBMDI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE74A00)
#define GOKBCACBMDI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE74A50)
#define GOKBCACBMDI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE74830)
#define GOKBCACBMDI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE74490)
#define GOKBCACBMDI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE74660)
#define GOKBCACBMDI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE748C0)
#define GOKBCACBMDI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE741E0)

	class GOKBCACBMDI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>**)UnitySDK::FromName("", "GOKBCACBMDI")->GetStaticField(0x1A8C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GOKBCACBMDI")->GetStaticField(0x1A8C8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GOKBCACBMDI")->GetStaticField(0x1A8D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GOKBCACBMDI")->GetStaticField(0x6040);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GOKBCACBMDI")->GetStaticField(0x6041);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOKBCACBMDI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>*(*)())((::PBYTE)hIl2Cpp + GOKBCACBMDI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOKBCACBMDI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotOffsetRow*>(*)())((::PBYTE)hIl2Cpp + GOKBCACBMDI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerRoomSlotOffsetRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerRoomSlotOffsetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOKBCACBMDI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOKBCACBMDI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOKBCACBMDI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOKBCACBMDI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GOKBCACBMDI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOKBCACBMDI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GOKBCACBMDI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerRoomSlotOffsetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerRoomSlotOffsetRow*))((::PBYTE)hIl2Cpp + GOKBCACBMDI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
