#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeTypeGroupConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COOKOMPHKBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCBC670)
#define COOKOMPHKBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCBCBF0)
#define COOKOMPHKBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCBC7E0)
#define COOKOMPHKBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCBC160)
#define COOKOMPHKBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCBC3F0)
#define COOKOMPHKBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCBC880)
#define COOKOMPHKBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCBC8D0)
#define COOKOMPHKBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCBC6B0)
#define COOKOMPHKBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCBC390)
#define COOKOMPHKBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCBC520)
#define COOKOMPHKBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCBC740)
#define COOKOMPHKBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCBC0E0)

inline static constexpr unsigned int COOKOMPHKBD_TypeDefinitionIndex = 12841;

	class COOKOMPHKBD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0x45850);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*>**)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0x45858);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0x45860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0x10A60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0x10A61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COOKOMPHKBD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + COOKOMPHKBD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + COOKOMPHKBD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + COOKOMPHKBD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleCollegeTypeGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleCollegeTypeGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + COOKOMPHKBD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + COOKOMPHKBD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COOKOMPHKBD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COOKOMPHKBD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + COOKOMPHKBD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + COOKOMPHKBD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + COOKOMPHKBD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleCollegeTypeGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleCollegeTypeGroupConfigRow*))((::PBYTE)hIl2Cpp + COOKOMPHKBD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
