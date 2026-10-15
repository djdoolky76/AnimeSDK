#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitEffectLayerParamConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJIFLLIPNLI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D101F70)
#define LJIFLLIPNLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D102570)
#define LJIFLLIPNLI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1020E0)
#define LJIFLLIPNLI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1019A0)
#define LJIFLLIPNLI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D101C30)
#define LJIFLLIPNLI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D102180)
#define LJIFLLIPNLI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1021D0)
#define LJIFLLIPNLI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D101FB0)
#define LJIFLLIPNLI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D101BD0)
#define LJIFLLIPNLI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D101DA0)
#define LJIFLLIPNLI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D102040)
#define LJIFLLIPNLI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D101920)

inline static constexpr unsigned int LJIFLLIPNLI_TypeDefinitionIndex = 13677;

	class LJIFLLIPNLI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>**)UnitySDK::FromName("", "LJIFLLIPNLI")->GetStaticField(0x3F830);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LJIFLLIPNLI")->GetStaticField(0x3F838);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LJIFLLIPNLI")->GetStaticField(0x3F840);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LJIFLLIPNLI")->GetStaticField(0xD8C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LJIFLLIPNLI")->GetStaticField(0xD8C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJIFLLIPNLI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LJIFLLIPNLI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJIFLLIPNLI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>(*)())((::PBYTE)hIl2Cpp + LJIFLLIPNLI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LJIFLLIPNLI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJIFLLIPNLI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJIFLLIPNLI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJIFLLIPNLI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LJIFLLIPNLI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJIFLLIPNLI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LJIFLLIPNLI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*))((::PBYTE)hIl2Cpp + LJIFLLIPNLI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
