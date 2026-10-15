#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2SpecialRuleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOLGFFOBKNI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9F34F0)
#define BOLGFFOBKNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9F3AC0)
#define BOLGFFOBKNI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9F3660)
#define BOLGFFOBKNI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9F2F60)
#define BOLGFFOBKNI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9F31F0)
#define BOLGFFOBKNI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9F3700)
#define BOLGFFOBKNI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9F3750)
#define BOLGFFOBKNI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9F3530)
#define BOLGFFOBKNI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9F3190)
#define BOLGFFOBKNI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9F3360)
#define BOLGFFOBKNI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9F35C0)
#define BOLGFFOBKNI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9F2EE0)

inline static constexpr unsigned int BOLGFFOBKNI_TypeDefinitionIndex = 11935;

	class BOLGFFOBKNI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BOLGFFOBKNI")->GetStaticField(0x39400);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BOLGFFOBKNI")->GetStaticField(0x39408);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2SpecialRuleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2SpecialRuleRow*>**)UnitySDK::FromName("", "BOLGFFOBKNI")->GetStaticField(0x39410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BOLGFFOBKNI")->GetStaticField(0xC3F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BOLGFFOBKNI")->GetStaticField(0xC3F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOLGFFOBKNI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2SpecialRuleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2SpecialRuleRow*>*(*)())((::PBYTE)hIl2Cpp + BOLGFFOBKNI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOLGFFOBKNI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2SpecialRuleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2SpecialRuleRow*>(*)())((::PBYTE)hIl2Cpp + BOLGFFOBKNI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2SpecialRuleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2SpecialRuleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BOLGFFOBKNI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOLGFFOBKNI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOLGFFOBKNI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOLGFFOBKNI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BOLGFFOBKNI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BOLGFFOBKNI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BOLGFFOBKNI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2SpecialRuleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2SpecialRuleRow*))((::PBYTE)hIl2Cpp + BOLGFFOBKNI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
