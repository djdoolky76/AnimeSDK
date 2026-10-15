#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
class MGCJOCBHLBF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define FDKCJINBAHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDDE110)
#define FDKCJINBAHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDDE6E0)
#define FDKCJINBAHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDDE280)
#define FDKCJINBAHP_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1CDDDF00)
#define FDKCJINBAHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDDDB00)
#define FDKCJINBAHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDDDD90)
#define FDKCJINBAHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDDE320)
#define FDKCJINBAHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDDE370)
#define FDKCJINBAHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDDE150)
#define FDKCJINBAHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDDDD30)
#define FDKCJINBAHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDDDF80)
#define FDKCJINBAHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDDE1E0)
#define FDKCJINBAHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDDDA80)

inline static constexpr unsigned int FDKCJINBAHP_TypeDefinitionIndex = 11581;

	class FDKCJINBAHP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x10880);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>**)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x10888);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x10890);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x3800);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FDKCJINBAHP")->GetStaticField(0x3801);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>*(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGCJOCBHLBF*>(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_EHAFELPCLKB_OFFSET))();
		}

		static ::MGCJOCBHLBF* LMBKNCAIDLC(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::MGCJOCBHLBF*(*)(::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + FDKCJINBAHP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDKCJINBAHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FDKCJINBAHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDKCJINBAHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FDKCJINBAHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MGCJOCBHLBF* a1)
		{
			return ((::System::Void(*)(::MGCJOCBHLBF*))((::PBYTE)hIl2Cpp + FDKCJINBAHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
