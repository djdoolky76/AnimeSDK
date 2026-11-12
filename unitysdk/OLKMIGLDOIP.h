#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBGEIKMLIFK;
class OLKMIGLDOIP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLKMIGLDOIP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC80C6B0)
#define OLKMIGLDOIP_CTOR_OFFSET UNITYSDK_OFFSET(0xC80C720)
#define OLKMIGLDOIP_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xC80C730)

inline static constexpr unsigned int OLKMIGLDOIP_TypeDefinitionIndex = 67917;

	class OLKMIGLDOIP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IBGEIKMLIFK*>* CLLOHMIFFHJ; // 0x10
		::System::Void _ctor(::System::Collections::Generic::List_1<::IBGEIKMLIFK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IBGEIKMLIFK*>*))((::PBYTE)hIl2Cpp + OLKMIGLDOIP_CTOR_OFFSET))(this, a1);
		}

		static ::OLKMIGLDOIP* BPLPBPMEODA(::System::Collections::Generic::List_1<::IBGEIKMLIFK*>* a1)
		{
			return ((::OLKMIGLDOIP*(*)(::System::Collections::Generic::List_1<::IBGEIKMLIFK*>*))((::PBYTE)hIl2Cpp + OLKMIGLDOIP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKMIGLDOIP_OKPLPEELPBC_OFFSET))(this);
		}

	};
