#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class KLFHMLJJKLF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define BAAEKHKPAFA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCEFBB0)
#define BAAEKHKPAFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF0130)
#define BAAEKHKPAFA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCEFD20)
#define BAAEKHKPAFA_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CCEF9C0)
#define BAAEKHKPAFA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCEF600)
#define BAAEKHKPAFA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCEF890)
#define BAAEKHKPAFA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCEFDC0)
#define BAAEKHKPAFA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCEFE10)
#define BAAEKHKPAFA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCEFBF0)
#define BAAEKHKPAFA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCEF830)
#define BAAEKHKPAFA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCEFA20)
#define BAAEKHKPAFA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCEFC80)
#define BAAEKHKPAFA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCEF580)

inline static constexpr unsigned int BAAEKHKPAFA_TypeDefinitionIndex = 11558;

	class BAAEKHKPAFA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KLFHMLJJKLF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KLFHMLJJKLF*>**)UnitySDK::FromName("", "BAAEKHKPAFA")->GetStaticField(0x3CB50);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BAAEKHKPAFA")->GetStaticField(0x3CB58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BAAEKHKPAFA")->GetStaticField(0x3CB60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BAAEKHKPAFA")->GetStaticField(0xD030);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BAAEKHKPAFA")->GetStaticField(0xD031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAAEKHKPAFA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KLFHMLJJKLF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KLFHMLJJKLF*>*(*)())((::PBYTE)hIl2Cpp + BAAEKHKPAFA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BAAEKHKPAFA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KLFHMLJJKLF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KLFHMLJJKLF*>(*)())((::PBYTE)hIl2Cpp + BAAEKHKPAFA_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + BAAEKHKPAFA_EHAFELPCLKB_OFFSET))();
		}

		static ::KLFHMLJJKLF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KLFHMLJJKLF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BAAEKHKPAFA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BAAEKHKPAFA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAAEKHKPAFA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAAEKHKPAFA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BAAEKHKPAFA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BAAEKHKPAFA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BAAEKHKPAFA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KLFHMLJJKLF* a1)
		{
			return ((::System::Void(*)(::KLFHMLJJKLF*))((::PBYTE)hIl2Cpp + BAAEKHKPAFA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
