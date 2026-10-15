#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKCLJPFIDJM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC1E4A0)
#define CKCLJPFIDJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC1EA20)
#define CKCLJPFIDJM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC1E610)
#define CKCLJPFIDJM_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1DC1E2B0)
#define CKCLJPFIDJM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC1DEF0)
#define CKCLJPFIDJM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC1E180)
#define CKCLJPFIDJM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC1E6B0)
#define CKCLJPFIDJM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC1E700)
#define CKCLJPFIDJM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC1E4E0)
#define CKCLJPFIDJM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC1E120)
#define CKCLJPFIDJM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC1E310)
#define CKCLJPFIDJM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC1E570)
#define CKCLJPFIDJM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC1DE70)

inline static constexpr unsigned int CKCLJPFIDJM_TypeDefinitionIndex = 14704;

	class CKCLJPFIDJM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CKCLJPFIDJM")->GetStaticField(0x43240);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>**)UnitySDK::FromName("", "CKCLJPFIDJM")->GetStaticField(0x43248);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CKCLJPFIDJM")->GetStaticField(0x43250);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CKCLJPFIDJM")->GetStaticField(0x102C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CKCLJPFIDJM")->GetStaticField(0x102C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKCLJPFIDJM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CKCLJPFIDJM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CKCLJPFIDJM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CKCLJPFIDJM_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>, ::RPG::GameCore::RogueActivityResidentConfigRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>, ::RPG::GameCore::RogueActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CKCLJPFIDJM_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueActivityResidentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueActivityResidentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CKCLJPFIDJM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CKCLJPFIDJM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKCLJPFIDJM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKCLJPFIDJM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CKCLJPFIDJM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKCLJPFIDJM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CKCLJPFIDJM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueActivityResidentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueActivityResidentConfigRow*))((::PBYTE)hIl2Cpp + CKCLJPFIDJM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
