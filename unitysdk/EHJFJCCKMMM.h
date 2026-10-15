#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
class FCOEMCEDLNL;
class PKHEJCHNMGI;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHJFJCCKMMM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD54410)
#define EHJFJCCKMMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD549E0)
#define EHJFJCCKMMM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD54580)
#define EHJFJCCKMMM_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CD54200)
#define EHJFJCCKMMM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD53E00)
#define EHJFJCCKMMM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD54090)
#define EHJFJCCKMMM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD54620)
#define EHJFJCCKMMM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD54670)
#define EHJFJCCKMMM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD54450)
#define EHJFJCCKMMM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD54030)
#define EHJFJCCKMMM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD54280)
#define EHJFJCCKMMM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD544E0)
#define EHJFJCCKMMM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD53D80)

inline static constexpr unsigned int EHJFJCCKMMM_TypeDefinitionIndex = 11577;

	class EHJFJCCKMMM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x4D770);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*>**)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x4D778);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x4D780);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x11B50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x11B51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHJFJCCKMMM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*>*(*)())((::PBYTE)hIl2Cpp + EHJFJCCKMMM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHJFJCCKMMM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*>(*)())((::PBYTE)hIl2Cpp + EHJFJCCKMMM_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*>, ::PKHEJCHNMGI*> EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*>, ::PKHEJCHNMGI*>(*)())((::PBYTE)hIl2Cpp + EHJFJCCKMMM_EHAFELPCLKB_OFFSET))();
		}

		static ::PKHEJCHNMGI* LMBKNCAIDLC(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::PKHEJCHNMGI*(*)(::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + EHJFJCCKMMM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHJFJCCKMMM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHJFJCCKMMM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHJFJCCKMMM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EHJFJCCKMMM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EHJFJCCKMMM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EHJFJCCKMMM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::PKHEJCHNMGI* a1)
		{
			return ((::System::Void(*)(::PKHEJCHNMGI*))((::PBYTE)hIl2Cpp + EHJFJCCKMMM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
