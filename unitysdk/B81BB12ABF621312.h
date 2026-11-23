#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F46674751C3D74BD.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define B81BB12ABF621312__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B81BB12ABF621312_TypeDefinitionIndex = 1992;

class B81BB12ABF621312 : public ::F46674751C3D74BD
{
public:
	::System::UInt32 E21B3114ADEEE8A1; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* E0DE4FEE54C82858; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B81BB12ABF621312__CTOR_OFFSET))(this);
	}
};
