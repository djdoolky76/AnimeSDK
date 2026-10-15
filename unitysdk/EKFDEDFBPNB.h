#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKFDEDFBPNB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD95FD0)
#define EKFDEDFBPNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD96550)
#define EKFDEDFBPNB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD96140)
#define EKFDEDFBPNB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD95A80)
#define EKFDEDFBPNB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD95D10)
#define EKFDEDFBPNB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD961E0)
#define EKFDEDFBPNB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD96230)
#define EKFDEDFBPNB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD96010)
#define EKFDEDFBPNB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD95CB0)
#define EKFDEDFBPNB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD95E80)
#define EKFDEDFBPNB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD960A0)
#define EKFDEDFBPNB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD95A00)

inline static constexpr unsigned int EKFDEDFBPNB_TypeDefinitionIndex = 12162;

	class EKFDEDFBPNB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0x1FD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>**)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0x1FD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0x1FE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0x1D10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0x1D11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKFDEDFBPNB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>*(*)())((::PBYTE)hIl2Cpp + EKFDEDFBPNB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKFDEDFBPNB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>(*)())((::PBYTE)hIl2Cpp + EKFDEDFBPNB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirSkillRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EKFDEDFBPNB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKFDEDFBPNB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKFDEDFBPNB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKFDEDFBPNB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EKFDEDFBPNB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EKFDEDFBPNB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EKFDEDFBPNB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirSkillRow*))((::PBYTE)hIl2Cpp + EKFDEDFBPNB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
