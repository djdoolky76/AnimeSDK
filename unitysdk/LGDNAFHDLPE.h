#pragma once
#include "unitysdk/unitysdk.h"
class DFGDEHAHLHC;
class FDPALAEIHPB;
class HJNDPHEDAGM;
class KGOFMBPFCFD;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGDNAFHDLPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90DE10)
#define LGDNAFHDLPE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C90E060)
#define LGDNAFHDLPE_FILTER_OFFSET UNITYSDK_OFFSET(0x1C90DFA0)
#define LGDNAFHDLPE_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C90DE80)

	class LGDNAFHDLPE
	{
	public:
		::KGOFMBPFCFD* HINDODOFCLK; // 0x28
		::FDPALAEIHPB* FKINCGODJEP; // 0x30
		::System::Void _ctor(::FDPALAEIHPB* a1, ::HJNDPHEDAGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::HJNDPHEDAGM*))((::PBYTE)hIl2Cpp + LGDNAFHDLPE_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + LGDNAFHDLPE_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::DFGDEHAHLHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFGDEHAHLHC*))((::PBYTE)hIl2Cpp + LGDNAFHDLPE_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::DFGDEHAHLHC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DFGDEHAHLHC*>*))((::PBYTE)hIl2Cpp + LGDNAFHDLPE_EXECUTE_OFFSET))(this, a1);
		}

	};
