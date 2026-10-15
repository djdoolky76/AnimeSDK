#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHOKPKHPKCH_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE5FB0)
#define DHOKPKHPKCH_EPNEGKHHBJO_OFFSET UNITYSDK_OFFSET(0xEBE5DB0)
#define DHOKPKHPKCH_PDAAPIILFOP_OFFSET UNITYSDK_OFFSET(0xEBE5F20)

inline static constexpr unsigned int DHOKPKHPKCH_TypeDefinitionIndex = 76570;

	class DHOKPKHPKCH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IFEABBJBIGK*>* GKCIFCIHJBK; // 0x10
		::System::Func_3<::System::UInt32, ::System::Boolean, ::IFEABBJBIGK*>* BKEGFOPHOKL; // 0x18
		::System::Action* EDHFCGNFFBF; // 0x20
		::System::Collections::Generic::List_1<::IFEABBJBIGK*>* IHAPLODILIG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOKPKHPKCH_CTOR_OFFSET))(this);
		}

		::System::Void EPNEGKHHBJO(::IFEABBJBIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + DHOKPKHPKCH_EPNEGKHHBJO_OFFSET))(this, a1);
		}

		::System::Void PDAAPIILFOP(::System::Boolean a1, ::IFEABBJBIGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + DHOKPKHPKCH_PDAAPIILFOP_OFFSET))(this, a1, a2);
		}

	};
