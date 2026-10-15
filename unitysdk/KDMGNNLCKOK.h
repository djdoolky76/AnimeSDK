#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPanelConditionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDMGNNLCKOK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D082530)
#define KDMGNNLCKOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D082AB0)
#define KDMGNNLCKOK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0826A0)
#define KDMGNNLCKOK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D081FE0)
#define KDMGNNLCKOK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D082270)
#define KDMGNNLCKOK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D082740)
#define KDMGNNLCKOK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D082790)
#define KDMGNNLCKOK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D082570)
#define KDMGNNLCKOK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D082210)
#define KDMGNNLCKOK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0823E0)
#define KDMGNNLCKOK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D082600)
#define KDMGNNLCKOK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D081F60)

	class KDMGNNLCKOK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDMGNNLCKOK")->GetStaticField(0x33FD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelConditionRow*>**)UnitySDK::FromName("", "KDMGNNLCKOK")->GetStaticField(0x33FD8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KDMGNNLCKOK")->GetStaticField(0x33FE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDMGNNLCKOK")->GetStaticField(0xAEE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDMGNNLCKOK")->GetStaticField(0xAEE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMGNNLCKOK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelConditionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelConditionRow*>*(*)())((::PBYTE)hIl2Cpp + KDMGNNLCKOK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDMGNNLCKOK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelConditionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPanelConditionRow*>(*)())((::PBYTE)hIl2Cpp + KDMGNNLCKOK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPanelConditionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityPanelConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KDMGNNLCKOK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDMGNNLCKOK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMGNNLCKOK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMGNNLCKOK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KDMGNNLCKOK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMGNNLCKOK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KDMGNNLCKOK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityPanelConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPanelConditionRow*))((::PBYTE)hIl2Cpp + KDMGNNLCKOK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
