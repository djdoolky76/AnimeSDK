#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2AvatarCutinRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEGIMAHNCJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D25F830)
#define OEGIMAHNCJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D25FE00)
#define OEGIMAHNCJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D25F9A0)
#define OEGIMAHNCJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D25F2A0)
#define OEGIMAHNCJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D25F530)
#define OEGIMAHNCJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D25FA40)
#define OEGIMAHNCJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D25FA90)
#define OEGIMAHNCJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D25F870)
#define OEGIMAHNCJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D25F4D0)
#define OEGIMAHNCJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D25F6A0)
#define OEGIMAHNCJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D25F900)
#define OEGIMAHNCJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D25F220)

	class OEGIMAHNCJG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0x33440);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>**)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0x33448);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0x33450);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0xAC80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0xAC81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGIMAHNCJG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>*(*)())((::PBYTE)hIl2Cpp + OEGIMAHNCJG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEGIMAHNCJG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>(*)())((::PBYTE)hIl2Cpp + OEGIMAHNCJG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2AvatarCutinRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2AvatarCutinRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OEGIMAHNCJG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEGIMAHNCJG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGIMAHNCJG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGIMAHNCJG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OEGIMAHNCJG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEGIMAHNCJG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OEGIMAHNCJG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2AvatarCutinRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2AvatarCutinRow*))((::PBYTE)hIl2Cpp + OEGIMAHNCJG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
