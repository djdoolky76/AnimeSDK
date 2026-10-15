#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleAvatarTagConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COEPGKIBOCL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCB7EA0)
#define COEPGKIBOCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB8420)
#define COEPGKIBOCL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCB8010)
#define COEPGKIBOCL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCB7950)
#define COEPGKIBOCL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCB7BE0)
#define COEPGKIBOCL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCB80B0)
#define COEPGKIBOCL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCB8100)
#define COEPGKIBOCL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCB7EE0)
#define COEPGKIBOCL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCB7B80)
#define COEPGKIBOCL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCB7D50)
#define COEPGKIBOCL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCB7F70)
#define COEPGKIBOCL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCB78D0)

inline static constexpr unsigned int COEPGKIBOCL_TypeDefinitionIndex = 13787;

	class COEPGKIBOCL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>**)UnitySDK::FromName("", "COEPGKIBOCL")->GetStaticField(0x45240);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "COEPGKIBOCL")->GetStaticField(0x45248);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "COEPGKIBOCL")->GetStaticField(0x45250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "COEPGKIBOCL")->GetStaticField(0x106C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "COEPGKIBOCL")->GetStaticField(0x106C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COEPGKIBOCL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>*(*)())((::PBYTE)hIl2Cpp + COEPGKIBOCL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + COEPGKIBOCL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarTagConfigRow*>(*)())((::PBYTE)hIl2Cpp + COEPGKIBOCL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILBattleAvatarTagConfigRow* LMBKNCAIDLC(::RPG::GameCore::ILBattleAvatarTag a1)
		{
			return ((::RPG::GameCore::ILBattleAvatarTagConfigRow*(*)(::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + COEPGKIBOCL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + COEPGKIBOCL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COEPGKIBOCL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COEPGKIBOCL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + COEPGKIBOCL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + COEPGKIBOCL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + COEPGKIBOCL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILBattleAvatarTagConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILBattleAvatarTagConfigRow*))((::PBYTE)hIl2Cpp + COEPGKIBOCL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
