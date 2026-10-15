#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDPMIHGIFDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ECAB0)

	class PDPMIHGIFDP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* GPLAFNGCCMA; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* LGKPONDOKJC; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* HJFGABKPGHD; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* NOPNDBOAOMN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPMIHGIFDP_CTOR_OFFSET))(this);
		}

	};
