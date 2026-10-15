#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamChatFeedbackConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJKGLFJKKAA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D7E21D0)
#define BJKGLFJKKAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7E27A0)
#define BJKGLFJKKAA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D7E2340)
#define BJKGLFJKKAA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D7E1C40)
#define BJKGLFJKKAA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D7E1ED0)
#define BJKGLFJKKAA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D7E23E0)
#define BJKGLFJKKAA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D7E2430)
#define BJKGLFJKKAA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D7E2210)
#define BJKGLFJKKAA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D7E1E70)
#define BJKGLFJKKAA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D7E2040)
#define BJKGLFJKKAA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D7E22A0)
#define BJKGLFJKKAA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D7E1BC0)

inline static constexpr unsigned int BJKGLFJKKAA_TypeDefinitionIndex = 14311;

	class BJKGLFJKKAA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0x42E30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>**)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0x42E38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0x42E40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0xFE40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BJKGLFJKKAA")->GetStaticField(0xFE41);
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
