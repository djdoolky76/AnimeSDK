#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMABPLCCKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CA220)
#define IMABPLCCKCB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A5CA4E0)
#define IMABPLCCKCB_FILTER_OFFSET UNITYSDK_OFFSET(0x1A5CA490)
#define IMABPLCCKCB_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A5CA280)

inline static constexpr unsigned int IMABPLCCKCB_TypeDefinitionIndex = 79979;

	class IMABPLCCKCB
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + IMABPLCCKCB_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + IMABPLCCKCB_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + IMABPLCCKCB_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + IMABPLCCKCB_EXECUTE_OFFSET))(this, a1);
		}

	};
