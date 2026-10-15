#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBuildingLevelRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGDILJDJDPG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0289F0)
#define JGDILJDJDPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D028FF0)
#define JGDILJDJDPG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D028B60)
#define JGDILJDJDPG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D028420)
#define JGDILJDJDPG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0286B0)
#define JGDILJDJDPG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D028C00)
#define JGDILJDJDPG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D028C50)
#define JGDILJDJDPG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D028A30)
#define JGDILJDJDPG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D028650)
#define JGDILJDJDPG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D028820)
#define JGDILJDJDPG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D028AC0)
#define JGDILJDJDPG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0283A0)

inline static constexpr unsigned int JGDILJDJDPG_TypeDefinitionIndex = 11064;

	class JGDILJDJDPG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>**)UnitySDK::FromName("", "JGDILJDJDPG")->GetStaticField(0x2D910);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JGDILJDJDPG")->GetStaticField(0x2D918);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JGDILJDJDPG")->GetStaticField(0x2D920);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JGDILJDJDPG")->GetStaticField(0x94C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JGDILJDJDPG")->GetStaticField(0x94C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGDILJDJDPG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>*(*)())((::PBYTE)hIl2Cpp + JGDILJDJDPG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JGDILJDJDPG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingLevelRow*>(*)())((::PBYTE)hIl2Cpp + JGDILJDJDPG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingBuildingLevelRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ChenLingBuildingLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JGDILJDJDPG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JGDILJDJDPG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGDILJDJDPG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGDILJDJDPG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JGDILJDJDPG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JGDILJDJDPG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JGDILJDJDPG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingBuildingLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingBuildingLevelRow*))((::PBYTE)hIl2Cpp + JGDILJDJDPG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
