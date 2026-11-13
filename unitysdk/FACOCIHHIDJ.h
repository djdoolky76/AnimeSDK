#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FACOCIHHIDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x136E2290)
#define FACOCIHHIDJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x136E2590)
#define FACOCIHHIDJ_FILTER_OFFSET UNITYSDK_OFFSET(0x136E2410)
#define FACOCIHHIDJ_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x136E22F0)
#define FACOCIHHIDJ_PGDPDAMKLII_OFFSET UNITYSDK_OFFSET(0x136E2640)

inline static constexpr unsigned int FACOCIHHIDJ_TypeDefinitionIndex = 79996;

	class FACOCIHHIDJ
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + FACOCIHHIDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + FACOCIHHIDJ_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + FACOCIHHIDJ_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + FACOCIHHIDJ_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void PGDPDAMKLII(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + FACOCIHHIDJ_PGDPDAMKLII_OFFSET))(this, a1);
		}

	};
