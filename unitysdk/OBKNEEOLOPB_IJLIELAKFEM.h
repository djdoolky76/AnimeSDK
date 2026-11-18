#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJJINBCPBKK.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBKNEEOLOPB_IJLIELAKFEM_BEJFMMOEKOF_OFFSET UNITYSDK_OFFSET(0x1B772C10)
#define OBKNEEOLOPB_IJLIELAKFEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B772C00)

inline static constexpr unsigned int OBKNEEOLOPB_IJLIELAKFEM_TypeDefinitionIndex = 83964;

class OBKNEEOLOPB_IJLIELAKFEM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::IJJINBCPBKK>* OMPNAAHKJDO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_IJLIELAKFEM__CTOR_OFFSET))(this);
	}

	::System::Void BEJFMMOEKOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_IJLIELAKFEM_BEJFMMOEKOF_OFFSET))(this);
	}
};
