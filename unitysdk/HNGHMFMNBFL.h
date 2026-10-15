#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGIKHLJJMH.h"
#include "unitysdk/System/Object.h"

#define HNGHMFMNBFL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAF3040)
#define HNGHMFMNBFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF30A0)

	class HNGHMFMNBFL : public ::System::Object
	{
	public:
		::DBGIKHLJJMH CNLHCKELLBE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGHMFMNBFL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGHMFMNBFL_CLEAR_OFFSET))(this);
		}

	};
