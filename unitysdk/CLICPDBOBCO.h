#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialScriptConditionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLICPDBOBCO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC21550)
#define CLICPDBOBCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC21AD0)
#define CLICPDBOBCO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC216C0)
#define CLICPDBOBCO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC21000)
#define CLICPDBOBCO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC21290)
#define CLICPDBOBCO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC21760)
#define CLICPDBOBCO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC217B0)
#define CLICPDBOBCO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC21590)
#define CLICPDBOBCO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC21230)
#define CLICPDBOBCO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC21400)
#define CLICPDBOBCO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC21620)
#define CLICPDBOBCO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC20F80)

inline static constexpr unsigned int CLICPDBOBCO_TypeDefinitionIndex = 13725;

	class CLICPDBOBCO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0x432D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptConditionRow*>**)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0x432D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0x432E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0x102F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0x102F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLICPDBOBCO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptConditionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptConditionRow*>*(*)())((::PBYTE)hIl2Cpp + CLICPDBOBCO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLICPDBOBCO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptConditionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptConditionRow*>(*)())((::PBYTE)hIl2Cpp + CLICPDBOBCO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialScriptConditionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialScriptConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLICPDBOBCO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLICPDBOBCO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLICPDBOBCO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLICPDBOBCO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLICPDBOBCO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLICPDBOBCO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CLICPDBOBCO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeartDialScriptConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialScriptConditionRow*))((::PBYTE)hIl2Cpp + CLICPDBOBCO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
