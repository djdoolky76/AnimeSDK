#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIIDFGGGCKH_CAHNDIGJEBH_OFFSET UNITYSDK_OFFSET(0x1A3DDEC0)
#define GIIDFGGGCKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DDB50)
#define GIIDFGGGCKH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A3DDE10)
#define GIIDFGGGCKH_FILTER_OFFSET UNITYSDK_OFFSET(0x1A3DDCD0)
#define GIIDFGGGCKH_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A3DDBB0)

inline static constexpr unsigned int GIIDFGGGCKH_TypeDefinitionIndex = 79995;

	class GIIDFGGGCKH
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + GIIDFGGGCKH_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + GIIDFGGGCKH_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + GIIDFGGGCKH_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + GIIDFGGGCKH_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void CAHNDIGJEBH(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + GIIDFGGGCKH_CAHNDIGJEBH_OFFSET))(this, a1);
		}

	};
