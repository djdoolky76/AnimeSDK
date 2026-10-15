#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModuleTraitSwitchConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMNGMNHCHNP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2DDA20)
#define PMNGMNHCHNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2DE020)
#define PMNGMNHCHNP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2DDB90)
#define PMNGMNHCHNP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2DD450)
#define PMNGMNHCHNP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2DD6E0)
#define PMNGMNHCHNP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2DDC30)
#define PMNGMNHCHNP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2DDC80)
#define PMNGMNHCHNP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2DDA60)
#define PMNGMNHCHNP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2DD680)
#define PMNGMNHCHNP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2DD850)
#define PMNGMNHCHNP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2DDAF0)
#define PMNGMNHCHNP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2DD3D0)

inline static constexpr unsigned int PMNGMNHCHNP_TypeDefinitionIndex = 13484;

	class PMNGMNHCHNP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PMNGMNHCHNP")->GetStaticField(0x51C50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*>**)UnitySDK::FromName("", "PMNGMNHCHNP")->GetStaticField(0x51C58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PMNGMNHCHNP")->GetStaticField(0x51C60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PMNGMNHCHNP")->GetStaticField(0x126B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PMNGMNHCHNP")->GetStaticField(0x126B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMNGMNHCHNP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PMNGMNHCHNP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMNGMNHCHNP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*>(*)())((::PBYTE)hIl2Cpp + PMNGMNHCHNP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightModuleTraitSwitchConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PMNGMNHCHNP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMNGMNHCHNP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMNGMNHCHNP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMNGMNHCHNP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMNGMNHCHNP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMNGMNHCHNP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PMNGMNHCHNP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightModuleTraitSwitchConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*))((::PBYTE)hIl2Cpp + PMNGMNHCHNP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
