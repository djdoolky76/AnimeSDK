#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHCJOCFIOLG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C960E00)
#define NHCJOCFIOLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C960E60)

	class NHCJOCFIOLG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HNGCINHIGJD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCJOCFIOLG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCJOCFIOLG_CLEAR_OFFSET))(this);
		}

	};
