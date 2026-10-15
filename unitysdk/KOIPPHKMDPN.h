#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitLayerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOIPPHKMDPN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D092270)
#define KOIPPHKMDPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D092E30)
#define KOIPPHKMDPN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0923E0)
#define KOIPPHKMDPN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D091CE0)
#define KOIPPHKMDPN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D091F70)
#define KOIPPHKMDPN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D092480)
#define KOIPPHKMDPN_JNGNHBFGOOB_OFFSET UNITYSDK_OFFSET(0x1D092830)
#define KOIPPHKMDPN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0924D0)
#define KOIPPHKMDPN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0922B0)
#define KOIPPHKMDPN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D091F10)
#define KOIPPHKMDPN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0920A0)
#define KOIPPHKMDPN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D092340)
#define KOIPPHKMDPN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D091C60)

inline static constexpr unsigned int KOIPPHKMDPN_TypeDefinitionIndex = 13671;

	class KOIPPHKMDPN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>**)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0x37190);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_NLLNMBAKJEK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0x37198);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0x371A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0x371A8);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0xB200);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KOIPPHKMDPN")->GetStaticField(0xB201);
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
