#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMKLOAIMPNK.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIIPPLFGOEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x158B1D10)

inline static constexpr unsigned int EIIPPLFGOEJ_TypeDefinitionIndex = 73189;

class EIIPPLFGOEJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GMKLOAIMPNK>* PAALGICAION; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIPPLFGOEJ__CTOR_OFFSET))(this);
	}
};
