#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatAvatarRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define DCJKGIFBKHI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCD9100)
#define DCJKGIFBKHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCD9680)
#define DCJKGIFBKHI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCD9270)
#define DCJKGIFBKHI_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1DCD8F30)
#define DCJKGIFBKHI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCD8B30)
#define DCJKGIFBKHI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCD8DC0)
#define DCJKGIFBKHI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCD9310)
#define DCJKGIFBKHI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCD9360)
#define DCJKGIFBKHI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCD9140)
#define DCJKGIFBKHI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCD8D60)
#define DCJKGIFBKHI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCD8FB0)
#define DCJKGIFBKHI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCD91D0)
#define DCJKGIFBKHI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCD8AB0)

inline static constexpr unsigned int DCJKGIFBKHI_TypeDefinitionIndex = 11236;

	class DCJKGIFBKHI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>**)UnitySDK::FromName("", "DCJKGIFBKHI")->GetStaticField(0x48080);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DCJKGIFBKHI")->GetStaticField(0x48088);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DCJKGIFBKHI")->GetStaticField(0x48090);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DCJKGIFBKHI")->GetStaticField(0x11130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DCJKGIFBKHI")->GetStaticField(0x11131);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJKGIFBKHI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + DCJKGIFBKHI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCJKGIFBKHI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>(*)())((::PBYTE)hIl2Cpp + DCJKGIFBKHI_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + DCJKGIFBKHI_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatAvatarRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceCombatAvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DCJKGIFBKHI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCJKGIFBKHI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJKGIFBKHI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJKGIFBKHI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DCJKGIFBKHI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCJKGIFBKHI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DCJKGIFBKHI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceCombatAvatarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatAvatarRow*))((::PBYTE)hIl2Cpp + DCJKGIFBKHI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
