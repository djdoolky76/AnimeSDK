#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"

class NIJIAADMKIJ;
namespace MoleMole { class UIBaseController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NOIAPGIFFFJ_AMPOCIEKHEH_OFFSET UNITYSDK_OFFSET(0x5FEC20)
#define NOIAPGIFFFJ_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0xFD14920)
#define NOIAPGIFFFJ_JHDAENEHLMI_OFFSET UNITYSDK_OFFSET(0x5FEBF0)
#define NOIAPGIFFFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int NOIAPGIFFFJ_TypeDefinitionIndex = 61571;

struct alignas(8) NOIAPGIFFFJ
{
	::NIJIAADMKIJ* IJHMPLEFGOL; // 0x10

	::System::Void _ctor(::NIJIAADMKIJ* IJHMPLEFGOL)
	{
		return ((::System::Void(*)(::PVOID, ::NIJIAADMKIJ*))((::PBYTE)hIl2Cpp + NOIAPGIFFFJ__CTOR_OFFSET))(this, IJHMPLEFGOL);
	}

	::Cysharp::Threading::Tasks::UniTask JHDAENEHLMI(::System::Collections::Generic::IList_1<::System::Int32>* JAOMBBCKCHK, ::MoleMole::UIBaseController* NCIMBHDKIJM, ::System::Boolean HHHLEHMFKLO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + NOIAPGIFFFJ_JHDAENEHLMI_OFFSET))(this, JAOMBBCKCHK, NCIMBHDKIJM, HHHLEHMFKLO);
	}

	/*
	static ::NOIAPGIFFFJ COKNIICCODC(::NIJIAADMKIJ* IJHMPLEFGOL)
	{
		return ((::NOIAPGIFFFJ(*)(::NIJIAADMKIJ*))((::PBYTE)hIl2Cpp + NOIAPGIFFFJ_COKNIICCODC_OFFSET))(IJHMPLEFGOL);
	}
	*/

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> AMPOCIEKHEH(::System::Int32 GBOLCPONEAE, ::MoleMole::UIBaseController* NCIMBHDKIJM, ::System::Boolean HPAHOIDFNJN, ::System::Action_1<::System::Boolean>* DKGJKOPELMD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NOIAPGIFFFJ_AMPOCIEKHEH_OFFSET))(this, GBOLCPONEAE, NCIMBHDKIJM, HPAHOIDFNJN, DKGJKOPELMD);
	}
};
