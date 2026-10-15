#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleActionEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APEGEENIJHL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCBE900)
#define APEGEENIJHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBEE80)
#define APEGEENIJHL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCBEA70)
#define APEGEENIJHL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCBE3B0)
#define APEGEENIJHL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCBE640)
#define APEGEENIJHL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCBEB10)
#define APEGEENIJHL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCBEB60)
#define APEGEENIJHL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCBE940)
#define APEGEENIJHL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCBE5E0)
#define APEGEENIJHL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCBE7B0)
#define APEGEENIJHL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCBE9D0)
#define APEGEENIJHL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCBE330)

inline static constexpr unsigned int APEGEENIJHL_TypeDefinitionIndex = 12831;

	class APEGEENIJHL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>**)UnitySDK::FromName("", "APEGEENIJHL")->GetStaticField(0x432D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "APEGEENIJHL")->GetStaticField(0x432D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "APEGEENIJHL")->GetStaticField(0x432E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "APEGEENIJHL")->GetStaticField(0xFF30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "APEGEENIJHL")->GetStaticField(0xFF31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APEGEENIJHL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>*(*)())((::PBYTE)hIl2Cpp + APEGEENIJHL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + APEGEENIJHL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>(*)())((::PBYTE)hIl2Cpp + APEGEENIJHL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleActionEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleActionEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + APEGEENIJHL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + APEGEENIJHL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APEGEENIJHL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APEGEENIJHL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + APEGEENIJHL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + APEGEENIJHL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + APEGEENIJHL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleActionEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleActionEventRow*))((::PBYTE)hIl2Cpp + APEGEENIJHL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
