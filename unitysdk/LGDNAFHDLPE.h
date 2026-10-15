#pragma once
#include "unitysdk/unitysdk.h"
class DFGDEHAHLHC;
class FDPALAEIHPB;
class HJNDPHEDAGM;
class KGOFMBPFCFD;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGDNAFHDLPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DFB20)
#define LGDNAFHDLPE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C8DFD70)
#define LGDNAFHDLPE_FILTER_OFFSET UNITYSDK_OFFSET(0x1C8DFCB0)
#define LGDNAFHDLPE_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C8DFB90)

inline static constexpr unsigned int LGDNAFHDLPE_TypeDefinitionIndex = 42212;

	class LGDNAFHDLPE
	{
	public:
		::KGOFMBPFCFD* HINDODOFCLK; // 0x28
		::FDPALAEIHPB* FKINCGODJEP; // 0x30
		::System::Void _ctor(::FDPALAEIHPB* a1, ::HJNDPHEDAGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::HJNDPHEDAGM*))((::PBYTE)hIl2Cpp + LGDNAFHDLPE_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::DFGDEHAHLHC*>* GetTrigger(::Entitas::IContext_1<::DFGDEHAHLHC*>* a1)
		{
			return ((::Entitas::ICollector_1<::DFGDEHAHLHC*>*(*)(::PVOID, ::Entitas::IContext_1<::DFGDEHAHLHC*>*))((::PBYTE)hIl2Cpp + LGDNAFHDLPE_GETTRIGGER_OFFSET))(this, a1);
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
