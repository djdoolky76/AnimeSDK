#pragma once
#include "unitysdk/unitysdk.h"

class CJNDJGNKEON;
class EGOJNNIFDJJ;
namespace System { class EventArgs; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define PMGEGLKHPPK_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x178EBE50)
#define PMGEGLKHPPK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x178EBF20)
#define PMGEGLKHPPK_DAIEPHALDIC_OFFSET UNITYSDK_OFFSET(0x178EBEC0)
#define PMGEGLKHPPK_FOLJFIBODOL_OFFSET UNITYSDK_OFFSET(0x178EBAB0)
#define PMGEGLKHPPK_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x178EBEB0)
#define PMGEGLKHPPK_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x178EBF10)
#define PMGEGLKHPPK_KNBHCJEPION_OFFSET UNITYSDK_OFFSET(0x178EB980)
#define PMGEGLKHPPK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x178EBB30)
#define PMGEGLKHPPK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x178EAF50)
#define PMGEGLKHPPK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x178EAF00)
#define PMGEGLKHPPK__CTOR_OFFSET UNITYSDK_OFFSET(0x178EBE10)

inline static constexpr unsigned int PMGEGLKHPPK_TypeDefinitionIndex = 49135;

class PMGEGLKHPPK
{
public:
	::UnityEngine::Coroutine* DGGEFLNDAPL; // 0x28
	::EGOJNNIFDJJ* GFJFBIKNCEO; // 0x30
	::System::Int32 OMCKFCHHACE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGEGLKHPPK__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_ONDISABLE_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::CJNDJGNKEON* DHAFEDFPAOK)
	{
		return ((::System::Void(*)(::PVOID, ::CJNDJGNKEON*))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_AMEGHCHMIOD_OFFSET))(this, DHAFEDFPAOK);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void DAIEPHALDIC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_DAIEPHALDIC_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Int32 KNBHCJEPION()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_KNBHCJEPION_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Collections::IEnumerator* FOLJFIBODOL()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGEGLKHPPK_FOLJFIBODOL_OFFSET))(this);
	}
};
