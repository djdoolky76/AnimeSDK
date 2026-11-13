#pragma once
#include "unitysdk/unitysdk.h"
class FCHFBJKLIPF;
class FDPALAEIHPB;
class NFPPGOFECMH;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLBGPKEIDKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63BCD0)
#define LLBGPKEIDKO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D63BF70)
#define LLBGPKEIDKO_FILTER_OFFSET UNITYSDK_OFFSET(0x1D63BE70)
#define LLBGPKEIDKO_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1D63BD50)

inline static constexpr unsigned int LLBGPKEIDKO_TypeDefinitionIndex = 43856;

	class LLBGPKEIDKO
	{
	public:
		::System::Collections::Generic::List_1<::FCHFBJKLIPF*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + LLBGPKEIDKO_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::NFPPGOFECMH*>* GetTrigger(::Entitas::IContext_1<::NFPPGOFECMH*>* a1)
		{
			return ((::Entitas::ICollector_1<::NFPPGOFECMH*>*(*)(::PVOID, ::Entitas::IContext_1<::NFPPGOFECMH*>*))((::PBYTE)hIl2Cpp + LLBGPKEIDKO_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::NFPPGOFECMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFPPGOFECMH*))((::PBYTE)hIl2Cpp + LLBGPKEIDKO_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::NFPPGOFECMH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NFPPGOFECMH*>*))((::PBYTE)hIl2Cpp + LLBGPKEIDKO_EXECUTE_OFFSET))(this, a1);
		}

	};
