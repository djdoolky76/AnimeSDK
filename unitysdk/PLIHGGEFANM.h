#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFinalityBattleRoleRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLIHGGEFANM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D301460)
#define PLIHGGEFANM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D301DD0)
#define PLIHGGEFANM_CNGMGIBFPIL_OFFSET UNITYSDK_OFFSET(0x1D3019E0)
#define PLIHGGEFANM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D3015D0)
#define PLIHGGEFANM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D300F10)
#define PLIHGGEFANM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D3011A0)
#define PLIHGGEFANM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D301670)
#define PLIHGGEFANM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D3016C0)
#define PLIHGGEFANM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D3014A0)
#define PLIHGGEFANM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D301140)
#define PLIHGGEFANM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D3012D0)
#define PLIHGGEFANM_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x1D301D40)
#define PLIHGGEFANM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D301530)
#define PLIHGGEFANM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D300E90)

inline static constexpr unsigned int PLIHGGEFANM_TypeDefinitionIndex = 11607;

	class PLIHGGEFANM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet_JIHNCJAHNAB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("", "PLIHGGEFANM")->GetStaticField(0x45580);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PLIHGGEFANM")->GetStaticField(0x45588);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PLIHGGEFANM")->GetStaticField(0x45590);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRoleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRoleRow*>**)UnitySDK::FromName("", "PLIHGGEFANM")->GetStaticField(0x45598);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PLIHGGEFANM")->GetStaticField(0x107B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PLIHGGEFANM")->GetStaticField(0x107B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLIHGGEFANM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRoleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRoleRow*>*(*)())((::PBYTE)hIl2Cpp + PLIHGGEFANM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLIHGGEFANM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRoleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFinalityBattleRoleRow*>(*)())((::PBYTE)hIl2Cpp + PLIHGGEFANM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFinalityBattleRoleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFinalityBattleRoleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PLIHGGEFANM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLIHGGEFANM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLIHGGEFANM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLIHGGEFANM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PLIHGGEFANM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLIHGGEFANM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PLIHGGEFANM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityFinalityBattleRoleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFinalityBattleRoleRow*))((::PBYTE)hIl2Cpp + PLIHGGEFANM_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::RPG::GameCore::ActivityFinalityBattleRoleRow* CNGMGIBFPIL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFinalityBattleRoleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PLIHGGEFANM_CNGMGIBFPIL_OFFSET))(a1);
		}

		static ::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLIHGGEFANM_PEECNCABGFD_OFFSET))();
		}

	};
