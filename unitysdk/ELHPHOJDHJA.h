#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCSeriesRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELHPHOJDHJA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD9CE70)
#define ELHPHOJDHJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD9D440)
#define ELHPHOJDHJA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD9CFE0)
#define ELHPHOJDHJA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD9C8E0)
#define ELHPHOJDHJA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD9CB70)
#define ELHPHOJDHJA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD9D080)
#define ELHPHOJDHJA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD9D0D0)
#define ELHPHOJDHJA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD9CEB0)
#define ELHPHOJDHJA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD9CB10)
#define ELHPHOJDHJA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD9CCE0)
#define ELHPHOJDHJA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD9CF40)
#define ELHPHOJDHJA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD9C860)

inline static constexpr unsigned int ELHPHOJDHJA_TypeDefinitionIndex = 14283;

	class ELHPHOJDHJA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ELHPHOJDHJA")->GetStaticField(0x3090);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>**)UnitySDK::FromName("", "ELHPHOJDHJA")->GetStaticField(0x3098);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ELHPHOJDHJA")->GetStaticField(0x30A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ELHPHOJDHJA")->GetStaticField(0x2390);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ELHPHOJDHJA")->GetStaticField(0x2391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELHPHOJDHJA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>*(*)())((::PBYTE)hIl2Cpp + ELHPHOJDHJA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELHPHOJDHJA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>(*)())((::PBYTE)hIl2Cpp + ELHPHOJDHJA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::NPCSeriesRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::NPCSeriesRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ELHPHOJDHJA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELHPHOJDHJA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELHPHOJDHJA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELHPHOJDHJA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ELHPHOJDHJA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELHPHOJDHJA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ELHPHOJDHJA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::NPCSeriesRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::NPCSeriesRow*))((::PBYTE)hIl2Cpp + ELHPHOJDHJA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
