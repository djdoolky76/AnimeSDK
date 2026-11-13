#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialScriptConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLICPDBOBCO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EB78CA0)
#define CLICPDBOBCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB79220)
#define CLICPDBOBCO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EB78E10)
#define CLICPDBOBCO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EB78750)
#define CLICPDBOBCO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EB789E0)
#define CLICPDBOBCO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EB78EB0)
#define CLICPDBOBCO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EB78F00)
#define CLICPDBOBCO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EB78CE0)
#define CLICPDBOBCO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EB78980)
#define CLICPDBOBCO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EB78B50)
#define CLICPDBOBCO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EB78D70)
#define CLICPDBOBCO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EB786D0)

inline static constexpr unsigned int CLICPDBOBCO_TypeDefinitionIndex = 13882;

	class CLICPDBOBCO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0x34680);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptConditionRow*>**)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0x34688);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0x34690);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0xA310);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CLICPDBOBCO")->GetStaticField(0xA311);
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
