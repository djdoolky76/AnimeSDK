#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGameBoyCaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENOLEABOABJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD824C0)
#define ENOLEABOABJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD82A90)
#define ENOLEABOABJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD82630)
#define ENOLEABOABJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD81F30)
#define ENOLEABOABJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD821C0)
#define ENOLEABOABJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD826D0)
#define ENOLEABOABJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD82720)
#define ENOLEABOABJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD82500)
#define ENOLEABOABJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD82160)
#define ENOLEABOABJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD82330)
#define ENOLEABOABJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD82590)
#define ENOLEABOABJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD81EB0)

inline static constexpr unsigned int ENOLEABOABJ_TypeDefinitionIndex = 14099;

	class ENOLEABOABJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ENOLEABOABJ")->GetStaticField(0xC0E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCaseRow*>**)UnitySDK::FromName("", "ENOLEABOABJ")->GetStaticField(0xC0E8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ENOLEABOABJ")->GetStaticField(0xC0F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ENOLEABOABJ")->GetStaticField(0x2860);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ENOLEABOABJ")->GetStaticField(0x2861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENOLEABOABJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCaseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCaseRow*>*(*)())((::PBYTE)hIl2Cpp + ENOLEABOABJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ENOLEABOABJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCaseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCaseRow*>(*)())((::PBYTE)hIl2Cpp + ENOLEABOABJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingGameBoyCaseRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingGameBoyCaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ENOLEABOABJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ENOLEABOABJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENOLEABOABJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENOLEABOABJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ENOLEABOABJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENOLEABOABJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ENOLEABOABJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingGameBoyCaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingGameBoyCaseRow*))((::PBYTE)hIl2Cpp + ENOLEABOABJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
