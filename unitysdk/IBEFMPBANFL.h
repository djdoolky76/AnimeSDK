#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDJGBFMADIB;

#define IBEFMPBANFL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB071A0)
#define IBEFMPBANFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB07220)

	class IBEFMPBANFL : public ::System::Object
	{
	public:
		::DDJGBFMADIB* BPAPBAFOMCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEFMPBANFL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEFMPBANFL_CLEAR_OFFSET))(this);
		}

	};
