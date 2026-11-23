#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9F68A58DDE88B4D.h"

#define F11C05DD71EACCBF_A54A625FF2ED90F7_OFFSET UNITYSDK_OFFSET(0x1F985B0)
#define F11C05DD71EACCBF_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x1F98530)
#define F11C05DD71EACCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x17086F0)

inline static constexpr unsigned int F11C05DD71EACCBF_TypeDefinitionIndex = 7948;

class F11C05DD71EACCBF : public ::E9F68A58DDE88B4D
{
public:
	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F11C05DD71EACCBF_FEBA495D7EBB1A54_OFFSET))(this);
	}

	::System::Boolean A54A625FF2ED90F7(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + F11C05DD71EACCBF_A54A625FF2ED90F7_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F11C05DD71EACCBF__CTOR_OFFSET))(this);
	}
};
