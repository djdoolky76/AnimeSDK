#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveNodeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBBNNMHFFJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1ECE10)
#define NBBNNMHFFJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1ED410)
#define NBBNNMHFFJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1ECF80)
#define NBBNNMHFFJF_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D1ECBC0)
#define NBBNNMHFFJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1EC7C0)
#define NBBNNMHFFJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1ECA50)
#define NBBNNMHFFJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1ED020)
#define NBBNNMHFFJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1ED070)
#define NBBNNMHFFJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1ECE50)
#define NBBNNMHFFJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1EC9F0)
#define NBBNNMHFFJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1ECC40)
#define NBBNNMHFFJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1ECEE0)
#define NBBNNMHFFJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1EC740)

inline static constexpr unsigned int NBBNNMHFFJF_TypeDefinitionIndex = 11696;

	class NBBNNMHFFJF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NBBNNMHFFJF")->GetStaticField(0x2C790);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBBNNMHFFJF")->GetStaticField(0x2C798);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>**)UnitySDK::FromName("", "NBBNNMHFFJF")->GetStaticField(0x2C7A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NBBNNMHFFJF")->GetStaticField(0x8C30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NBBNNMHFFJF")->GetStaticField(0x8C31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBBNNMHFFJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>*(*)())((::PBYTE)hIl2Cpp + NBBNNMHFFJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBBNNMHFFJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>(*)())((::PBYTE)hIl2Cpp + NBBNNMHFFJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>, ::RPG::GameCore::IdleLiveNodeRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>, ::RPG::GameCore::IdleLiveNodeRow*>(*)())((::PBYTE)hIl2Cpp + NBBNNMHFFJF_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveNodeRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::IdleLiveNodeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NBBNNMHFFJF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBBNNMHFFJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBBNNMHFFJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBBNNMHFFJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NBBNNMHFFJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBBNNMHFFJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NBBNNMHFFJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveNodeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveNodeRow*))((::PBYTE)hIl2Cpp + NBBNNMHFFJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
