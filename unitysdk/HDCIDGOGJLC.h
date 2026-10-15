#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionDisableRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDCIDGOGJLC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE92D30)
#define HDCIDGOGJLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE93300)
#define HDCIDGOGJLC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE92EA0)
#define HDCIDGOGJLC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE927A0)
#define HDCIDGOGJLC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE92A30)
#define HDCIDGOGJLC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE92F40)
#define HDCIDGOGJLC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE92F90)
#define HDCIDGOGJLC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE92D70)
#define HDCIDGOGJLC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE929D0)
#define HDCIDGOGJLC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE92BA0)
#define HDCIDGOGJLC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE92E00)
#define HDCIDGOGJLC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE92720)

	class HDCIDGOGJLC : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HDCIDGOGJLC")->GetStaticField(0x1C990);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionDisableRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionDisableRow*>**)UnitySDK::FromName("", "HDCIDGOGJLC")->GetStaticField(0x1C998);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HDCIDGOGJLC")->GetStaticField(0x1C9A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HDCIDGOGJLC")->GetStaticField(0x66B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HDCIDGOGJLC")->GetStaticField(0x66B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDCIDGOGJLC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionDisableRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionDisableRow*>*(*)())((::PBYTE)hIl2Cpp + HDCIDGOGJLC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDCIDGOGJLC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionDisableRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionDisableRow*>(*)())((::PBYTE)hIl2Cpp + HDCIDGOGJLC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MissionDisableRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MissionDisableRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HDCIDGOGJLC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDCIDGOGJLC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDCIDGOGJLC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDCIDGOGJLC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HDCIDGOGJLC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDCIDGOGJLC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HDCIDGOGJLC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MissionDisableRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MissionDisableRow*))((::PBYTE)hIl2Cpp + HDCIDGOGJLC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
