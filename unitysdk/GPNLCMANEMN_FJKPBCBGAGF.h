#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPNLCMANEMN;
namespace System { class String; }

#define GPNLCMANEMN_FJKPBCBGAGF__CTOR_OFFSET UNITYSDK_OFFSET(0x149F5AA0)

inline static constexpr unsigned int GPNLCMANEMN_FJKPBCBGAGF_TypeDefinitionIndex = 39840;

class GPNLCMANEMN_FJKPBCBGAGF : public ::System::Object
{
public:
	::GPNLCMANEMN* KLHPEBKNIFB; // 0x10
	::System::String* OLOMNNBBHPJ; // 0x18
	::System::Boolean DOFCLPCLHOJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLCMANEMN_FJKPBCBGAGF__CTOR_OFFSET))(this);
	}
};
