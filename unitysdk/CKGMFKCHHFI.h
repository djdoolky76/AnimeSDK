#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKGMFKCHHFI_CTOR_OFFSET UNITYSDK_OFFSET(0xD75AD60)
#define CKGMFKCHHFI_KMHHKMENOEH_OFFSET UNITYSDK_OFFSET(0xD75AA90)

	class CKGMFKCHHFI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKGMFKCHHFI_CTOR_OFFSET))(this);
		}

		::System::Void KMHHKMENOEH(::System::Collections::Generic::List_1<::AOBICCEGAMM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AOBICCEGAMM*>*))((::PBYTE)hIl2Cpp + CKGMFKCHHFI_KMHHKMENOEH_OFFSET))(this, a1);
		}

	};
