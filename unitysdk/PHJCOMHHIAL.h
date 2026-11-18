#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOMIAKABNMB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHJCOMHHIAL_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0x1197D2E0)
#define PHJCOMHHIAL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1197D470)
#define PHJCOMHHIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1197D230)

inline static constexpr unsigned int PHJCOMHHIAL_TypeDefinitionIndex = 84774;

class PHJCOMHHIAL : public ::System::Object
{
public:
	// static const ::System::Int32 KACOJPIAJGN = 0x3; // 0x0
	::System::Collections::Generic::List_1<::DOMIAKABNMB*>* HKPIMPPJLFE; // 0x10
	::System::Collections::Generic::List_1<::DOMIAKABNMB*>* DCBBOJCFFHF; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MMDGEDFBIEG; // 0x20
	::System::Boolean AMJMOFDGMFI; // 0x28
	::System::Boolean MKAPKNGCCJH; // 0x29
	::System::Byte _padding0[0x2];
	::System::Int32 MJDDBECGLKI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJCOMHHIAL__CTOR_OFFSET))(this);
	}

	::System::Void JCFJOKPIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJCOMHHIAL_JCFJOKPIFPL_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJCOMHHIAL_PHOADBJGFBE_OFFSET))(this);
	}
};
