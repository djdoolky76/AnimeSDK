#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NDGCAKCCGIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1CBAD0)
#define NDGCAKCCGIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1CC050)
#define NDGCAKCCGIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1CBC40)
#define NDGCAKCCGIE_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D1CB660)
#define NDGCAKCCGIE_ENCPFJNBFCF_OFFSET UNITYSDK_OFFSET(0x1D1CB830)
#define NDGCAKCCGIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1CB260)
#define NDGCAKCCGIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1CB4F0)
#define NDGCAKCCGIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1CBCE0)
#define NDGCAKCCGIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1CBD30)
#define NDGCAKCCGIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1CBB10)
#define NDGCAKCCGIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1CB490)
#define NDGCAKCCGIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1CB6E0)
#define NDGCAKCCGIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1CBBA0)
#define NDGCAKCCGIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1CB1E0)

inline static constexpr unsigned int NDGCAKCCGIE_TypeDefinitionIndex = 13666;

	class NDGCAKCCGIE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>**)UnitySDK::FromName("", "NDGCAKCCGIE")->GetStaticField(0x3F0F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NDGCAKCCGIE")->GetStaticField(0x3F0F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NDGCAKCCGIE")->GetStaticField(0x3F100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NDGCAKCCGIE")->GetStaticField(0xEDB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NDGCAKCCGIE")->GetStaticField(0xEDB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDGCAKCCGIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NDGCAKCCGIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDGCAKCCGIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>(*)())((::PBYTE)hIl2Cpp + NDGCAKCCGIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>, ::RPG::GameCore::GridFightTraitBaseConfigRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBaseConfigRow*>, ::RPG::GameCore::GridFightTraitBaseConfigRow*>(*)())((::PBYTE)hIl2Cpp + NDGCAKCCGIE_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitBaseConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitBaseConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NDGCAKCCGIE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightTraitBaseConfigRow*>* ENCPFJNBFCF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightTraitBaseConfigRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NDGCAKCCGIE_ENCPFJNBFCF_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDGCAKCCGIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDGCAKCCGIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDGCAKCCGIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NDGCAKCCGIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NDGCAKCCGIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NDGCAKCCGIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + NDGCAKCCGIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
