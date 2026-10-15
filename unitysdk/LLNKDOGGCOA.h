#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLNKDOGGCOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9109C0)

	class LLNKDOGGCOA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KGKEPIJIABL; // 0x10
		::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x18
		::System::Int32 BBMMBAKDJBC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNKDOGGCOA_CTOR_OFFSET))(this);
		}

	};
