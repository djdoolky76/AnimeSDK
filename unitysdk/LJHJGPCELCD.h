#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeTemplateApplyRuleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJHJGPCELCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D3270)
#define LJHJGPCELCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D3840)
#define LJHJGPCELCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D33E0)
#define LJHJGPCELCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D2CE0)
#define LJHJGPCELCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D2F70)
#define LJHJGPCELCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D3480)
#define LJHJGPCELCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D34D0)
#define LJHJGPCELCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D32B0)
#define LJHJGPCELCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D2F10)
#define LJHJGPCELCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D30E0)
#define LJHJGPCELCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D3340)
#define LJHJGPCELCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D2C60)

inline static constexpr unsigned int LJHJGPCELCD_TypeDefinitionIndex = 11929;

	class LJHJGPCELCD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow*>**)UnitySDK::FromName("", "LJHJGPCELCD")->GetStaticField(0x3C920);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LJHJGPCELCD")->GetStaticField(0x3C928);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LJHJGPCELCD")->GetStaticField(0x3C930);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LJHJGPCELCD")->GetStaticField(0xC170);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LJHJGPCELCD")->GetStaticField(0xC171);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJHJGPCELCD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow*>*(*)())((::PBYTE)hIl2Cpp + LJHJGPCELCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJHJGPCELCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow*>(*)())((::PBYTE)hIl2Cpp + LJHJGPCELCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeTemplateApplyRuleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeTemplateApplyRuleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LJHJGPCELCD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJHJGPCELCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJHJGPCELCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJHJGPCELCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LJHJGPCELCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJHJGPCELCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LJHJGPCELCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeTemplateApplyRuleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeTemplateApplyRuleRow*))((::PBYTE)hIl2Cpp + LJHJGPCELCD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
