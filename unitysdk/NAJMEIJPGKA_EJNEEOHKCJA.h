#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMGJAMPDNJI.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define NAJMEIJPGKA_EJNEEOHKCJA_LOOONOFDPKP_OFFSET UNITYSDK_OFFSET(0x12C35EF0)
#define NAJMEIJPGKA_EJNEEOHKCJA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C35EE0)

inline static constexpr unsigned int NAJMEIJPGKA_EJNEEOHKCJA_TypeDefinitionIndex = 74988;

class NAJMEIJPGKA_EJNEEOHKCJA : public ::System::Object
{
public:
	::System::Func_2<::AMGJAMPDNJI, ::System::Boolean>* FJDOCPKEACA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJMEIJPGKA_EJNEEOHKCJA__CTOR_OFFSET))(this);
	}

	::System::Boolean LOOONOFDPKP(::AMGJAMPDNJI MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMGJAMPDNJI))((::PBYTE)hIl2Cpp + NAJMEIJPGKA_EJNEEOHKCJA_LOOONOFDPKP_OFFSET))(this, MOBNMDEDJIP);
	}
};
