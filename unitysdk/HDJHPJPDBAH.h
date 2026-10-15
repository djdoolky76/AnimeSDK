#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OILICJACMFA.h"
class KFELGAIGHAP;
class KJLOHDFBBOA;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HDJHPJPDBAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2B960)
#define HDJHPJPDBAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C2BA70)
#define HDJHPJPDBAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C2BBD0)

inline static constexpr unsigned int HDJHPJPDBAH_TypeDefinitionIndex = 55042;

	class HDJHPJPDBAH
	{
	public:
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x28
		::System::Collections::Generic::List_1<::OILICJACMFA>* MDDKBNLNMBN; // 0x30
		::KFELGAIGHAP* LNMOCNDILJN; // 0x38
		::System::Collections::Generic::List_1<::OILICJACMFA>* AAECKGKGJFG; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KJLOHDFBBOA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KJLOHDFBBOA*))((::PBYTE)hIl2Cpp + HDJHPJPDBAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJHPJPDBAH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJHPJPDBAH_ONTASKBEGIN_OFFSET))(this);
		}

	};
