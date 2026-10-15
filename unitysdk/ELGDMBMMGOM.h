#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class PFGKPGHEGJM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELGDMBMMGOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD9C140)
#define ELGDMBMMGOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD9C710)
#define ELGDMBMMGOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD9C2B0)
#define ELGDMBMMGOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD9BBB0)
#define ELGDMBMMGOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD9BE40)
#define ELGDMBMMGOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD9C350)
#define ELGDMBMMGOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD9C3A0)
#define ELGDMBMMGOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD9C180)
#define ELGDMBMMGOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD9BDE0)
#define ELGDMBMMGOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD9BFB0)
#define ELGDMBMMGOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD9C210)
#define ELGDMBMMGOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD9BB30)

inline static constexpr unsigned int ELGDMBMMGOM_TypeDefinitionIndex = 11301;

	class ELGDMBMMGOM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ELGDMBMMGOM")->GetStaticField(0x2E70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ELGDMBMMGOM")->GetStaticField(0x2E78);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PFGKPGHEGJM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PFGKPGHEGJM*>**)UnitySDK::FromName("", "ELGDMBMMGOM")->GetStaticField(0x2E80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ELGDMBMMGOM")->GetStaticField(0x2370);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ELGDMBMMGOM")->GetStaticField(0x2371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELGDMBMMGOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PFGKPGHEGJM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PFGKPGHEGJM*>*(*)())((::PBYTE)hIl2Cpp + ELGDMBMMGOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELGDMBMMGOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PFGKPGHEGJM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PFGKPGHEGJM*>(*)())((::PBYTE)hIl2Cpp + ELGDMBMMGOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::PFGKPGHEGJM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::PFGKPGHEGJM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ELGDMBMMGOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELGDMBMMGOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELGDMBMMGOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELGDMBMMGOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ELGDMBMMGOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELGDMBMMGOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ELGDMBMMGOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::PFGKPGHEGJM* a1)
		{
			return ((::System::Void(*)(::PFGKPGHEGJM*))((::PBYTE)hIl2Cpp + ELGDMBMMGOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
