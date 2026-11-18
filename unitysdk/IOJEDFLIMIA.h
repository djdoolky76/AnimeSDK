#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define IOJEDFLIMIA__CTOR_OFFSET UNITYSDK_OFFSET(0x160C0B10)

inline static constexpr unsigned int IOJEDFLIMIA_TypeDefinitionIndex = 56100;

class IOJEDFLIMIA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AMFEBBAONEM; // 0x10
	::System::Boolean MPIBADCKIDP; // 0x18
	::System::Boolean AMIBAOEFAEB; // 0x19
	::System::Boolean DLJKOBCPEJK; // 0x1A
	::System::Boolean MCGCALCKJGG; // 0x1B
	::System::Boolean GKBPPPBNAEK; // 0x1C
	::System::Boolean PKCPFOBEPAD; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJEDFLIMIA__CTOR_OFFSET))(this);
	}
};
