#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeTypeGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COOKOMPHKBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EEDF780)
#define COOKOMPHKBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEDFD00)
#define COOKOMPHKBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EEDF8F0)
#define COOKOMPHKBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EEDF270)
#define COOKOMPHKBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EEDF500)
#define COOKOMPHKBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EEDF990)
#define COOKOMPHKBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EEDF9E0)
#define COOKOMPHKBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EEDF7C0)
#define COOKOMPHKBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EEDF4A0)
#define COOKOMPHKBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EEDF630)
#define COOKOMPHKBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EEDF850)
#define COOKOMPHKBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EEDF1F0)

inline static constexpr unsigned int COOKOMPHKBD_TypeDefinitionIndex = 12913;

	class COOKOMPHKBD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0x36AA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*>**)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0x36AA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0x36AB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0xBB60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "COOKOMPHKBD")->GetStaticField(0xBB61);
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
