#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class PKFMOLIADAK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define MNCDBMPKKHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1D4570)
#define MNCDBMPKKHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1D4B40)
#define MNCDBMPKKHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1D46E0)
#define MNCDBMPKKHO_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D1D4360)
#define MNCDBMPKKHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1D3F60)
#define MNCDBMPKKHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1D41F0)
#define MNCDBMPKKHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1D4780)
#define MNCDBMPKKHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1D47D0)
#define MNCDBMPKKHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1D45B0)
#define MNCDBMPKKHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1D4190)
#define MNCDBMPKKHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1D43E0)
#define MNCDBMPKKHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1D4640)
#define MNCDBMPKKHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1D3EE0)

	class MNCDBMPKKHO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MNCDBMPKKHO")->GetStaticField(0x2A9A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNCDBMPKKHO")->GetStaticField(0x2A9A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKFMOLIADAK*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKFMOLIADAK*>**)UnitySDK::FromName("", "MNCDBMPKKHO")->GetStaticField(0x2A9B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNCDBMPKKHO")->GetStaticField(0x8580);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNCDBMPKKHO")->GetStaticField(0x8581);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCDBMPKKHO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKFMOLIADAK*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKFMOLIADAK*>*(*)())((::PBYTE)hIl2Cpp + MNCDBMPKKHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNCDBMPKKHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PKFMOLIADAK*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PKFMOLIADAK*>(*)())((::PBYTE)hIl2Cpp + MNCDBMPKKHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + MNCDBMPKKHO_EHAFELPCLKB_OFFSET))();
		}

		static ::PKFMOLIADAK* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::PKFMOLIADAK*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MNCDBMPKKHO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNCDBMPKKHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCDBMPKKHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCDBMPKKHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MNCDBMPKKHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNCDBMPKKHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MNCDBMPKKHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::PKFMOLIADAK* a1)
		{
			return ((::System::Void(*)(::PKFMOLIADAK*))((::PBYTE)hIl2Cpp + MNCDBMPKKHO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
