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

#define HIMIEHILFLI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEB0A80)
#define HIMIEHILFLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB1050)
#define HIMIEHILFLI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEB0BF0)
#define HIMIEHILFLI_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CEB0870)
#define HIMIEHILFLI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEB0470)
#define HIMIEHILFLI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEB0700)
#define HIMIEHILFLI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEB0C90)
#define HIMIEHILFLI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEB0CE0)
#define HIMIEHILFLI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEB0AC0)
#define HIMIEHILFLI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEB06A0)
#define HIMIEHILFLI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEB08F0)
#define HIMIEHILFLI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEB0B50)
#define HIMIEHILFLI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEB03F0)

inline static constexpr unsigned int HIMIEHILFLI_TypeDefinitionIndex = 14986;

	class HIMIEHILFLI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KOKDNGLIFND*>**)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x1E1E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x1E1E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x1E1F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x6D50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HIMIEHILFLI")->GetStaticField(0x6D51);
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
