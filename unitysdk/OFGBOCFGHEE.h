#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFGBOCFGHEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE41550)
#define OFGBOCFGHEE_EPNEGKHHBJO_OFFSET UNITYSDK_OFFSET(0xBE41350)
#define OFGBOCFGHEE_PDAAPIILFOP_OFFSET UNITYSDK_OFFSET(0xBE414C0)

	class OFGBOCFGHEE : public ::System::Object
	{
	public:
		::System::Func_2<::System::UInt32, ::IFEABBJBIGK*>* BKEGFOPHOKL; // 0x10
		::System::Collections::Generic::List_1<::IFEABBJBIGK*>* IHAPLODILIG; // 0x18
		::System::Collections::Generic::List_1<::IFEABBJBIGK*>* GKCIFCIHJBK; // 0x20
		::System::Action* EDHFCGNFFBF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGBOCFGHEE_CTOR_OFFSET))(this);
		}

		::System::Void EPNEGKHHBJO(::IFEABBJBIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + OFGBOCFGHEE_EPNEGKHHBJO_OFFSET))(this, a1);
		}

		::System::Void PDAAPIILFOP(::System::Boolean a1, ::IFEABBJBIGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + OFGBOCFGHEE_PDAAPIILFOP_OFFSET))(this, a1, a2);
		}

	};
