#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleSkillTriggerKeyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJDOGEBDPNL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D1810)
#define LJDOGEBDPNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D1DE0)
#define LJDOGEBDPNL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D1980)
#define LJDOGEBDPNL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D1260)
#define LJDOGEBDPNL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D14F0)
#define LJDOGEBDPNL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D1A20)
#define LJDOGEBDPNL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D1A70)
#define LJDOGEBDPNL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D1850)
#define LJDOGEBDPNL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D1490)
#define LJDOGEBDPNL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D1660)
#define LJDOGEBDPNL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D18E0)
#define LJDOGEBDPNL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D11E0)

inline static constexpr unsigned int LJDOGEBDPNL_TypeDefinitionIndex = 13791;

	class LJDOGEBDPNL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*>**)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0x3C780);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0x3C788);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0x3C790);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0xC120);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LJDOGEBDPNL")->GetStaticField(0xC121);
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
