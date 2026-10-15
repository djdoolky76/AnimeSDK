#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INHMGEIKAPI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF26BD0)
#define INHMGEIKAPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF271A0)
#define INHMGEIKAPI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF26D40)
#define INHMGEIKAPI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF26640)
#define INHMGEIKAPI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF268D0)
#define INHMGEIKAPI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF26DE0)
#define INHMGEIKAPI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF26E30)
#define INHMGEIKAPI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF26C10)
#define INHMGEIKAPI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF26870)
#define INHMGEIKAPI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF26A40)
#define INHMGEIKAPI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF26CA0)
#define INHMGEIKAPI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF265C0)

	class INHMGEIKAPI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "INHMGEIKAPI")->GetStaticField(0x24710);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "INHMGEIKAPI")->GetStaticField(0x24718);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>**)UnitySDK::FromName("", "INHMGEIKAPI")->GetStaticField(0x24720);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "INHMGEIKAPI")->GetStaticField(0x8010);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "INHMGEIKAPI")->GetStaticField(0x8011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INHMGEIKAPI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + INHMGEIKAPI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INHMGEIKAPI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>(*)())((::PBYTE)hIl2Cpp + INHMGEIKAPI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILBattleStageConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ILBattleStageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INHMGEIKAPI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INHMGEIKAPI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INHMGEIKAPI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INHMGEIKAPI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INHMGEIKAPI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + INHMGEIKAPI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + INHMGEIKAPI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILBattleStageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILBattleStageConfigRow*))((::PBYTE)hIl2Cpp + INHMGEIKAPI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
