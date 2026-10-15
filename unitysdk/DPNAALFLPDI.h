#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNPCRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPNAALFLPDI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD59C40)
#define DPNAALFLPDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5A1C0)
#define DPNAALFLPDI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD59DB0)
#define DPNAALFLPDI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD596F0)
#define DPNAALFLPDI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD59980)
#define DPNAALFLPDI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD59E50)
#define DPNAALFLPDI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD59EA0)
#define DPNAALFLPDI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD59C80)
#define DPNAALFLPDI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD59920)
#define DPNAALFLPDI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD59AF0)
#define DPNAALFLPDI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD59D10)
#define DPNAALFLPDI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD59670)

	class DPNAALFLPDI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DPNAALFLPDI")->GetStaticField(0x52B60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DPNAALFLPDI")->GetStaticField(0x52B68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNPCRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNPCRow*>**)UnitySDK::FromName("", "DPNAALFLPDI")->GetStaticField(0x52B70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPNAALFLPDI")->GetStaticField(0x12590);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DPNAALFLPDI")->GetStaticField(0x12591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPNAALFLPDI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNPCRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNPCRow*>*(*)())((::PBYTE)hIl2Cpp + DPNAALFLPDI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPNAALFLPDI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNPCRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNPCRow*>(*)())((::PBYTE)hIl2Cpp + DPNAALFLPDI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueNPCRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNPCRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DPNAALFLPDI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPNAALFLPDI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPNAALFLPDI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPNAALFLPDI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPNAALFLPDI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPNAALFLPDI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DPNAALFLPDI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueNPCRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNPCRow*))((::PBYTE)hIl2Cpp + DPNAALFLPDI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
