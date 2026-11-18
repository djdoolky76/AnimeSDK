#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDBADFKOFFG_KKMHMCEEAHI_AFCFGINFPLN_OFFSET UNITYSDK_OFFSET(0x10EE32E0)
#define GDBADFKOFFG_KKMHMCEEAHI__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE32D0)

inline static constexpr unsigned int GDBADFKOFFG_KKMHMCEEAHI_TypeDefinitionIndex = 74125;

class GDBADFKOFFG_KKMHMCEEAHI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FNFFKGEIJHH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_KKMHMCEEAHI__CTOR_OFFSET))(this);
	}

	::System::Boolean AFCFGINFPLN(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDBADFKOFFG_KKMHMCEEAHI_AFCFGINFPLN_OFFSET))(this, HAAEBCOBKFF);
	}
};
