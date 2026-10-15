#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class PKHEJCHNMGI;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define EHJFJCCKMMM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD82450)
#define EHJFJCCKMMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD82A20)
#define EHJFJCCKMMM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD825C0)
#define EHJFJCCKMMM_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CD82240)
#define EHJFJCCKMMM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD81E40)
#define EHJFJCCKMMM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD820D0)
#define EHJFJCCKMMM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD82660)
#define EHJFJCCKMMM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD826B0)
#define EHJFJCCKMMM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD82490)
#define EHJFJCCKMMM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD82070)
#define EHJFJCCKMMM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD822C0)
#define EHJFJCCKMMM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD82520)
#define EHJFJCCKMMM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD81DC0)

inline static constexpr unsigned int EHJFJCCKMMM_TypeDefinitionIndex = 11577;

	class EHJFJCCKMMM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x53F30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKHEJCHNMGI*>**)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x53F38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x53F40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x12A20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EHJFJCCKMMM")->GetStaticField(0x12A21);
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

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + EHJFJCCKMMM_EHAFELPCLKB_OFFSET))();
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
