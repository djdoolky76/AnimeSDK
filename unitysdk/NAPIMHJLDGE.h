#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCRoomRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAPIMHJLDGE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1EB140)
#define NAPIMHJLDGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1EB740)
#define NAPIMHJLDGE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1EB2B0)
#define NAPIMHJLDGE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1EAB60)
#define NAPIMHJLDGE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1EADF0)
#define NAPIMHJLDGE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1EB350)
#define NAPIMHJLDGE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1EB3A0)
#define NAPIMHJLDGE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1EB180)
#define NAPIMHJLDGE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1EAD90)
#define NAPIMHJLDGE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1EAF60)
#define NAPIMHJLDGE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1EB210)
#define NAPIMHJLDGE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1EAAE0)

	class NAPIMHJLDGE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>**)UnitySDK::FromName("", "NAPIMHJLDGE")->GetStaticField(0x2C5D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NAPIMHJLDGE")->GetStaticField(0x2C5D8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NAPIMHJLDGE")->GetStaticField(0x2C5E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NAPIMHJLDGE")->GetStaticField(0x8BF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NAPIMHJLDGE")->GetStaticField(0x8BF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPIMHJLDGE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>*(*)())((::PBYTE)hIl2Cpp + NAPIMHJLDGE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPIMHJLDGE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>(*)())((::PBYTE)hIl2Cpp + NAPIMHJLDGE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCRoomRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::RogueSubMode a2)
		{
			return ((::RPG::GameCore::RogueDLCRoomRow*(*)(::System::UInt32, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + NAPIMHJLDGE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPIMHJLDGE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPIMHJLDGE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPIMHJLDGE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NAPIMHJLDGE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPIMHJLDGE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NAPIMHJLDGE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDLCRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCRoomRow*))((::PBYTE)hIl2Cpp + NAPIMHJLDGE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
