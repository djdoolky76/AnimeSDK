#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRF::Service { class IAsyncService; }
namespace SRF::Service { template <typename T> class SRDependencyServiceBase_1; }
namespace System { class Object; }
namespace System { class Type; }

namespace SRF::Service
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class SRDependencyServiceBase_1__LoadDependencies_d__8 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		::SRF::Service::SRDependencyServiceBase_1<T1>* __4__this; // 0x0
		::Il2CppArray<::System::Type*>* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
		::SRF::Service::IAsyncService* _a_5__4; // 0x0
	};
}
