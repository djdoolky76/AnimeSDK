#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMCFDLNCGGA_CTOR_OFFSET UNITYSDK_OFFSET(0x15530280)
#define EMCFDLNCGGA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x155304B0)
#define EMCFDLNCGGA_FILTER_OFFSET UNITYSDK_OFFSET(0x155303B0)
#define EMCFDLNCGGA_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x155302E0)

	class EMCFDLNCGGA
	{
	public:
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + EMCFDLNCGGA_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + EMCFDLNCGGA_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + EMCFDLNCGGA_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + EMCFDLNCGGA_EXECUTE_OFFSET))(this, a1);
		}

	};
