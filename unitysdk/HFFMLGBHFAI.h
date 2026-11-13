#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFFMLGBHFAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A225C70)
#define HFFMLGBHFAI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A225EC0)
#define HFFMLGBHFAI_FILTER_OFFSET UNITYSDK_OFFSET(0x1A225E70)
#define HFFMLGBHFAI_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A225CE0)

inline static constexpr unsigned int HFFMLGBHFAI_TypeDefinitionIndex = 79973;

	class HFFMLGBHFAI
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x28
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x30
		// static const ::System::String* HMHIALKMBGF; // 0x0
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + HFFMLGBHFAI_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + HFFMLGBHFAI_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + HFFMLGBHFAI_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + HFFMLGBHFAI_EXECUTE_OFFSET))(this, a1);
		}

	};
