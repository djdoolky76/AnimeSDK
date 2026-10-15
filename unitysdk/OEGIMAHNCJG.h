#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2AvatarCutinRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEGIMAHNCJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D231C10)
#define OEGIMAHNCJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2321E0)
#define OEGIMAHNCJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D231D80)
#define OEGIMAHNCJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D231680)
#define OEGIMAHNCJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D231910)
#define OEGIMAHNCJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D231E20)
#define OEGIMAHNCJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D231E70)
#define OEGIMAHNCJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D231C50)
#define OEGIMAHNCJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2318B0)
#define OEGIMAHNCJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D231A80)
#define OEGIMAHNCJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D231CE0)
#define OEGIMAHNCJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D231600)

inline static constexpr unsigned int OEGIMAHNCJG_TypeDefinitionIndex = 11955;

	class OEGIMAHNCJG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0x45120);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2AvatarCutinRow*>**)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0x45128);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0x45130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0x104D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OEGIMAHNCJG")->GetStaticField(0x104D1);
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
