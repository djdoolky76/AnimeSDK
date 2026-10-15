#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class KKFMLPEPGKM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define LABKJFKNLNH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D0000)
#define LABKJFKNLNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D0580)
#define LABKJFKNLNH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D0170)
#define LABKJFKNLNH_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D0CFE10)
#define LABKJFKNLNH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0CFA50)
#define LABKJFKNLNH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0CFCE0)
#define LABKJFKNLNH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D0210)
#define LABKJFKNLNH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D0260)
#define LABKJFKNLNH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D0040)
#define LABKJFKNLNH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0CFC80)
#define LABKJFKNLNH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0CFE70)
#define LABKJFKNLNH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D00D0)
#define LABKJFKNLNH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0CF9D0)

inline static constexpr unsigned int LABKJFKNLNH_TypeDefinitionIndex = 11556;

	class LABKJFKNLNH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LABKJFKNLNH")->GetStaticField(0x3A850);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KKFMLPEPGKM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KKFMLPEPGKM*>**)UnitySDK::FromName("", "LABKJFKNLNH")->GetStaticField(0x3A858);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LABKJFKNLNH")->GetStaticField(0x3A860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LABKJFKNLNH")->GetStaticField(0xC780);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LABKJFKNLNH")->GetStaticField(0xC781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LABKJFKNLNH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KKFMLPEPGKM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KKFMLPEPGKM*>*(*)())((::PBYTE)hIl2Cpp + LABKJFKNLNH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LABKJFKNLNH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KKFMLPEPGKM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KKFMLPEPGKM*>(*)())((::PBYTE)hIl2Cpp + LABKJFKNLNH_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + LABKJFKNLNH_EHAFELPCLKB_OFFSET))();
		}

		static ::KKFMLPEPGKM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KKFMLPEPGKM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LABKJFKNLNH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LABKJFKNLNH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LABKJFKNLNH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LABKJFKNLNH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LABKJFKNLNH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LABKJFKNLNH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LABKJFKNLNH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KKFMLPEPGKM* a1)
		{
			return ((::System::Void(*)(::KKFMLPEPGKM*))((::PBYTE)hIl2Cpp + LABKJFKNLNH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
