#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKMNJFFMIFK.h"
#include "unitysdk/FMPCODLIOLG.h"
class CKMNJCKACJB;
class JPKECMHCCFH_BHECCKJNBPJ;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPKECMHCCFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C6130)
#define JPKECMHCCFH_DDEIBMEBFND_OFFSET UNITYSDK_OFFSET(0xB2C5D80)
#define JPKECMHCCFH_LEEIHAAIGCB_OFFSET UNITYSDK_OFFSET(0xB2C5EE0)
#define JPKECMHCCFH_PMOHEADFDOH_OFFSET UNITYSDK_OFFSET(0xB2C5D10)
#define JPKECMHCCFH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2C59A0)

	class JPKECMHCCFH : public ::FMPCODLIOLG
	{
	public:
		::JPKECMHCCFH_BHECCKJNBPJ* NCODOADGHHG; // 0x60
		::System::Collections::Generic::Dictionary_2<::DKMNJFFMIFK, ::System::Object*>* JNLOPNECCDP; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH__ONBIND_OFFSET))(this);
		}

		::System::Void PMOHEADFDOH(::CKMNJCKACJB* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*, ::System::Action*))((::PBYTE)hIl2Cpp + JPKECMHCCFH_PMOHEADFDOH_OFFSET))(this, a1, a2);
		}

		::System::Void LEEIHAAIGCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKECMHCCFH_LEEIHAAIGCB_OFFSET))(this);
		}

		::JPKECMHCCFH_BHECCKJNBPJ* DDEIBMEBFND(::CKMNJCKACJB* a1)
		{
			return ((::JPKECMHCCFH_BHECCKJNBPJ*(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + JPKECMHCCFH_DDEIBMEBFND_OFFSET))(this, a1);
		}

	};
