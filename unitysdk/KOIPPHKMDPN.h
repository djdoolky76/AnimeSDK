#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitLayerConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOIPPHKMDPN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C0140)
#define KOIPPHKMDPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0C0D00)
#define KOIPPHKMDPN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0C02B0)
#define KOIPPHKMDPN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0BFBB0)
#define KOIPPHKMDPN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0BFE40)
#define KOIPPHKMDPN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0C0350)
#define KOIPPHKMDPN_JNGNHBFGOOB_OFFSET UNITYSDK_OFFSET(0x1D0C0700)
#define KOIPPHKMDPN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0C03A0)
#define KOIPPHKMDPN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C0180)
#define KOIPPHKMDPN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0BFDE0)
#define KOIPPHKMDPN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0BFF70)
#define KOIPPHKMDPN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0C0210)
#define KOIPPHKMDPN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0BFB30)

inline static constexpr unsigned int KOIPPHKMDPN_TypeDefinitionIndex = 13671;

	class KOIPPHKMDPN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_NLLNMBAKJEK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0x39310);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>**)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0x39318);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0x39320);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0x39328);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0xC3C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0xC3C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOIPPHKMDPN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KOIPPHKMDPN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOIPPHKMDPN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>(*)())((::PBYTE)hIl2Cpp + KOIPPHKMDPN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitLayerConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightTraitLayerConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KOIPPHKMDPN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOIPPHKMDPN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOIPPHKMDPN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOIPPHKMDPN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KOIPPHKMDPN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOIPPHKMDPN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KOIPPHKMDPN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitLayerConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitLayerConfigRow*))((::PBYTE)hIl2Cpp + KOIPPHKMDPN_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* JNGNHBFGOOB(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KOIPPHKMDPN_JNGNHBFGOOB_OFFSET))(a1);
		}

	};
