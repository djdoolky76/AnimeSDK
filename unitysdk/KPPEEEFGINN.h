#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define KPPEEEFGINN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15177360)
#define KPPEEEFGINN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x151773C0)
#define KPPEEEFGINN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x151772D0)
#define KPPEEEFGINN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15177250)
#define KPPEEEFGINN__CTOR_OFFSET UNITYSDK_OFFSET(0x151772C0)

inline static constexpr unsigned int KPPEEEFGINN_TypeDefinitionIndex = 53390;

class KPPEEEFGINN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x50; // 0x0
	::System::String* DHDGNLCIOCJ; // 0x20
	::System::String* IMJICPPKKHD; // 0x28
	::System::Int32 JMGAJJDODNG; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPPEEEFGINN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPEEEFGINN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPEEEFGINN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* MCOHLHMKLIP, ::System::String* NAPFALLANDL, ::System::Int32 LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KPPEEEFGINN_CNHBDOMKKDE_OFFSET))(this, MCOHLHMKLIP, NAPFALLANDL, LJBPECKCCEA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPEEEFGINN_FIGPAOKNJLN_OFFSET))(this);
	}
};
