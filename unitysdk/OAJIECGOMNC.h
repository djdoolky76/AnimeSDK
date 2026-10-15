#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyAreaAssetConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAJIECGOMNC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D24B2D0)
#define OAJIECGOMNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D24B8A0)
#define OAJIECGOMNC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D24B440)
#define OAJIECGOMNC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D24AD40)
#define OAJIECGOMNC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D24AFD0)
#define OAJIECGOMNC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D24B4E0)
#define OAJIECGOMNC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D24B530)
#define OAJIECGOMNC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D24B310)
#define OAJIECGOMNC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D24AF70)
#define OAJIECGOMNC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D24B140)
#define OAJIECGOMNC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D24B3A0)
#define OAJIECGOMNC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D24ACC0)

inline static constexpr unsigned int OAJIECGOMNC_TypeDefinitionIndex = 12046;

	class OAJIECGOMNC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAreaAssetConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAreaAssetConfigRow*>**)UnitySDK::FromName("", "OAJIECGOMNC")->GetStaticField(0x31AB0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OAJIECGOMNC")->GetStaticField(0x31AB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OAJIECGOMNC")->GetStaticField(0x31AC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OAJIECGOMNC")->GetStaticField(0xA750);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OAJIECGOMNC")->GetStaticField(0xA751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAJIECGOMNC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAreaAssetConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAreaAssetConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OAJIECGOMNC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAJIECGOMNC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAreaAssetConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAreaAssetConfigRow*>(*)())((::PBYTE)hIl2Cpp + OAJIECGOMNC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyAreaAssetConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyAreaAssetConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OAJIECGOMNC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAJIECGOMNC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAJIECGOMNC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAJIECGOMNC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OAJIECGOMNC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAJIECGOMNC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OAJIECGOMNC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyAreaAssetConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyAreaAssetConfigRow*))((::PBYTE)hIl2Cpp + OAJIECGOMNC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
