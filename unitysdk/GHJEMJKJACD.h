#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousMiscDisplayRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHJEMJKJACD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE48B20)
#define GHJEMJKJACD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE490F0)
#define GHJEMJKJACD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE48C90)
#define GHJEMJKJACD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE48590)
#define GHJEMJKJACD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE48820)
#define GHJEMJKJACD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE48D30)
#define GHJEMJKJACD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE48D80)
#define GHJEMJKJACD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE48B60)
#define GHJEMJKJACD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE487C0)
#define GHJEMJKJACD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE48990)
#define GHJEMJKJACD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE48BF0)
#define GHJEMJKJACD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE48510)

	class GHJEMJKJACD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMiscDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMiscDisplayRow*>**)UnitySDK::FromName("", "GHJEMJKJACD")->GetStaticField(0x17880);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GHJEMJKJACD")->GetStaticField(0x17888);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GHJEMJKJACD")->GetStaticField(0x17890);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GHJEMJKJACD")->GetStaticField(0x5800);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GHJEMJKJACD")->GetStaticField(0x5801);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJEMJKJACD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMiscDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMiscDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + GHJEMJKJACD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHJEMJKJACD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMiscDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMiscDisplayRow*>(*)())((::PBYTE)hIl2Cpp + GHJEMJKJACD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousMiscDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousMiscDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GHJEMJKJACD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHJEMJKJACD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJEMJKJACD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJEMJKJACD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GHJEMJKJACD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJEMJKJACD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GHJEMJKJACD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueNousMiscDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousMiscDisplayRow*))((::PBYTE)hIl2Cpp + GHJEMJKJACD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
