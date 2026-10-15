#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DocumentaryPhaseQuestPanelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBHLLNNENMA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF4030)
#define BBHLLNNENMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF45B0)
#define BBHLLNNENMA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF41A0)
#define BBHLLNNENMA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF3B20)
#define BBHLLNNENMA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF3DB0)
#define BBHLLNNENMA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF4240)
#define BBHLLNNENMA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF4290)
#define BBHLLNNENMA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF4070)
#define BBHLLNNENMA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF3D50)
#define BBHLLNNENMA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF3EE0)
#define BBHLLNNENMA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF4100)
#define BBHLLNNENMA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF3AA0)

inline static constexpr unsigned int BBHLLNNENMA_TypeDefinitionIndex = 11218;

	class BBHLLNNENMA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DocumentaryPhaseQuestPanelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DocumentaryPhaseQuestPanelRow*>**)UnitySDK::FromName("", "BBHLLNNENMA")->GetStaticField(0x3D740);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BBHLLNNENMA")->GetStaticField(0x3D748);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BBHLLNNENMA")->GetStaticField(0x3D750);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BBHLLNNENMA")->GetStaticField(0xD2D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BBHLLNNENMA")->GetStaticField(0xD2D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBHLLNNENMA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DocumentaryPhaseQuestPanelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DocumentaryPhaseQuestPanelRow*>*(*)())((::PBYTE)hIl2Cpp + BBHLLNNENMA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBHLLNNENMA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DocumentaryPhaseQuestPanelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DocumentaryPhaseQuestPanelRow*>(*)())((::PBYTE)hIl2Cpp + BBHLLNNENMA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DocumentaryPhaseQuestPanelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DocumentaryPhaseQuestPanelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BBHLLNNENMA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBHLLNNENMA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBHLLNNENMA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBHLLNNENMA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BBHLLNNENMA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBHLLNNENMA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BBHLLNNENMA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DocumentaryPhaseQuestPanelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DocumentaryPhaseQuestPanelRow*))((::PBYTE)hIl2Cpp + BBHLLNNENMA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
