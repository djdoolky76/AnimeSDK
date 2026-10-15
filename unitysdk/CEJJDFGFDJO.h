#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournTitanBlessRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define CEJJDFGFDJO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA14C10)
#define CEJJDFGFDJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA151E0)
#define CEJJDFGFDJO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA14D80)
#define CEJJDFGFDJO_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1DA14A00)
#define CEJJDFGFDJO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA14600)
#define CEJJDFGFDJO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA14890)
#define CEJJDFGFDJO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA14E20)
#define CEJJDFGFDJO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA14E70)
#define CEJJDFGFDJO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA14C50)
#define CEJJDFGFDJO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA14830)
#define CEJJDFGFDJO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA14A80)
#define CEJJDFGFDJO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA14CE0)
#define CEJJDFGFDJO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA14580)

inline static constexpr unsigned int CEJJDFGFDJO_TypeDefinitionIndex = 15070;

	class CEJJDFGFDJO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>**)UnitySDK::FromName("", "CEJJDFGFDJO")->GetStaticField(0x3C1C0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CEJJDFGFDJO")->GetStaticField(0x3C1C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CEJJDFGFDJO")->GetStaticField(0x3C1D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CEJJDFGFDJO")->GetStaticField(0xCD80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CEJJDFGFDJO")->GetStaticField(0xCD81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEJJDFGFDJO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>*(*)())((::PBYTE)hIl2Cpp + CEJJDFGFDJO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CEJJDFGFDJO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>(*)())((::PBYTE)hIl2Cpp + CEJJDFGFDJO_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + CEJJDFGFDJO_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournTitanBlessRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournTitanBlessRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CEJJDFGFDJO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CEJJDFGFDJO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEJJDFGFDJO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEJJDFGFDJO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CEJJDFGFDJO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CEJJDFGFDJO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CEJJDFGFDJO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournTitanBlessRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournTitanBlessRow*))((::PBYTE)hIl2Cpp + CEJJDFGFDJO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
