#pragma once
#include "unitysdk/unitysdk.h"
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODOFDCOEKNI_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A70C0)
#define ODOFDCOEKNI_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC6A72E0)
#define ODOFDCOEKNI_FILTER_OFFSET UNITYSDK_OFFSET(0xC6A7230)
#define ODOFDCOEKNI_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0xC6A7110)

inline static constexpr unsigned int ODOFDCOEKNI_TypeDefinitionIndex = 79982;

	class ODOFDCOEKNI
	{
	public:
		::System::Void _ctor(::MJAOHLLPLGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*))((::PBYTE)hIl2Cpp + ODOFDCOEKNI_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + ODOFDCOEKNI_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + ODOFDCOEKNI_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + ODOFDCOEKNI_EXECUTE_OFFSET))(this, a1);
		}

	};
