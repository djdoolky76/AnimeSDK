#pragma once
#include "unitysdk/unitysdk.h"
class EFHNDMENDHI;
class FDPALAEIHPB;
class LNBHAKPMAAD;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMMIANAIDFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88E640)
#define BMMIANAIDFO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C88E8E0)
#define BMMIANAIDFO_FILTER_OFFSET UNITYSDK_OFFSET(0x1C88E7E0)
#define BMMIANAIDFO_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C88E6C0)

inline static constexpr unsigned int BMMIANAIDFO_TypeDefinitionIndex = 42867;

	class BMMIANAIDFO
	{
	public:
		::System::Collections::Generic::List_1<::LNBHAKPMAAD*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + BMMIANAIDFO_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::EFHNDMENDHI*>* GetTrigger(::Entitas::IContext_1<::EFHNDMENDHI*>* a1)
		{
			return ((::Entitas::ICollector_1<::EFHNDMENDHI*>*(*)(::PVOID, ::Entitas::IContext_1<::EFHNDMENDHI*>*))((::PBYTE)hIl2Cpp + BMMIANAIDFO_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::EFHNDMENDHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + BMMIANAIDFO_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::EFHNDMENDHI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EFHNDMENDHI*>*))((::PBYTE)hIl2Cpp + BMMIANAIDFO_EXECUTE_OFFSET))(this, a1);
		}

	};
