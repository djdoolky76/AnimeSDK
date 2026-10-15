#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKLMMFFKNFH;
namespace System::Collections { class IList; }

#define JKLMMFFKNFH_JJDJLINOCEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB220450)
#define JKLMMFFKNFH_JJDJLINOCEC_PALJGILOAND_OFFSET UNITYSDK_OFFSET(0xB220460)

	class JKLMMFFKNFH_JJDJLINOCEC : public ::System::Object
	{
	public:
		::JKLMMFFKNFH* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::JKLMMFFKNFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKLMMFFKNFH*))((::PBYTE)hIl2Cpp + JKLMMFFKNFH_JJDJLINOCEC_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::IList* PALJGILOAND()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLMMFFKNFH_JJDJLINOCEC_PALJGILOAND_OFFSET))(this);
		}

	};
