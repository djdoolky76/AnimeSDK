#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotMailSentenceDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GICDJLLOAIG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE1F130)
#define GICDJLLOAIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE1FD10)
#define GICDJLLOAIG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE1F4D0)
#define GICDJLLOAIG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE1F170)
#define GICDJLLOAIG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE1FA10)
#define GICDJLLOAIG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE1F570)
#define GICDJLLOAIG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE1F5C0)
#define GICDJLLOAIG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE1F3A0)
#define GICDJLLOAIG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE1F9B0)
#define GICDJLLOAIG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE1FB80)
#define GICDJLLOAIG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE1F430)
#define GICDJLLOAIG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE1F930)

inline static constexpr unsigned int GICDJLLOAIG_TypeDefinitionIndex = 15271;

	class GICDJLLOAIG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GICDJLLOAIG")->GetStaticField(0x159E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GICDJLLOAIG")->GetStaticField(0x159E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailSentenceDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailSentenceDataRow*>**)UnitySDK::FromName("", "GICDJLLOAIG")->GetStaticField(0x159F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GICDJLLOAIG")->GetStaticField(0x49D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GICDJLLOAIG")->GetStaticField(0x49D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GICDJLLOAIG_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GICDJLLOAIG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GICDJLLOAIG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GICDJLLOAIG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GICDJLLOAIG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GICDJLLOAIG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GICDJLLOAIG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotMailSentenceDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotMailSentenceDataRow*))((::PBYTE)hIl2Cpp + GICDJLLOAIG_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailSentenceDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailSentenceDataRow*>*(*)())((::PBYTE)hIl2Cpp + GICDJLLOAIG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GICDJLLOAIG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailSentenceDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailSentenceDataRow*>(*)())((::PBYTE)hIl2Cpp + GICDJLLOAIG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotMailSentenceDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotMailSentenceDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GICDJLLOAIG_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
