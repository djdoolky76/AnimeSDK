#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class NFPPGOFECMH;
class OOBKHOJLDPN;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNPHBDACNLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB4EB0)
#define GNPHBDACNLK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CAB5150)
#define GNPHBDACNLK_FILTER_OFFSET UNITYSDK_OFFSET(0x1CAB5050)
#define GNPHBDACNLK_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1CAB4F30)

	class GNPHBDACNLK
	{
	public:
		::System::Collections::Generic::List_1<::OOBKHOJLDPN*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + GNPHBDACNLK_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + GNPHBDACNLK_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::NFPPGOFECMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFPPGOFECMH*))((::PBYTE)hIl2Cpp + GNPHBDACNLK_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::NFPPGOFECMH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NFPPGOFECMH*>*))((::PBYTE)hIl2Cpp + GNPHBDACNLK_EXECUTE_OFFSET))(this, a1);
		}

	};
