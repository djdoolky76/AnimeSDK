#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class EventArgs; }

#define MIGGDEONEFA_KLEPGMOAIFJ_OFFSET UNITYSDK_OFFSET(0x1318F2D0)
#define MIGGDEONEFA_NMOIGFNOCBP_OFFSET UNITYSDK_OFFSET(0x1318F1F0)
#define MIGGDEONEFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1318EEC0)
#define MIGGDEONEFA_OLHLMLADDAD_OFFSET UNITYSDK_OFFSET(0x1318F810)
#define MIGGDEONEFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1318F290)

inline static constexpr unsigned int MIGGDEONEFA_TypeDefinitionIndex = 93245;

class MIGGDEONEFA : public ::BBKFNNHAKBP
{
public:
	::System::Int32 FNLGDLHAEGD; // 0x38
	::System::Int32 PHNAGOHEDLK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGGDEONEFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGGDEONEFA_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Boolean KLEPGMOAIFJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGGDEONEFA_KLEPGMOAIFJ_OFFSET))(this);
	}

	::System::Void NMOIGFNOCBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGGDEONEFA_NMOIGFNOCBP_OFFSET))(this);
	}

	::System::Void OLHLMLADDAD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MIGGDEONEFA_OLHLMLADDAD_OFFSET))(this, KOIBHLHLMFC);
	}
};
