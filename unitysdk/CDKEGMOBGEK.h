#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class CMDKPJLGEOB;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define CDKEGMOBGEK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA110F0)
#define CDKEGMOBGEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA116C0)
#define CDKEGMOBGEK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA11260)
#define CDKEGMOBGEK_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1DA10EE0)
#define CDKEGMOBGEK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA10AE0)
#define CDKEGMOBGEK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA10D70)
#define CDKEGMOBGEK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA11300)
#define CDKEGMOBGEK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA11350)
#define CDKEGMOBGEK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA11130)
#define CDKEGMOBGEK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA10D10)
#define CDKEGMOBGEK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA10F60)
#define CDKEGMOBGEK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA111C0)
#define CDKEGMOBGEK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA10A60)

inline static constexpr unsigned int CDKEGMOBGEK_TypeDefinitionIndex = 11579;

	class CDKEGMOBGEK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CDKEGMOBGEK")->GetStaticField(0x3BEE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CMDKPJLGEOB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CMDKPJLGEOB*>**)UnitySDK::FromName("", "CDKEGMOBGEK")->GetStaticField(0x3BEE8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CDKEGMOBGEK")->GetStaticField(0x3BEF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CDKEGMOBGEK")->GetStaticField(0xCC10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CDKEGMOBGEK")->GetStaticField(0xCC11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDKEGMOBGEK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CMDKPJLGEOB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CMDKPJLGEOB*>*(*)())((::PBYTE)hIl2Cpp + CDKEGMOBGEK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDKEGMOBGEK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CMDKPJLGEOB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CMDKPJLGEOB*>(*)())((::PBYTE)hIl2Cpp + CDKEGMOBGEK_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + CDKEGMOBGEK_EHAFELPCLKB_OFFSET))();
		}

		static ::CMDKPJLGEOB* LMBKNCAIDLC(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::CMDKPJLGEOB*(*)(::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + CDKEGMOBGEK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDKEGMOBGEK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDKEGMOBGEK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDKEGMOBGEK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CDKEGMOBGEK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDKEGMOBGEK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CDKEGMOBGEK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CMDKPJLGEOB* a1)
		{
			return ((::System::Void(*)(::CMDKPJLGEOB*))((::PBYTE)hIl2Cpp + CDKEGMOBGEK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
