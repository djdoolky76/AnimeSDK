#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DialogueConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMIENKBOHOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD7B850)
#define EMIENKBOHOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7BE20)
#define EMIENKBOHOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD7B9C0)
#define EMIENKBOHOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD7B2C0)
#define EMIENKBOHOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD7B550)
#define EMIENKBOHOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD7BA60)
#define EMIENKBOHOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD7BAB0)
#define EMIENKBOHOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD7B890)
#define EMIENKBOHOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD7B4F0)
#define EMIENKBOHOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD7B6C0)
#define EMIENKBOHOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD7B920)
#define EMIENKBOHOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD7B240)

inline static constexpr unsigned int EMIENKBOHOM_TypeDefinitionIndex = 13135;

	class EMIENKBOHOM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EMIENKBOHOM")->GetStaticField(0xB1C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>**)UnitySDK::FromName("", "EMIENKBOHOM")->GetStaticField(0xB1C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EMIENKBOHOM")->GetStaticField(0xB1D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EMIENKBOHOM")->GetStaticField(0x2610);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EMIENKBOHOM")->GetStaticField(0x2611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMIENKBOHOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>*(*)())((::PBYTE)hIl2Cpp + EMIENKBOHOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMIENKBOHOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>(*)())((::PBYTE)hIl2Cpp + EMIENKBOHOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DialogueConditionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DialogueConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EMIENKBOHOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMIENKBOHOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMIENKBOHOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMIENKBOHOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EMIENKBOHOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMIENKBOHOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EMIENKBOHOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DialogueConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DialogueConditionRow*))((::PBYTE)hIl2Cpp + EMIENKBOHOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
