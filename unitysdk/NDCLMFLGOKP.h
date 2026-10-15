#pragma once
#include "unitysdk/unitysdk.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class PDADGGHNJKF;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace Entitas { class IGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDCLMFLGOKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C943A20)
#define NDCLMFLGOKP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C943D20)
#define NDCLMFLGOKP_FILTER_OFFSET UNITYSDK_OFFSET(0x1C943C70)
#define NDCLMFLGOKP_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C943B50)

	class NDCLMFLGOKP
	{
	public:
		::Entitas::IGroup* PMBNNOOFAOM; // 0x28
		::System::Collections::Generic::List_1<::PDADGGHNJKF*>* BGKHCJPFFLN; // 0x30
		::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* DBNOOEHAEAC; // 0x38
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + NDCLMFLGOKP_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + NDCLMFLGOKP_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + NDCLMFLGOKP_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + NDCLMFLGOKP_EXECUTE_OFFSET))(this, a1);
		}

	};
