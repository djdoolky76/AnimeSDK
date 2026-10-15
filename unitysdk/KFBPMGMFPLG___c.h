#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define KFBPMGMFPLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB38EF30)
#define KFBPMGMFPLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB38EF60)
#define KFBPMGMFPLG___C__BUILDDISPLAYOPTIONS_B__13_2_OFFSET UNITYSDK_OFFSET(0xB38EF70)
#define KFBPMGMFPLG___C___PICKLEAVEEMPLOYEE_B__26_0_OFFSET UNITYSDK_OFFSET(0xB38EF80)

inline static constexpr unsigned int KFBPMGMFPLG___c_TypeDefinitionIndex = 80313;

	class KFBPMGMFPLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45700);
		}

		static ::System::Predicate_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>** StaticGet___9__26_0()
		{
			return (::System::Predicate_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45708);
		}

		static ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>** StaticGet___9__13_2()
		{
			return (::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildDisplayOptions_b__13_2(::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__BUILDDISPLAYOPTIONS_B__13_2_OFFSET))(this, a1);
		}

		::System::Boolean __PickLeaveEmployee_b__26_0(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C___PICKLEAVEEMPLOYEE_B__26_0_OFFSET))(this, a1);
		}

	};
