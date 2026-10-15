#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistantTipsShowCaseRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CICBMNILEBG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC14890)
#define CICBMNILEBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC14E10)
#define CICBMNILEBG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC14A00)
#define CICBMNILEBG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC14340)
#define CICBMNILEBG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC145D0)
#define CICBMNILEBG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC14AA0)
#define CICBMNILEBG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC14AF0)
#define CICBMNILEBG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC148D0)
#define CICBMNILEBG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC14570)
#define CICBMNILEBG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC14700)
#define CICBMNILEBG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC14960)
#define CICBMNILEBG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC142C0)

inline static constexpr unsigned int CICBMNILEBG_TypeDefinitionIndex = 12675;

	class CICBMNILEBG : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CICBMNILEBG")->GetStaticField(0x42FD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CICBMNILEBG")->GetStaticField(0x42FD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsShowCaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsShowCaseRow*>**)UnitySDK::FromName("", "CICBMNILEBG")->GetStaticField(0x42FE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CICBMNILEBG")->GetStaticField(0x10230);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CICBMNILEBG")->GetStaticField(0x10231);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CICBMNILEBG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsShowCaseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsShowCaseRow*>*(*)())((::PBYTE)hIl2Cpp + CICBMNILEBG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CICBMNILEBG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsShowCaseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AssistantTipsShowCaseRow*>(*)())((::PBYTE)hIl2Cpp + CICBMNILEBG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AssistantTipsShowCaseRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AssistantTipsShowCaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CICBMNILEBG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CICBMNILEBG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CICBMNILEBG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CICBMNILEBG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CICBMNILEBG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CICBMNILEBG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CICBMNILEBG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AssistantTipsShowCaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AssistantTipsShowCaseRow*))((::PBYTE)hIl2Cpp + CICBMNILEBG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
