#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCHICFMEANN.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CCHGIFFBECE_CTOR_OFFSET UNITYSDK_OFFSET(0xC73CE80)

	class CCHGIFFBECE : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::DCHICFMEANN>* EKDKIPEAEHK; // 0x10
		::System::Collections::Generic::IList_1<::DCHICFMEANN>* PLHIMEKGKEB; // 0x18
		::System::UInt32 FDMIEICBBNB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHGIFFBECE_CTOR_OFFSET))(this);
		}

	};
