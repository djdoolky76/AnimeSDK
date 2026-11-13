#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePassQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFLOLIAGMHB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6C1890)
#define IFLOLIAGMHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C1E10)
#define IFLOLIAGMHB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6C1A00)
#define IFLOLIAGMHB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6C1340)
#define IFLOLIAGMHB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6C15D0)
#define IFLOLIAGMHB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6C1AA0)
#define IFLOLIAGMHB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6C1AF0)
#define IFLOLIAGMHB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6C18D0)
#define IFLOLIAGMHB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6C1570)
#define IFLOLIAGMHB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6C1740)
#define IFLOLIAGMHB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6C1960)
#define IFLOLIAGMHB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6C12C0)

inline static constexpr unsigned int IFLOLIAGMHB_TypeDefinitionIndex = 12944;

	class IFLOLIAGMHB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>**)UnitySDK::FromName("", "IFLOLIAGMHB")->GetStaticField(0x1EC90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IFLOLIAGMHB")->GetStaticField(0x1EC98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IFLOLIAGMHB")->GetStaticField(0x1ECA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IFLOLIAGMHB")->GetStaticField(0x6880);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IFLOLIAGMHB")->GetStaticField(0x6881);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFLOLIAGMHB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>*(*)())((::PBYTE)hIl2Cpp + IFLOLIAGMHB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFLOLIAGMHB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>(*)())((::PBYTE)hIl2Cpp + IFLOLIAGMHB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattlePassQuestRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattlePassQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IFLOLIAGMHB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFLOLIAGMHB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFLOLIAGMHB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFLOLIAGMHB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IFLOLIAGMHB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLOLIAGMHB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IFLOLIAGMHB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattlePassQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattlePassQuestRow*))((::PBYTE)hIl2Cpp + IFLOLIAGMHB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
