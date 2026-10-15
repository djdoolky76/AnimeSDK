#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CPNCJIABDNP.h"
class BANDDFEHONE;
class GEDMHFPPBHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFKAIFPGEBK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF0F540)
#define AFKAIFPGEBK_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0F9A0)

	class AFKAIFPGEBK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKAIFPGEBK_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::BANDDFEHONE*>* BPLPBPMEODA(::GEDMHFPPBHN* a1, ::System::Collections::Generic::List_1<::CPNCJIABDNP>* a2)
		{
			return ((::System::Collections::Generic::List_1<::BANDDFEHONE*>*(*)(::GEDMHFPPBHN*, ::System::Collections::Generic::List_1<::CPNCJIABDNP>*))((::PBYTE)hIl2Cpp + AFKAIFPGEBK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
