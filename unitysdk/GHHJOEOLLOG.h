#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class KCALGNOKBJH;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define GHHJOEOLLOG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE470C0)
#define GHHJOEOLLOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE47640)
#define GHHJOEOLLOG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE47230)
#define GHHJOEOLLOG_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CE46EF0)
#define GHHJOEOLLOG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE46AF0)
#define GHHJOEOLLOG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE46D80)
#define GHHJOEOLLOG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE472D0)
#define GHHJOEOLLOG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE47320)
#define GHHJOEOLLOG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE47100)
#define GHHJOEOLLOG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE46D20)
#define GHHJOEOLLOG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE46F70)
#define GHHJOEOLLOG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE47190)
#define GHHJOEOLLOG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE46A70)

	class GHHJOEOLLOG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCALGNOKBJH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCALGNOKBJH*>**)UnitySDK::FromName("", "GHHJOEOLLOG")->GetStaticField(0x17790);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GHHJOEOLLOG")->GetStaticField(0x17798);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GHHJOEOLLOG")->GetStaticField(0x177A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GHHJOEOLLOG")->GetStaticField(0x57E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GHHJOEOLLOG")->GetStaticField(0x57E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHHJOEOLLOG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCALGNOKBJH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCALGNOKBJH*>*(*)())((::PBYTE)hIl2Cpp + GHHJOEOLLOG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHHJOEOLLOG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KCALGNOKBJH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KCALGNOKBJH*>(*)())((::PBYTE)hIl2Cpp + GHHJOEOLLOG_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + GHHJOEOLLOG_EHAFELPCLKB_OFFSET))();
		}

		static ::KCALGNOKBJH* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KCALGNOKBJH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GHHJOEOLLOG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHHJOEOLLOG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHHJOEOLLOG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHHJOEOLLOG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GHHJOEOLLOG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHHJOEOLLOG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GHHJOEOLLOG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KCALGNOKBJH* a1)
		{
			return ((::System::Void(*)(::KCALGNOKBJH*))((::PBYTE)hIl2Cpp + GHHJOEOLLOG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
