#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGGMCNNPELH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6974C0)
#define LGGMCNNPELH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB697750)
#define LGGMCNNPELH_FILTER_OFFSET UNITYSDK_OFFSET(0xB6975F0)
#define LGGMCNNPELH_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0xB697520)

inline static constexpr unsigned int LGGMCNNPELH_TypeDefinitionIndex = 75780;

	class LGGMCNNPELH
	{
	public:
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + LGGMCNNPELH_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::KHPOKIKCOFO*>* GetTrigger(::Entitas::IContext_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::Entitas::ICollector_1<::KHPOKIKCOFO*>*(*)(::PVOID, ::Entitas::IContext_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + LGGMCNNPELH_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + LGGMCNNPELH_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + LGGMCNNPELH_EXECUTE_OFFSET))(this, a1);
		}

	};
