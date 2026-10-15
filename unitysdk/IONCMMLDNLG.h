#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestRoundIconRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IONCMMLDNLG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEFB8C0)
#define IONCMMLDNLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFBE90)
#define IONCMMLDNLG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEFBA30)
#define IONCMMLDNLG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEFB330)
#define IONCMMLDNLG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEFB5C0)
#define IONCMMLDNLG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEFBAD0)
#define IONCMMLDNLG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEFBB20)
#define IONCMMLDNLG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEFB900)
#define IONCMMLDNLG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEFB560)
#define IONCMMLDNLG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEFB730)
#define IONCMMLDNLG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEFB990)
#define IONCMMLDNLG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEFB2B0)

inline static constexpr unsigned int IONCMMLDNLG_TypeDefinitionIndex = 11745;

	class IONCMMLDNLG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestRoundIconRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestRoundIconRow*>**)UnitySDK::FromName("", "IONCMMLDNLG")->GetStaticField(0x23DD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IONCMMLDNLG")->GetStaticField(0x23DD8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IONCMMLDNLG")->GetStaticField(0x23DE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IONCMMLDNLG")->GetStaticField(0x7BE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IONCMMLDNLG")->GetStaticField(0x7BE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONCMMLDNLG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestRoundIconRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestRoundIconRow*>*(*)())((::PBYTE)hIl2Cpp + IONCMMLDNLG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IONCMMLDNLG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestRoundIconRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestRoundIconRow*>(*)())((::PBYTE)hIl2Cpp + IONCMMLDNLG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveQuestRoundIconRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveQuestRoundIconRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IONCMMLDNLG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IONCMMLDNLG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONCMMLDNLG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONCMMLDNLG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IONCMMLDNLG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IONCMMLDNLG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IONCMMLDNLG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveQuestRoundIconRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestRoundIconRow*))((::PBYTE)hIl2Cpp + IONCMMLDNLG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
