#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }

#define PMGMBGFOFKG___C_CLKHAABKEAB_OFFSET UNITYSDK_OFFSET(0x1C6952F0)
#define PMGMBGFOFKG___C_JDPHKEOOKOI_OFFSET UNITYSDK_OFFSET(0x1C695330)
#define PMGMBGFOFKG___C_PCDHLEMBFHA_OFFSET UNITYSDK_OFFSET(0x1C695390)
#define PMGMBGFOFKG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6952A0)
#define PMGMBGFOFKG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6952E0)

inline static constexpr unsigned int PMGMBGFOFKG___c_TypeDefinitionIndex = 65869;

class PMGMBGFOFKG___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::MoleMole::UIBaseController*>** StaticGet___9__15_3()
	{
		return (::System::Predicate_1<::MoleMole::UIBaseController*>**)Il2CppClass::FromTypeDefinitionIndex(PMGMBGFOFKG___c_TypeDefinitionIndex)->GetStaticField(0x47950);
	}
	static ::System::Action_1<::MoleMole::UIBaseController*>** StaticGet___9__15_4()
	{
		return (::System::Action_1<::MoleMole::UIBaseController*>**)Il2CppClass::FromTypeDefinitionIndex(PMGMBGFOFKG___c_TypeDefinitionIndex)->GetStaticField(0x47958);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PMGMBGFOFKG___c_TypeDefinitionIndex)->GetStaticField(0x47960);
	}
	static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(PMGMBGFOFKG___c_TypeDefinitionIndex)->GetStaticField(0x47968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMGMBGFOFKG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CLKHAABKEAB(::MoleMole::UIBaseController* JOLDOMEIKEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + PMGMBGFOFKG___C_CLKHAABKEAB_OFFSET))(this, JOLDOMEIKEF);
	}

	::Cysharp::Threading::Tasks::UniTask JDPHKEOOKOI(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + PMGMBGFOFKG___C_JDPHKEOOKOI_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void PCDHLEMBFHA(::MoleMole::UIBaseController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + PMGMBGFOFKG___C_PCDHLEMBFHA_OFFSET))(this, JOLDOMEIKEF);
	}
};
