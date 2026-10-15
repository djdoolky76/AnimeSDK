#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotWikiDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMJMIFKDNHI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCDF6B0)
#define AMJMIFKDNHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE0290)
#define AMJMIFKDNHI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCDFA50)
#define AMJMIFKDNHI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCDF6F0)
#define AMJMIFKDNHI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCDFF90)
#define AMJMIFKDNHI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCDFAF0)
#define AMJMIFKDNHI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCDFB40)
#define AMJMIFKDNHI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCDF920)
#define AMJMIFKDNHI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCDFF30)
#define AMJMIFKDNHI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE0100)
#define AMJMIFKDNHI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCDF9B0)
#define AMJMIFKDNHI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCDFEB0)

inline static constexpr unsigned int AMJMIFKDNHI_TypeDefinitionIndex = 15266;

	class AMJMIFKDNHI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>**)UnitySDK::FromName("", "AMJMIFKDNHI")->GetStaticField(0x3BDA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AMJMIFKDNHI")->GetStaticField(0x3BDA8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AMJMIFKDNHI")->GetStaticField(0x3BDB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AMJMIFKDNHI")->GetStaticField(0xCBE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AMJMIFKDNHI")->GetStaticField(0xCBE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMJMIFKDNHI_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMJMIFKDNHI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMJMIFKDNHI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMJMIFKDNHI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AMJMIFKDNHI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AMJMIFKDNHI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AMJMIFKDNHI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotWikiDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotWikiDataRow*))((::PBYTE)hIl2Cpp + AMJMIFKDNHI_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>*(*)())((::PBYTE)hIl2Cpp + AMJMIFKDNHI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMJMIFKDNHI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotWikiDataRow*>(*)())((::PBYTE)hIl2Cpp + AMJMIFKDNHI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotWikiDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotWikiDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AMJMIFKDNHI_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
