#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PamMoodType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamMoodRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPHAPJPMNAI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCBE540)
#define CPHAPJPMNAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCBEAC0)
#define CPHAPJPMNAI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCBE6B0)
#define CPHAPJPMNAI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCBDFF0)
#define CPHAPJPMNAI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCBE280)
#define CPHAPJPMNAI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCBE750)
#define CPHAPJPMNAI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCBE7A0)
#define CPHAPJPMNAI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCBE580)
#define CPHAPJPMNAI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCBE220)
#define CPHAPJPMNAI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCBE3B0)
#define CPHAPJPMNAI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCBE610)
#define CPHAPJPMNAI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCBDF70)

	class CPHAPJPMNAI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>**)UnitySDK::FromName("", "CPHAPJPMNAI")->GetStaticField(0x45B10);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CPHAPJPMNAI")->GetStaticField(0x45B18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPHAPJPMNAI")->GetStaticField(0x45B20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPHAPJPMNAI")->GetStaticField(0x10AF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPHAPJPMNAI")->GetStaticField(0x10AF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPHAPJPMNAI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>*(*)())((::PBYTE)hIl2Cpp + CPHAPJPMNAI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPHAPJPMNAI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamMoodRow*>(*)())((::PBYTE)hIl2Cpp + CPHAPJPMNAI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PamMoodRow* LMBKNCAIDLC(::RPG::GameCore::PamMoodType a1)
		{
			return ((::RPG::GameCore::PamMoodRow*(*)(::RPG::GameCore::PamMoodType))((::PBYTE)hIl2Cpp + CPHAPJPMNAI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPHAPJPMNAI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPHAPJPMNAI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPHAPJPMNAI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPHAPJPMNAI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPHAPJPMNAI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CPHAPJPMNAI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PamMoodRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PamMoodRow*))((::PBYTE)hIl2Cpp + CPHAPJPMNAI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
