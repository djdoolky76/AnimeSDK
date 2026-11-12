#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHKJDPKBEGH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E285AD0)
#define KHKJDPKBEGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E286050)
#define KHKJDPKBEGH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E285C40)
#define KHKJDPKBEGH_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E285900)
#define KHKJDPKBEGH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E285500)
#define KHKJDPKBEGH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E285790)
#define KHKJDPKBEGH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E285CE0)
#define KHKJDPKBEGH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E285D30)
#define KHKJDPKBEGH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E285B10)
#define KHKJDPKBEGH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E285730)
#define KHKJDPKBEGH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E285980)
#define KHKJDPKBEGH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E285BA0)
#define KHKJDPKBEGH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E285480)

inline static constexpr unsigned int KHKJDPKBEGH_TypeDefinitionIndex = 11312;

	class KHKJDPKBEGH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>**)UnitySDK::FromName("", "KHKJDPKBEGH")->GetStaticField(0x2D890);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KHKJDPKBEGH")->GetStaticField(0x2D898);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KHKJDPKBEGH")->GetStaticField(0x2D8A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KHKJDPKBEGH")->GetStaticField(0x9820);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KHKJDPKBEGH")->GetStaticField(0x9821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKJDPKBEGH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>*(*)())((::PBYTE)hIl2Cpp + KHKJDPKBEGH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHKJDPKBEGH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>(*)())((::PBYTE)hIl2Cpp + KHKJDPKBEGH_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>, ::RPG::GameCore::ActivityDiceCombatStageRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>, ::RPG::GameCore::ActivityDiceCombatStageRow*>(*)())((::PBYTE)hIl2Cpp + KHKJDPKBEGH_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatStageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceCombatStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KHKJDPKBEGH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHKJDPKBEGH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKJDPKBEGH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKJDPKBEGH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KHKJDPKBEGH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHKJDPKBEGH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KHKJDPKBEGH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceCombatStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatStageRow*))((::PBYTE)hIl2Cpp + KHKJDPKBEGH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
