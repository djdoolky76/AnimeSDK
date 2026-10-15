#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class ANPKIMHNJDO;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define GMIGGBBFFLN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE694B0)
#define GMIGGBBFFLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE69A80)
#define GMIGGBBFFLN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE69620)
#define GMIGGBBFFLN_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CE692A0)
#define GMIGGBBFFLN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE68EA0)
#define GMIGGBBFFLN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE69130)
#define GMIGGBBFFLN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE696C0)
#define GMIGGBBFFLN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE69710)
#define GMIGGBBFFLN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE694F0)
#define GMIGGBBFFLN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE690D0)
#define GMIGGBBFFLN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE69320)
#define GMIGGBBFFLN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE69580)
#define GMIGGBBFFLN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE68E20)

	class GMIGGBBFFLN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ANPKIMHNJDO*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ANPKIMHNJDO*>**)UnitySDK::FromName("", "GMIGGBBFFLN")->GetStaticField(0x19D40);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GMIGGBBFFLN")->GetStaticField(0x19D48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GMIGGBBFFLN")->GetStaticField(0x19D50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GMIGGBBFFLN")->GetStaticField(0x5DA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GMIGGBBFFLN")->GetStaticField(0x5DA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIGGBBFFLN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ANPKIMHNJDO*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ANPKIMHNJDO*>*(*)())((::PBYTE)hIl2Cpp + GMIGGBBFFLN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GMIGGBBFFLN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ANPKIMHNJDO*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ANPKIMHNJDO*>(*)())((::PBYTE)hIl2Cpp + GMIGGBBFFLN_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + GMIGGBBFFLN_EHAFELPCLKB_OFFSET))();
		}

		static ::ANPKIMHNJDO* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::ANPKIMHNJDO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GMIGGBBFFLN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GMIGGBBFFLN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIGGBBFFLN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIGGBBFFLN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GMIGGBBFFLN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GMIGGBBFFLN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GMIGGBBFFLN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::ANPKIMHNJDO* a1)
		{
			return ((::System::Void(*)(::ANPKIMHNJDO*))((::PBYTE)hIl2Cpp + GMIGGBBFFLN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
