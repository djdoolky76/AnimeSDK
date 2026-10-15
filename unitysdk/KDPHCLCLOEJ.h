#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextSpriteConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDPHCLCLOEJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D058B80)
#define KDPHCLCLOEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D059780)
#define KDPHCLCLOEJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D058F20)
#define KDPHCLCLOEJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D058BC0)
#define KDPHCLCLOEJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D059460)
#define KDPHCLCLOEJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D058FC0)
#define KDPHCLCLOEJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D059010)
#define KDPHCLCLOEJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D058DF0)
#define KDPHCLCLOEJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D059400)
#define KDPHCLCLOEJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0595D0)
#define KDPHCLCLOEJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D058E80)
#define KDPHCLCLOEJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D059380)

inline static constexpr unsigned int KDPHCLCLOEJ_TypeDefinitionIndex = 15290;

	class KDPHCLCLOEJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextSpriteConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextSpriteConfigRow*>**)UnitySDK::FromName("", "KDPHCLCLOEJ")->GetStaticField(0x34010);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KDPHCLCLOEJ")->GetStaticField(0x34018);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDPHCLCLOEJ")->GetStaticField(0x34020);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDPHCLCLOEJ")->GetStaticField(0xA920);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDPHCLCLOEJ")->GetStaticField(0xA921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TextSpriteConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TextSpriteConfigRow*))((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextSpriteConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextSpriteConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextSpriteConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextSpriteConfigRow*>(*)())((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TextSpriteConfigRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::TextSpriteConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + KDPHCLCLOEJ_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
