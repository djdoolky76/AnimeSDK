#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ECNHBEICOOD_IEKLALPJGFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A197AD0)

inline static constexpr unsigned int ECNHBEICOOD_IEKLALPJGFC_TypeDefinitionIndex = 13224;

class ECNHBEICOOD_IEKLALPJGFC : public ::System::Object
{
public:
	::System::Int32 LPDMJMCGKMB; // 0x10
	::System::Int32 DNFMELHMLBJ; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNHBEICOOD_IEKLALPJGFC__CTOR_OFFSET))(this);
	}
};
