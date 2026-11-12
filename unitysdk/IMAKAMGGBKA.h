#pragma once
#include "unitysdk/unitysdk.h"
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMAKAMGGBKA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FCCA0)
#define IMAKAMGGBKA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB7FCEC0)
#define IMAKAMGGBKA_FILTER_OFFSET UNITYSDK_OFFSET(0xB7FCE10)
#define IMAKAMGGBKA_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0xB7FCCF0)

inline static constexpr unsigned int IMAKAMGGBKA_TypeDefinitionIndex = 79979;

	class IMAKAMGGBKA
	{
	public:
		::System::Void _ctor(::MJAOHLLPLGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*))((::PBYTE)hIl2Cpp + IMAKAMGGBKA_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + IMAKAMGGBKA_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + IMAKAMGGBKA_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + IMAKAMGGBKA_EXECUTE_OFFSET))(this, a1);
		}

	};
