#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEquipRecommendRoleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPFGCPEKGIM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF2DC20)
#define IPFGCPEKGIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF2E1F0)
#define IPFGCPEKGIM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF2DD90)
#define IPFGCPEKGIM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF2D690)
#define IPFGCPEKGIM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF2D920)
#define IPFGCPEKGIM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF2DE30)
#define IPFGCPEKGIM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF2DE80)
#define IPFGCPEKGIM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF2DC60)
#define IPFGCPEKGIM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF2D8C0)
#define IPFGCPEKGIM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF2DA90)
#define IPFGCPEKGIM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF2DCF0)
#define IPFGCPEKGIM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF2D610)

inline static constexpr unsigned int IPFGCPEKGIM_TypeDefinitionIndex = 13466;

	class IPFGCPEKGIM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>**)UnitySDK::FromName("", "IPFGCPEKGIM")->GetStaticField(0x24DC0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IPFGCPEKGIM")->GetStaticField(0x24DC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPFGCPEKGIM")->GetStaticField(0x24DD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPFGCPEKGIM")->GetStaticField(0x80B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPFGCPEKGIM")->GetStaticField(0x80B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFGCPEKGIM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IPFGCPEKGIM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPFGCPEKGIM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>(*)())((::PBYTE)hIl2Cpp + IPFGCPEKGIM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPFGCPEKGIM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPFGCPEKGIM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFGCPEKGIM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFGCPEKGIM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPFGCPEKGIM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPFGCPEKGIM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPFGCPEKGIM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightEquipRecommendRoleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*))((::PBYTE)hIl2Cpp + IPFGCPEKGIM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
