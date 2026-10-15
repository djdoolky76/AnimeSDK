#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOLJEIINPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x158F8230)
#define FOLJEIINPBC_KMHHKMENOEH_OFFSET UNITYSDK_OFFSET(0x158F7E50)

	class FOLJEIINPBC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLJEIINPBC_CTOR_OFFSET))(this);
		}

		::System::Void KMHHKMENOEH(::System::Collections::Generic::List_1<::AOBICCEGAMM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AOBICCEGAMM*>*))((::PBYTE)hIl2Cpp + FOLJEIINPBC_KMHHKMENOEH_OFFSET))(this, a1);
		}

	};
