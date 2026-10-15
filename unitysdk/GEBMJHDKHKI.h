#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEBMJHDKHKI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE33860)
#define GEBMJHDKHKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE33DE0)
#define GEBMJHDKHKI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE339D0)
#define GEBMJHDKHKI_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CE33690)
#define GEBMJHDKHKI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE33290)
#define GEBMJHDKHKI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE33520)
#define GEBMJHDKHKI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE33A70)
#define GEBMJHDKHKI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE33AC0)
#define GEBMJHDKHKI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE338A0)
#define GEBMJHDKHKI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE334C0)
#define GEBMJHDKHKI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE33710)
#define GEBMJHDKHKI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE33930)
#define GEBMJHDKHKI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE33210)

inline static constexpr unsigned int GEBMJHDKHKI_TypeDefinitionIndex = 11216;

	class GEBMJHDKHKI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>**)UnitySDK::FromName("", "GEBMJHDKHKI")->GetStaticField(0x16D70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GEBMJHDKHKI")->GetStaticField(0x16D78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GEBMJHDKHKI")->GetStaticField(0x16D80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GEBMJHDKHKI")->GetStaticField(0x5600);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GEBMJHDKHKI")->GetStaticField(0x5601);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEBMJHDKHKI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>*(*)())((::PBYTE)hIl2Cpp + GEBMJHDKHKI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GEBMJHDKHKI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>(*)())((::PBYTE)hIl2Cpp + GEBMJHDKHKI_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>, ::RPG::GameCore::ActivityTagRow*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>, ::RPG::GameCore::ActivityTagRow*>(*)())((::PBYTE)hIl2Cpp + GEBMJHDKHKI_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::ActivityTagRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GEBMJHDKHKI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GEBMJHDKHKI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEBMJHDKHKI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEBMJHDKHKI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GEBMJHDKHKI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEBMJHDKHKI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GEBMJHDKHKI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityTagRow*))((::PBYTE)hIl2Cpp + GEBMJHDKHKI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
