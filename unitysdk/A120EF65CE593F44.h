#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A68FD843E1A2D355.h"
#include "unitysdk/E517049D5334F9A0.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define A120EF65CE593F44_AB7FC29FAD61FA27_OFFSET UNITYSDK_OFFSET(0x26CFE70)
#define A120EF65CE593F44__CTOR_OFFSET UNITYSDK_OFFSET(0x26D01E0)

inline static constexpr unsigned int A120EF65CE593F44_TypeDefinitionIndex = 6644;

class A120EF65CE593F44 : public ::A68FD843E1A2D355
{
public:
	::System::Collections::Generic::List_1<::E517049D5334F9A0>* AB7FC29FAD61FA27()
	{
		return ((::System::Collections::Generic::List_1<::E517049D5334F9A0>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A120EF65CE593F44_AB7FC29FAD61FA27_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A120EF65CE593F44__CTOR_OFFSET))(this);
	}
};
