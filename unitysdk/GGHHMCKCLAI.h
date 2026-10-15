#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenTraitRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGHHMCKCLAI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE40870)
#define GGHHMCKCLAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE40E40)
#define GGHHMCKCLAI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE409E0)
#define GGHHMCKCLAI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE402E0)
#define GGHHMCKCLAI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE40570)
#define GGHHMCKCLAI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE40A80)
#define GGHHMCKCLAI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE40AD0)
#define GGHHMCKCLAI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE408B0)
#define GGHHMCKCLAI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE40510)
#define GGHHMCKCLAI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE406E0)
#define GGHHMCKCLAI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE40940)
#define GGHHMCKCLAI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE40260)

inline static constexpr unsigned int GGHHMCKCLAI_TypeDefinitionIndex = 11668;

	class GGHHMCKCLAI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTraitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTraitRow*>**)UnitySDK::FromName("", "GGHHMCKCLAI")->GetStaticField(0x17430);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GGHHMCKCLAI")->GetStaticField(0x17438);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GGHHMCKCLAI")->GetStaticField(0x17440);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GGHHMCKCLAI")->GetStaticField(0x5750);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GGHHMCKCLAI")->GetStaticField(0x5751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHHMCKCLAI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTraitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTraitRow*>*(*)())((::PBYTE)hIl2Cpp + GGHHMCKCLAI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGHHMCKCLAI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTraitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenTraitRow*>(*)())((::PBYTE)hIl2Cpp + GGHHMCKCLAI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenTraitRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHipplenTraitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GGHHMCKCLAI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGHHMCKCLAI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHHMCKCLAI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHHMCKCLAI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GGHHMCKCLAI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGHHMCKCLAI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GGHHMCKCLAI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenTraitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenTraitRow*))((::PBYTE)hIl2Cpp + GGHHMCKCLAI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
