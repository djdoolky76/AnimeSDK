#pragma once
#include "unitysdk/unitysdk.h"
class EFHNDMENDHI;
class FDPALAEIHPB;
class KPIPGBDLNMM;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFPCCODLANN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C852F10)
#define AFPCCODLANN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C8531B0)
#define AFPCCODLANN_FILTER_OFFSET UNITYSDK_OFFSET(0x1C8530B0)
#define AFPCCODLANN_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C852F90)

inline static constexpr unsigned int AFPCCODLANN_TypeDefinitionIndex = 42868;

	class AFPCCODLANN
	{
	public:
		::System::Collections::Generic::List_1<::KPIPGBDLNMM*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + AFPCCODLANN_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::EFHNDMENDHI*>* GetTrigger(::Entitas::IContext_1<::EFHNDMENDHI*>* a1)
		{
			return ((::Entitas::ICollector_1<::EFHNDMENDHI*>*(*)(::PVOID, ::Entitas::IContext_1<::EFHNDMENDHI*>*))((::PBYTE)hIl2Cpp + AFPCCODLANN_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::EFHNDMENDHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + AFPCCODLANN_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::EFHNDMENDHI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EFHNDMENDHI*>*))((::PBYTE)hIl2Cpp + AFPCCODLANN_EXECUTE_OFFSET))(this, a1);
		}

	};
