#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class GHFDKAAGDJJ;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADPMMKFNBDL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC7F740)
#define ADPMMKFNBDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC7FD00)
#define ADPMMKFNBDL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC7F8B0)
#define ADPMMKFNBDL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC7F1A0)
#define ADPMMKFNBDL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC7F430)
#define ADPMMKFNBDL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC7F950)
#define ADPMMKFNBDL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC7F9A0)
#define ADPMMKFNBDL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC7F780)
#define ADPMMKFNBDL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC7F3D0)
#define ADPMMKFNBDL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC7F5A0)
#define ADPMMKFNBDL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC7F810)
#define ADPMMKFNBDL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC7F120)

inline static constexpr unsigned int ADPMMKFNBDL_TypeDefinitionIndex = 13886;

	class ADPMMKFNBDL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GHFDKAAGDJJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GHFDKAAGDJJ*>**)UnitySDK::FromName("", "ADPMMKFNBDL")->GetStaticField(0x3DDF0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ADPMMKFNBDL")->GetStaticField(0x3DDF8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ADPMMKFNBDL")->GetStaticField(0x3DE00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ADPMMKFNBDL")->GetStaticField(0xE980);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ADPMMKFNBDL")->GetStaticField(0xE981);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADPMMKFNBDL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GHFDKAAGDJJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GHFDKAAGDJJ*>*(*)())((::PBYTE)hIl2Cpp + ADPMMKFNBDL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ADPMMKFNBDL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GHFDKAAGDJJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GHFDKAAGDJJ*>(*)())((::PBYTE)hIl2Cpp + ADPMMKFNBDL_FPHGMAMDFHE_OFFSET))();
		}

		static ::GHFDKAAGDJJ* LMBKNCAIDLC(::RPG::GameCore::ItemSubType a1, ::RPG::GameCore::ItemRarity a2)
		{
			return ((::GHFDKAAGDJJ*(*)(::RPG::GameCore::ItemSubType, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + ADPMMKFNBDL_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ADPMMKFNBDL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADPMMKFNBDL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADPMMKFNBDL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ADPMMKFNBDL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADPMMKFNBDL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ADPMMKFNBDL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::GHFDKAAGDJJ* a1)
		{
			return ((::System::Void(*)(::GHFDKAAGDJJ*))((::PBYTE)hIl2Cpp + ADPMMKFNBDL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
