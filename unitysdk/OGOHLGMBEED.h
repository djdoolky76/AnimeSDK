#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEventSentenceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGOHLGMBEED_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6204E0)
#define OGOHLGMBEED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E620AE0)
#define OGOHLGMBEED_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E620650)
#define OGOHLGMBEED_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E620290)
#define OGOHLGMBEED_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E61FE90)
#define OGOHLGMBEED_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E620120)
#define OGOHLGMBEED_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6206F0)
#define OGOHLGMBEED_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E620740)
#define OGOHLGMBEED_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E620520)
#define OGOHLGMBEED_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6200C0)
#define OGOHLGMBEED_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E620310)
#define OGOHLGMBEED_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6205B0)
#define OGOHLGMBEED_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E61FE10)

inline static constexpr unsigned int OGOHLGMBEED_TypeDefinitionIndex = 11765;

	class OGOHLGMBEED : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OGOHLGMBEED")->GetStaticField(0x56CF0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OGOHLGMBEED")->GetStaticField(0x56CF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>**)UnitySDK::FromName("", "OGOHLGMBEED")->GetStaticField(0x56D00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OGOHLGMBEED")->GetStaticField(0x12830);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OGOHLGMBEED")->GetStaticField(0x12831);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGOHLGMBEED_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>*(*)())((::PBYTE)hIl2Cpp + OGOHLGMBEED_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGOHLGMBEED_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>(*)())((::PBYTE)hIl2Cpp + OGOHLGMBEED_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>, ::RPG::GameCore::IdleLiveEventSentenceRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>, ::RPG::GameCore::IdleLiveEventSentenceRow*>(*)())((::PBYTE)hIl2Cpp + OGOHLGMBEED_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEventSentenceRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::IdleLiveEventSentenceRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OGOHLGMBEED_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGOHLGMBEED_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGOHLGMBEED_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGOHLGMBEED_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OGOHLGMBEED_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGOHLGMBEED_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OGOHLGMBEED_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEventSentenceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEventSentenceRow*))((::PBYTE)hIl2Cpp + OGOHLGMBEED_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
