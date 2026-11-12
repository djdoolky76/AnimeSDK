#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
class JAENDDMAHNP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GIMMNEFOMOC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E02CF30)
#define GIMMNEFOMOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02D500)
#define GIMMNEFOMOC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E02D0A0)
#define GIMMNEFOMOC_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E02CA80)
#define GIMMNEFOMOC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E02C680)
#define GIMMNEFOMOC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E02C910)
#define GIMMNEFOMOC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E02D140)
#define GIMMNEFOMOC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E02D190)
#define GIMMNEFOMOC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E02CF70)
#define GIMMNEFOMOC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E02C8B0)
#define GIMMNEFOMOC_LKIOBOCENNO_OFFSET UNITYSDK_OFFSET(0x1E02CC90)
#define GIMMNEFOMOC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E02CB00)
#define GIMMNEFOMOC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E02D000)
#define GIMMNEFOMOC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E02C600)

inline static constexpr unsigned int GIMMNEFOMOC_TypeDefinitionIndex = 14557;

	class GIMMNEFOMOC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GIMMNEFOMOC")->GetStaticField(0x10320);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GIMMNEFOMOC")->GetStaticField(0x10328);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JAENDDMAHNP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JAENDDMAHNP*>**)UnitySDK::FromName("", "GIMMNEFOMOC")->GetStaticField(0x10330);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GIMMNEFOMOC")->GetStaticField(0x3480);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GIMMNEFOMOC")->GetStaticField(0x3481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMMNEFOMOC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JAENDDMAHNP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JAENDDMAHNP*>*(*)())((::PBYTE)hIl2Cpp + GIMMNEFOMOC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIMMNEFOMOC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JAENDDMAHNP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JAENDDMAHNP*>(*)())((::PBYTE)hIl2Cpp + GIMMNEFOMOC_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JAENDDMAHNP*>, ::JAENDDMAHNP*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JAENDDMAHNP*>, ::JAENDDMAHNP*>(*)())((::PBYTE)hIl2Cpp + GIMMNEFOMOC_EHAFELPCLKB_OFFSET))();
		}

		static ::JAENDDMAHNP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JAENDDMAHNP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GIMMNEFOMOC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::JAENDDMAHNP*>* LKIOBOCENNO(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::JAENDDMAHNP*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GIMMNEFOMOC_LKIOBOCENNO_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIMMNEFOMOC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMMNEFOMOC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMMNEFOMOC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GIMMNEFOMOC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIMMNEFOMOC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GIMMNEFOMOC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JAENDDMAHNP* a1)
		{
			return ((::System::Void(*)(::JAENDDMAHNP*))((::PBYTE)hIl2Cpp + GIMMNEFOMOC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
