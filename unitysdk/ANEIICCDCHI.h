#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANEIICCDCHI_CTOR_OFFSET UNITYSDK_OFFSET(0x166FDC30)
#define ANEIICCDCHI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x166FDF00)
#define ANEIICCDCHI_FILTER_OFFSET UNITYSDK_OFFSET(0x166FDEB0)
#define ANEIICCDCHI_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x166FDCA0)

inline static constexpr unsigned int ANEIICCDCHI_TypeDefinitionIndex = 80023;

	class ANEIICCDCHI
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x30
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + ANEIICCDCHI_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + ANEIICCDCHI_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + ANEIICCDCHI_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + ANEIICCDCHI_EXECUTE_OFFSET))(this, a1);
		}

	};
