#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatAvatarLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GADGJANJIMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA41A70)
#define GADGJANJIMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA42040)
#define GADGJANJIMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA41BE0)
#define GADGJANJIMF_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1EA41860)
#define GADGJANJIMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA41460)
#define GADGJANJIMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA416F0)
#define GADGJANJIMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA41C80)
#define GADGJANJIMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA41CD0)
#define GADGJANJIMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA41AB0)
#define GADGJANJIMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA41690)
#define GADGJANJIMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA418E0)
#define GADGJANJIMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA41B40)
#define GADGJANJIMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA413E0)

inline static constexpr unsigned int GADGJANJIMF_TypeDefinitionIndex = 11317;

	class GADGJANJIMF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GADGJANJIMF")->GetStaticField(0xB250);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>**)UnitySDK::FromName("", "GADGJANJIMF")->GetStaticField(0xB258);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GADGJANJIMF")->GetStaticField(0xB260);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GADGJANJIMF")->GetStaticField(0x1540);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GADGJANJIMF")->GetStaticField(0x1541);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GADGJANJIMF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>*(*)())((::PBYTE)hIl2Cpp + GADGJANJIMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GADGJANJIMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>(*)())((::PBYTE)hIl2Cpp + GADGJANJIMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>(*)())((::PBYTE)hIl2Cpp + GADGJANJIMF_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GADGJANJIMF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GADGJANJIMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GADGJANJIMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GADGJANJIMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GADGJANJIMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GADGJANJIMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GADGJANJIMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityDiceCombatAvatarLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*))((::PBYTE)hIl2Cpp + GADGJANJIMF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
