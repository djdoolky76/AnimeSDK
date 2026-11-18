#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define DPOMFNAMOEN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xFDCD260)
#define DPOMFNAMOEN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xFDCD2C0)
#define DPOMFNAMOEN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xFDCD1D0)
#define DPOMFNAMOEN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xFDCD350)
#define DPOMFNAMOEN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFDCD0B0)
#define DPOMFNAMOEN__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDCD140)
#define DPOMFNAMOEN__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCD1B0)

inline static constexpr unsigned int DPOMFNAMOEN_TypeDefinitionIndex = 88425;

class DPOMFNAMOEN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD1; // 0x0
	::System::String* CBHOLKMHFAH; // 0x20
	::System::Int32 OMEKLHOFFEM; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPOMFNAMOEN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOMFNAMOEN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOMFNAMOEN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOMFNAMOEN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* AMJIHFDPIFH, ::System::Int32 IENMHKHBDHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DPOMFNAMOEN_CNHBDOMKKDE_OFFSET))(this, AMJIHFDPIFH, IENMHKHBDHA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOMFNAMOEN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOMFNAMOEN_OHFHFOHMBJH_OFFSET))(this);
	}
};
