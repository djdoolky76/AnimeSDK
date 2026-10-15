#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAGJHEBNJD;
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOBFCPPBLFD_OJJBBMBLBGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE4E00)
#define NOBFCPPBLFD_OJJBBMBLBGH_GET_PROMISE_OFFSET UNITYSDK_OFFSET(0xBCE5590)
#define NOBFCPPBLFD_OJJBBMBLBGH_GET_QUERYLIST_OFFSET UNITYSDK_OFFSET(0xBCE5570)
#define NOBFCPPBLFD_OJJBBMBLBGH_SET_PROMISE_OFFSET UNITYSDK_OFFSET(0xBCE55A0)
#define NOBFCPPBLFD_OJJBBMBLBGH_SET_QUERYLIST_OFFSET UNITYSDK_OFFSET(0xBCE5580)

inline static constexpr unsigned int NOBFCPPBLFD_OJJBBMBLBGH_TypeDefinitionIndex = 66744;

	class NOBFCPPBLFD_OJJBBMBLBGH : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _Promise_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::NNAGJHEBNJD*>* _QueryList_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_OJJBBMBLBGH_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NNAGJHEBNJD*>* get_QueryList()
		{
			return ((::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_OJJBBMBLBGH_GET_QUERYLIST_OFFSET))(this);
		}

		::System::Void set_QueryList(::System::Collections::Generic::List_1<::NNAGJHEBNJD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_OJJBBMBLBGH_SET_QUERYLIST_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* get_Promise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_OJJBBMBLBGH_GET_PROMISE_OFFSET))(this);
		}

		::System::Void set_Promise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + NOBFCPPBLFD_OJJBBMBLBGH_SET_PROMISE_OFFSET))(this, a1);
		}

	};
