#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTutorialStageNodeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKAPAHAHLHD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCA4CA0)
#define AKAPAHAHLHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCA5300)
#define AKAPAHAHLHD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCA4E10)
#define AKAPAHAHLHD_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CCA49D0)
#define AKAPAHAHLHD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCA45D0)
#define AKAPAHAHLHD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCA4860)
#define AKAPAHAHLHD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCA4EB0)
#define AKAPAHAHLHD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCA4F00)
#define AKAPAHAHLHD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCA4CE0)
#define AKAPAHAHLHD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCA4800)
#define AKAPAHAHLHD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCA4A50)
#define AKAPAHAHLHD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCA4D70)
#define AKAPAHAHLHD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCA4550)

inline static constexpr unsigned int AKAPAHAHLHD_TypeDefinitionIndex = 13648;

	class AKAPAHAHLHD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AKAPAHAHLHD")->GetStaticField(0x40940);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>**)UnitySDK::FromName("", "AKAPAHAHLHD")->GetStaticField(0x40948);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AKAPAHAHLHD")->GetStaticField(0x40950);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AKAPAHAHLHD")->GetStaticField(0xF5D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AKAPAHAHLHD")->GetStaticField(0xF5D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKAPAHAHLHD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AKAPAHAHLHD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKAPAHAHLHD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>(*)())((::PBYTE)hIl2Cpp + AKAPAHAHLHD_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>(*)())((::PBYTE)hIl2Cpp + AKAPAHAHLHD_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTutorialStageNodeConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::GameCore::GridFightTutorialStageNodeConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAPAHAHLHD_LMBKNCAIDLC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKAPAHAHLHD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKAPAHAHLHD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKAPAHAHLHD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKAPAHAHLHD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAPAHAHLHD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AKAPAHAHLHD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTutorialStageNodeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTutorialStageNodeConfigRow*))((::PBYTE)hIl2Cpp + AKAPAHAHLHD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
