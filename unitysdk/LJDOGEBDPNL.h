#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleSkillTriggerKeyRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJDOGEBDPNL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0FF620)
#define LJDOGEBDPNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0FFBF0)
#define LJDOGEBDPNL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0FF790)
#define LJDOGEBDPNL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0FF070)
#define LJDOGEBDPNL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0FF300)
#define LJDOGEBDPNL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0FF830)
#define LJDOGEBDPNL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0FF880)
#define LJDOGEBDPNL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0FF660)
#define LJDOGEBDPNL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0FF2A0)
#define LJDOGEBDPNL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0FF470)
#define LJDOGEBDPNL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0FF6F0)
#define LJDOGEBDPNL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0FEFF0)

inline static constexpr unsigned int LJDOGEBDPNL_TypeDefinitionIndex = 13791;

	class LJDOGEBDPNL : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0x3F4E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0x3F4E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>**)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0x3F4F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0xD820);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0xD821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDOGEBDPNL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>*(*)())((::PBYTE)hIl2Cpp + LJDOGEBDPNL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJDOGEBDPNL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>(*)())((::PBYTE)hIl2Cpp + LJDOGEBDPNL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILBattleSkillTriggerKeyRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::ILBattleSkillTriggerKeyRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + LJDOGEBDPNL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJDOGEBDPNL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDOGEBDPNL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDOGEBDPNL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LJDOGEBDPNL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJDOGEBDPNL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LJDOGEBDPNL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILBattleSkillTriggerKeyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILBattleSkillTriggerKeyRow*))((::PBYTE)hIl2Cpp + LJDOGEBDPNL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
