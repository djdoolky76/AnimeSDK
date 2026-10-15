#pragma once
#include "unitysdk/unitysdk.h"
class FAHKECADCOF;
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace Entitas { class ICollector; }
namespace Entitas { class IContext; }
namespace Entitas { class IGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOALGMJMKOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C974770)
#define NOALGMJMKOF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C974A70)
#define NOALGMJMKOF_FILTER_OFFSET UNITYSDK_OFFSET(0x1C9749C0)
#define NOALGMJMKOF_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C9748A0)

inline static constexpr unsigned int NOALGMJMKOF_TypeDefinitionIndex = 42865;

	class NOALGMJMKOF
	{
	public:
		::System::Collections::Generic::List_1<::FAHKECADCOF*>* BGKHCJPFFLN; // 0x28
		::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* DBNOOEHAEAC; // 0x30
		::Entitas::IGroup* PMBNNOOFAOM; // 0x38
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + NOALGMJMKOF_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ICollector* GetTrigger(::Entitas::IContext* a1)
		{
			return ((::Entitas::ICollector*(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + NOALGMJMKOF_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::KHPOKIKCOFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + NOALGMJMKOF_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHPOKIKCOFO*>*))((::PBYTE)hIl2Cpp + NOALGMJMKOF_EXECUTE_OFFSET))(this, a1);
		}

	};
