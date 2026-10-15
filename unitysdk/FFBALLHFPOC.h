#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournContentCollectionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define FFBALLHFPOC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDE3E10)
#define FFBALLHFPOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE4390)
#define FFBALLHFPOC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDE3F80)
#define FFBALLHFPOC_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CDE3C60)
#define FFBALLHFPOC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDE38A0)
#define FFBALLHFPOC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDE3B30)
#define FFBALLHFPOC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDE4020)
#define FFBALLHFPOC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDE4070)
#define FFBALLHFPOC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDE3E50)
#define FFBALLHFPOC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDE3AD0)
#define FFBALLHFPOC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDE3CC0)
#define FFBALLHFPOC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDE3EE0)
#define FFBALLHFPOC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDE3820)

inline static constexpr unsigned int FFBALLHFPOC_TypeDefinitionIndex = 15034;

	class FFBALLHFPOC : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FFBALLHFPOC")->GetStaticField(0x10FF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FFBALLHFPOC")->GetStaticField(0x10FF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>**)UnitySDK::FromName("", "FFBALLHFPOC")->GetStaticField(0x11000);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FFBALLHFPOC")->GetStaticField(0x3930);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FFBALLHFPOC")->GetStaticField(0x3931);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFBALLHFPOC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>*(*)())((::PBYTE)hIl2Cpp + FFBALLHFPOC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFBALLHFPOC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentCollectionRow*>(*)())((::PBYTE)hIl2Cpp + FFBALLHFPOC_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + FFBALLHFPOC_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournContentCollectionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournContentCollectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FFBALLHFPOC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFBALLHFPOC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFBALLHFPOC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFBALLHFPOC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FFBALLHFPOC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FFBALLHFPOC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FFBALLHFPOC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournContentCollectionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournContentCollectionRow*))((::PBYTE)hIl2Cpp + FFBALLHFPOC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
