#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class DMJOFOOPKJP;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define JMDKIGJJEAI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D049920)
#define JMDKIGJJEAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D049EA0)
#define JMDKIGJJEAI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D049A90)
#define JMDKIGJJEAI_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D049750)
#define JMDKIGJJEAI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D049350)
#define JMDKIGJJEAI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0495E0)
#define JMDKIGJJEAI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D049B30)
#define JMDKIGJJEAI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D049B80)
#define JMDKIGJJEAI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D049960)
#define JMDKIGJJEAI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D049580)
#define JMDKIGJJEAI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0497D0)
#define JMDKIGJJEAI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0499F0)
#define JMDKIGJJEAI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0492D0)

	class JMDKIGJJEAI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMJOFOOPKJP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMJOFOOPKJP*>**)UnitySDK::FromName("", "JMDKIGJJEAI")->GetStaticField(0x2F7B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JMDKIGJJEAI")->GetStaticField(0x2F7B8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JMDKIGJJEAI")->GetStaticField(0x2F7C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JMDKIGJJEAI")->GetStaticField(0xA080);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JMDKIGJJEAI")->GetStaticField(0xA081);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMDKIGJJEAI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMJOFOOPKJP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMJOFOOPKJP*>*(*)())((::PBYTE)hIl2Cpp + JMDKIGJJEAI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMDKIGJJEAI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DMJOFOOPKJP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DMJOFOOPKJP*>(*)())((::PBYTE)hIl2Cpp + JMDKIGJJEAI_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + JMDKIGJJEAI_EHAFELPCLKB_OFFSET))();
		}

		static ::DMJOFOOPKJP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::DMJOFOOPKJP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JMDKIGJJEAI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMDKIGJJEAI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMDKIGJJEAI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMDKIGJJEAI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JMDKIGJJEAI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JMDKIGJJEAI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JMDKIGJJEAI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DMJOFOOPKJP* a1)
		{
			return ((::System::Void(*)(::DMJOFOOPKJP*))((::PBYTE)hIl2Cpp + JMDKIGJJEAI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
