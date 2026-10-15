#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMMPOONMOII_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13220)

	class CMMPOONMOII : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* OBKPEMIPDDL; // 0x10
		::System::UInt32 FCFGHOHHJLE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMPOONMOII_CTOR_OFFSET))(this);
		}

	};
