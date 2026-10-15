#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotWikiSubdataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBAEDIAACOE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1EB8A0)
#define NBAEDIAACOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1EC480)
#define NBAEDIAACOE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1EBC40)
#define NBAEDIAACOE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1EB8E0)
#define NBAEDIAACOE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1EC180)
#define NBAEDIAACOE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1EBCE0)
#define NBAEDIAACOE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1EBD30)
#define NBAEDIAACOE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1EBB10)
#define NBAEDIAACOE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1EC120)
#define NBAEDIAACOE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1EC2F0)
#define NBAEDIAACOE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1EBBA0)
#define NBAEDIAACOE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1EC0A0)

	class NBAEDIAACOE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBAEDIAACOE")->GetStaticField(0x2C6F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiSubdataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiSubdataRow*>**)UnitySDK::FromName("", "NBAEDIAACOE")->GetStaticField(0x2C6F8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NBAEDIAACOE")->GetStaticField(0x2C700);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NBAEDIAACOE")->GetStaticField(0x8C10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NBAEDIAACOE")->GetStaticField(0x8C11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBAEDIAACOE_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBAEDIAACOE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBAEDIAACOE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBAEDIAACOE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NBAEDIAACOE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBAEDIAACOE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NBAEDIAACOE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotWikiSubdataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotWikiSubdataRow*))((::PBYTE)hIl2Cpp + NBAEDIAACOE_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiSubdataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiSubdataRow*>*(*)())((::PBYTE)hIl2Cpp + NBAEDIAACOE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBAEDIAACOE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiSubdataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiSubdataRow*>(*)())((::PBYTE)hIl2Cpp + NBAEDIAACOE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotWikiSubdataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotWikiSubdataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NBAEDIAACOE_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
