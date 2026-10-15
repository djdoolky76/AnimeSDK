#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLivePowerByTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDINJLLEJLF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE66A30)
#define HDINJLLEJLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE67030)
#define HDINJLLEJLF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE66BA0)
#define HDINJLLEJLF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE66450)
#define HDINJLLEJLF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE666E0)
#define HDINJLLEJLF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE66C40)
#define HDINJLLEJLF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE66C90)
#define HDINJLLEJLF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE66A70)
#define HDINJLLEJLF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE66680)
#define HDINJLLEJLF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE66850)
#define HDINJLLEJLF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE66B00)
#define HDINJLLEJLF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE663D0)

inline static constexpr unsigned int HDINJLLEJLF_TypeDefinitionIndex = 11715;

	class HDINJLLEJLF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HDINJLLEJLF")->GetStaticField(0x1A940);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HDINJLLEJLF")->GetStaticField(0x1A948);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>**)UnitySDK::FromName("", "HDINJLLEJLF")->GetStaticField(0x1A950);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HDINJLLEJLF")->GetStaticField(0x5CD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HDINJLLEJLF")->GetStaticField(0x5CD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDINJLLEJLF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>*(*)())((::PBYTE)hIl2Cpp + HDINJLLEJLF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDINJLLEJLF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLivePowerByTagRow*>(*)())((::PBYTE)hIl2Cpp + HDINJLLEJLF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLivePowerByTagRow* LMBKNCAIDLC(::RPG::GameCore::ILBattleAvatarTag a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::IdleLivePowerByTagRow*(*)(::RPG::GameCore::ILBattleAvatarTag, ::System::UInt32))((::PBYTE)hIl2Cpp + HDINJLLEJLF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDINJLLEJLF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDINJLLEJLF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDINJLLEJLF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HDINJLLEJLF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDINJLLEJLF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HDINJLLEJLF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLivePowerByTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLivePowerByTagRow*))((::PBYTE)hIl2Cpp + HDINJLLEJLF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
