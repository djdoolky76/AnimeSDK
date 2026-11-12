#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceTriggerConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNAHEIJKFLB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E23CA90)
#define JNAHEIJKFLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E23D060)
#define JNAHEIJKFLB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E23CC00)
#define JNAHEIJKFLB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E23C500)
#define JNAHEIJKFLB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E23C790)
#define JNAHEIJKFLB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E23CCA0)
#define JNAHEIJKFLB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E23CCF0)
#define JNAHEIJKFLB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E23CAD0)
#define JNAHEIJKFLB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E23C730)
#define JNAHEIJKFLB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E23C900)
#define JNAHEIJKFLB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E23CB60)
#define JNAHEIJKFLB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E23C480)

inline static constexpr unsigned int JNAHEIJKFLB_TypeDefinitionIndex = 11037;

	class JNAHEIJKFLB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>**)UnitySDK::FromName("", "JNAHEIJKFLB")->GetStaticField(0x2F5C0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JNAHEIJKFLB")->GetStaticField(0x2F5C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JNAHEIJKFLB")->GetStaticField(0x2F5D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JNAHEIJKFLB")->GetStaticField(0x9F90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JNAHEIJKFLB")->GetStaticField(0x9F91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNAHEIJKFLB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>*(*)())((::PBYTE)hIl2Cpp + JNAHEIJKFLB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNAHEIJKFLB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>(*)())((::PBYTE)hIl2Cpp + JNAHEIJKFLB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceTriggerConditionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceTriggerConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JNAHEIJKFLB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNAHEIJKFLB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNAHEIJKFLB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNAHEIJKFLB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JNAHEIJKFLB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNAHEIJKFLB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JNAHEIJKFLB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceTriggerConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceTriggerConditionRow*))((::PBYTE)hIl2Cpp + JNAHEIJKFLB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
