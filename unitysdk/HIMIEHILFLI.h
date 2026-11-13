#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
class KOKDNGLIFND;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIMIEHILFLI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E8222A0)
#define HIMIEHILFLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E822870)
#define HIMIEHILFLI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E822410)
#define HIMIEHILFLI_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1E822090)
#define HIMIEHILFLI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E821C90)
#define HIMIEHILFLI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E821F20)
#define HIMIEHILFLI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E8224B0)
#define HIMIEHILFLI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E822500)
#define HIMIEHILFLI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E8222E0)
#define HIMIEHILFLI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E821EC0)
#define HIMIEHILFLI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E822110)
#define HIMIEHILFLI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E822370)
#define HIMIEHILFLI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E821C10)

inline static constexpr unsigned int HIMIEHILFLI_TypeDefinitionIndex = 15142;

	class HIMIEHILFLI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x17670);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x17678);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*>**)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x17680);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x54B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x54B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMIEHILFLI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*>*(*)())((::PBYTE)hIl2Cpp + HIMIEHILFLI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIMIEHILFLI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*>(*)())((::PBYTE)hIl2Cpp + HIMIEHILFLI_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*>, ::KOKDNGLIFND*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*>, ::KOKDNGLIFND*>(*)())((::PBYTE)hIl2Cpp + HIMIEHILFLI_EHAFELPCLKB_OFFSET))();
		}

		static ::KOKDNGLIFND* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KOKDNGLIFND*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIMIEHILFLI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIMIEHILFLI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMIEHILFLI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMIEHILFLI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HIMIEHILFLI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HIMIEHILFLI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HIMIEHILFLI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KOKDNGLIFND* a1)
		{
			return ((::System::Void(*)(::KOKDNGLIFND*))((::PBYTE)hIl2Cpp + HIMIEHILFLI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
