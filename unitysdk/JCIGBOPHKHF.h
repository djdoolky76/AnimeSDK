#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMIIBJINHNI;
class IBFPIDMKFCB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCIGBOPHKHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C550C60)

	class JCIGBOPHKHF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IBFPIDMKFCB*>* NPBAMLDKGIN; // 0x10
		::DMIIBJINHNI* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIGBOPHKHF_CTOR_OFFSET))(this);
		}

	};
