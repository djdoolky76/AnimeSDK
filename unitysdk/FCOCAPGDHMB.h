#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitOldLayerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCOCAPGDHMB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDA9850)
#define FCOCAPGDHMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDA9E80)
#define FCOCAPGDHMB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDA99C0)
#define FCOCAPGDHMB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDA9240)
#define FCOCAPGDHMB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDA94D0)
#define FCOCAPGDHMB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDA9A60)
#define FCOCAPGDHMB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDA9AB0)
#define FCOCAPGDHMB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDA9890)
#define FCOCAPGDHMB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDA9470)
#define FCOCAPGDHMB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDA9640)
#define FCOCAPGDHMB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDA9920)
#define FCOCAPGDHMB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDA91C0)

inline static constexpr unsigned int FCOCAPGDHMB_TypeDefinitionIndex = 13704;

	class FCOCAPGDHMB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FCOCAPGDHMB")->GetStaticField(0xFDA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FCOCAPGDHMB")->GetStaticField(0xFDA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>**)UnitySDK::FromName("", "FCOCAPGDHMB")->GetStaticField(0xFDB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FCOCAPGDHMB")->GetStaticField(0x3350);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FCOCAPGDHMB")->GetStaticField(0x3351);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOCAPGDHMB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FCOCAPGDHMB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCOCAPGDHMB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>(*)())((::PBYTE)hIl2Cpp + FCOCAPGDHMB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitOldLayerConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::GridFightTraitOldLayerConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FCOCAPGDHMB_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCOCAPGDHMB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOCAPGDHMB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOCAPGDHMB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FCOCAPGDHMB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCOCAPGDHMB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FCOCAPGDHMB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitOldLayerConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitOldLayerConfigRow*))((::PBYTE)hIl2Cpp + FCOCAPGDHMB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
