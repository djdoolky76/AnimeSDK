#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCMENEMPLGF_CKNMDHMICFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x136EBD80)

inline static constexpr unsigned int PCMENEMPLGF_CKNMDHMICFJ_TypeDefinitionIndex = 62850;

class PCMENEMPLGF_CKNMDHMICFJ : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* AKJHDJAMBOM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_CKNMDHMICFJ__CTOR_OFFSET))(this);
	}
};
