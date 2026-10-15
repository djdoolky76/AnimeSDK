#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamChatFeedbackConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJKGLFJKKAA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D80FBD0)
#define BJKGLFJKKAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8101A0)
#define BJKGLFJKKAA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D80FD40)
#define BJKGLFJKKAA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D80F640)
#define BJKGLFJKKAA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D80F8D0)
#define BJKGLFJKKAA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D80FDE0)
#define BJKGLFJKKAA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D80FE30)
#define BJKGLFJKKAA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D80FC10)
#define BJKGLFJKKAA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D80F870)
#define BJKGLFJKKAA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D80FA40)
#define BJKGLFJKKAA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D80FCA0)
#define BJKGLFJKKAA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D80F5C0)

inline static constexpr unsigned int BJKGLFJKKAA_TypeDefinitionIndex = 14311;

	class BJKGLFJKKAA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>**)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0x36020);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0x36028);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0x36030);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0xB610);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0xB611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJKGLFJKKAA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BJKGLFJKKAA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJKGLFJKKAA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>(*)())((::PBYTE)hIl2Cpp + BJKGLFJKKAA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PamChatFeedbackConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PamChatFeedbackConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BJKGLFJKKAA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJKGLFJKKAA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJKGLFJKKAA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJKGLFJKKAA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BJKGLFJKKAA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BJKGLFJKKAA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BJKGLFJKKAA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PamChatFeedbackConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PamChatFeedbackConfigRow*))((::PBYTE)hIl2Cpp + BJKGLFJKKAA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
