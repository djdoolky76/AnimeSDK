#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DOCOCMBKEAK_OPMEEOPECFN_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x10F17810)
#define DOCOCMBKEAK_OPMEEOPECFN__CTOR_OFFSET UNITYSDK_OFFSET(0x10F17700)

inline static constexpr unsigned int DOCOCMBKEAK_OPMEEOPECFN_TypeDefinitionIndex = 73447;

class DOCOCMBKEAK_OPMEEOPECFN : public ::System::Object
{
public:
	::System::String* AELLPLBJELA; // 0x10
	::System::Int32 COMDNFILAIC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCOCMBKEAK_OPMEEOPECFN__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCOCMBKEAK_OPMEEOPECFN_LIDNPLMPHAL_OFFSET))(this);
	}
};
