#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPHKGPCGIDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1263E7A0)
#define DPHKGPCGIDB_KMHHKMENOEH_OFFSET UNITYSDK_OFFSET(0x1263E670)

	class DPHKGPCGIDB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHKGPCGIDB_CTOR_OFFSET))(this);
		}

		::System::Void KMHHKMENOEH(::System::Collections::Generic::List_1<::AOBICCEGAMM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AOBICCEGAMM*>*))((::PBYTE)hIl2Cpp + DPHKGPCGIDB_KMHHKMENOEH_OFFSET))(this, a1);
		}

	};
