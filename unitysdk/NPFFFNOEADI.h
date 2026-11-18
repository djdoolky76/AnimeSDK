#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGJFDPBLDDF;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NPFFFNOEADI_GAHJFNJMCMA_OFFSET UNITYSDK_OFFSET(0x14F3FC50)
#define NPFFFNOEADI__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3FB90)

inline static constexpr unsigned int NPFFFNOEADI_TypeDefinitionIndex = 47275;

class NPFFFNOEADI : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::AGJFDPBLDDF*>* EGENKJPKJEI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFFFNOEADI__CTOR_OFFSET))(this);
	}

	::System::Void GAHJFNJMCMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFFFNOEADI_GAHJFNJMCMA_OFFSET))(this);
	}
};
