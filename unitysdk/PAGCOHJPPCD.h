#pragma once
#include "unitysdk/unitysdk.h"
class BIKACOEGFGO;
class EFHNDMENDHI;
class FDPALAEIHPB;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAGCOHJPPCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C976060)
#define PAGCOHJPPCD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C976300)
#define PAGCOHJPPCD_FILTER_OFFSET UNITYSDK_OFFSET(0x1C976200)
#define PAGCOHJPPCD_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C9760E0)

inline static constexpr unsigned int PAGCOHJPPCD_TypeDefinitionIndex = 42870;

	class PAGCOHJPPCD
	{
	public:
		::System::Collections::Generic::List_1<::BIKACOEGFGO*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + PAGCOHJPPCD_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector_1<::EFHNDMENDHI*>* GetTrigger(::Entitas::IContext_1<::EFHNDMENDHI*>* a1)
		{
			return ((::Entitas::ICollector_1<::EFHNDMENDHI*>*(*)(::PVOID, ::Entitas::IContext_1<::EFHNDMENDHI*>*))((::PBYTE)hIl2Cpp + PAGCOHJPPCD_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::EFHNDMENDHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + PAGCOHJPPCD_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::EFHNDMENDHI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EFHNDMENDHI*>*))((::PBYTE)hIl2Cpp + PAGCOHJPPCD_EXECUTE_OFFSET))(this, a1);
		}

	};
