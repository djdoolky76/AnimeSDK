#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class LDFALPJPFEB;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBEPIIGJDKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C934DA0)
#define NBEPIIGJDKP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C935040)
#define NBEPIIGJDKP_FILTER_OFFSET UNITYSDK_OFFSET(0x1C934F40)
#define NBEPIIGJDKP_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C934E20)

	class NBEPIIGJDKP
	{
	public:
		::System::Collections::Generic::List_1<::LDFALPJPFEB*>* BGKHCJPFFLN; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + NBEPIIGJDKP_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + NBEPIIGJDKP_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + NBEPIIGJDKP_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + NBEPIIGJDKP_EXECUTE_OFFSET))(this, a1);
		}

	};
