#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCMENEMPLGF_BEAFPLOGDFL_INHKKMAPCEN_OFFSET UNITYSDK_OFFSET(0x14B90BC0)
#define PCMENEMPLGF_BEAFPLOGDFL__CTOR_OFFSET UNITYSDK_OFFSET(0x14B81B00)

inline static constexpr unsigned int PCMENEMPLGF_BEAFPLOGDFL_TypeDefinitionIndex = 62839;

class PCMENEMPLGF_BEAFPLOGDFL : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* AGALGLPBKFM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_BEAFPLOGDFL__CTOR_OFFSET))(this);
	}

	::System::Void INHKKMAPCEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_BEAFPLOGDFL_INHKKMAPCEN_OFFSET))(this);
	}
};
