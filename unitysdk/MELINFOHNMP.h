#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class JJFDJLHPJCD;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define MELINFOHNMP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D153B30)
#define MELINFOHNMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D154100)
#define MELINFOHNMP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D153CA0)
#define MELINFOHNMP_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D153920)
#define MELINFOHNMP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D153520)
#define MELINFOHNMP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1537B0)
#define MELINFOHNMP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D153D40)
#define MELINFOHNMP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D153D90)
#define MELINFOHNMP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D153B70)
#define MELINFOHNMP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D153750)
#define MELINFOHNMP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1539A0)
#define MELINFOHNMP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D153C00)
#define MELINFOHNMP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1534A0)

	class MELINFOHNMP : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MELINFOHNMP")->GetStaticField(0x49AC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MELINFOHNMP")->GetStaticField(0x49AC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JJFDJLHPJCD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JJFDJLHPJCD*>**)UnitySDK::FromName("", "MELINFOHNMP")->GetStaticField(0x49AD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MELINFOHNMP")->GetStaticField(0x11440);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MELINFOHNMP")->GetStaticField(0x11441);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELINFOHNMP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JJFDJLHPJCD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JJFDJLHPJCD*>*(*)())((::PBYTE)hIl2Cpp + MELINFOHNMP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MELINFOHNMP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JJFDJLHPJCD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JJFDJLHPJCD*>(*)())((::PBYTE)hIl2Cpp + MELINFOHNMP_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + MELINFOHNMP_EHAFELPCLKB_OFFSET))();
		}

		static ::JJFDJLHPJCD* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JJFDJLHPJCD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MELINFOHNMP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MELINFOHNMP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELINFOHNMP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELINFOHNMP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MELINFOHNMP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MELINFOHNMP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MELINFOHNMP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JJFDJLHPJCD* a1)
		{
			return ((::System::Void(*)(::JJFDJLHPJCD*))((::PBYTE)hIl2Cpp + MELINFOHNMP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
