#pragma once
#include "unitysdk/unitysdk.h"
class BDOGIDPIEGG;
class DIBPAJHLFIF;
class FAHGGJLFFJO;
class OJMONJELOAF;
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define NCBMJMBFKCI_BDPMCLOCAPN_OFFSET UNITYSDK_OFFSET(0xBAF1650)
#define NCBMJMBFKCI_CTOR_OFFSET UNITYSDK_OFFSET(0xBAF11E0)
#define NCBMJMBFKCI_DCGCDGLOMAG_OFFSET UNITYSDK_OFFSET(0xBAF13E0)
#define NCBMJMBFKCI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAF1520)
#define NCBMJMBFKCI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAF1210)
#define NCBMJMBFKCI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAF15F0)
#define NCBMJMBFKCI_TICK_OFFSET UNITYSDK_OFFSET(0xBAF1570)

inline static constexpr unsigned int NCBMJMBFKCI_TypeDefinitionIndex = 53717;

	class NCBMJMBFKCI
	{
	public:
		::BDOGIDPIEGG* NILDKJKBHHG; // 0x28
		::OJMONJELOAF* KADDKEGNCHE; // 0x30
		::System::Action_1<::DIBPAJHLFIF*>* AGGBMLBJFLK; // 0x38
		::System::Boolean PCFNEKEPDIE; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FAHGGJLFFJO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FAHGGJLFFJO*))((::PBYTE)hIl2Cpp + NCBMJMBFKCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBMJMBFKCI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBMJMBFKCI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCBMJMBFKCI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBMJMBFKCI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BDPMCLOCAPN(::DIBPAJHLFIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBPAJHLFIF*))((::PBYTE)hIl2Cpp + NCBMJMBFKCI_BDPMCLOCAPN_OFFSET))(this, a1);
		}

		::System::Void DCGCDGLOMAG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCBMJMBFKCI_DCGCDGLOMAG_OFFSET))(this, a1);
		}

	};
