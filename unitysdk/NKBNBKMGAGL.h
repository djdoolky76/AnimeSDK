#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOIMINJPFHO;
class DIHNHHLDLDP;
class EGKEOOLLFGO;

#define NKBNBKMGAGL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1DA15C10)
#define NKBNBKMGAGL_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1DA15C60)
#define NKBNBKMGAGL_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1DA15C00)
#define NKBNBKMGAGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15D00)

inline static constexpr unsigned int NKBNBKMGAGL_TypeDefinitionIndex = 93534;

class NKBNBKMGAGL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBNBKMGAGL__CTOR_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBNBKMGAGL_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::EGKEOOLLFGO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EGKEOOLLFGO*))((::PBYTE)hIl2Cpp + NKBNBKMGAGL_BBOMJDBNHIC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean FCFOEJGPDNO(::System::Single PMNLNNGEIFM, ::AOIMINJPFHO* MPCFCIMLKEG, ::System::Int32 GCFDHEFHCAJ, ::DIHNHHLDLDP* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::AOIMINJPFHO*, ::System::Int32, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + NKBNBKMGAGL_FCFOEJGPDNO_OFFSET))(this, PMNLNNGEIFM, MPCFCIMLKEG, GCFDHEFHCAJ, AAOCANGHBDG);
	}
};
