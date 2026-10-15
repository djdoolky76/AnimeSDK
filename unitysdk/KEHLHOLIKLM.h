#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEHLHOLIKLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB7CE0)

	class KEHLHOLIKLM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* KPJHIOKBJEI; // 0x10
		::System::ValueTuple LBMFPCIBMAC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHLHOLIKLM_CTOR_OFFSET))(this);
		}

	};
