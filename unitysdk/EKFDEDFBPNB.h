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

#define EKFDEDFBPNB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF68DE0)
#define EKFDEDFBPNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF69360)
#define EKFDEDFBPNB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF68F50)
#define EKFDEDFBPNB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF68890)
#define EKFDEDFBPNB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF68B20)
#define EKFDEDFBPNB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF68FF0)
#define EKFDEDFBPNB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF69040)
#define EKFDEDFBPNB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF68E20)
#define EKFDEDFBPNB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF68AC0)
#define EKFDEDFBPNB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF68C90)
#define EKFDEDFBPNB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF68EB0)
#define EKFDEDFBPNB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF68810)

inline static constexpr unsigned int EKFDEDFBPNB_TypeDefinitionIndex = 12219;

	class EKFDEDFBPNB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0x387B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirSkillRow*>**)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0x387B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0x387C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0xC440);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EKFDEDFBPNB")->GetStaticField(0xC441);
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
