#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CFBKOBNELJD_ACMHCDIKBLI_OFFSET UNITYSDK_OFFSET(0x145B2670)
#define CFBKOBNELJD_CCOOGKNIJKK_OFFSET UNITYSDK_OFFSET(0x145B2610)
#define CFBKOBNELJD_ELKMGMLMEAB_OFFSET UNITYSDK_OFFSET(0x145B2600)
#define CFBKOBNELJD_EOLODOPAPNK_OFFSET UNITYSDK_OFFSET(0x145B2680)
#define CFBKOBNELJD_FOENMEIDMMN_OFFSET UNITYSDK_OFFSET(0x145B25E0)
#define CFBKOBNELJD_HBMJPMOFAEN_OFFSET UNITYSDK_OFFSET(0x145B2690)
#define CFBKOBNELJD_KBDFDLPHFEI_OFFSET UNITYSDK_OFFSET(0x145B25F0)
#define CFBKOBNELJD_KPOBDALOEFO_OFFSET UNITYSDK_OFFSET(0x145B2700)
#define CFBKOBNELJD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x145B2580)
#define CFBKOBNELJD_POBNIMHDAOP_OFFSET UNITYSDK_OFFSET(0x145B2630)
#define CFBKOBNELJD__CTOR_OFFSET UNITYSDK_OFFSET(0x145B2520)

inline static constexpr unsigned int CFBKOBNELJD_TypeDefinitionIndex = 44496;

class CFBKOBNELJD : public ::System::Object
{
public:
	::System::String* _GGPLJFMHECO_k__BackingField; // 0x10
	::System::String* _CHCOGBLHBMP_k__BackingField; // 0x18
	::System::Boolean _OIIHOBMDNPP_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBKOBNELJD__CTOR_OFFSET))(this);
	}

	::System::String* FOENMEIDMMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBKOBNELJD_FOENMEIDMMN_OFFSET))(this);
	}

	::System::Void KBDFDLPHFEI(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFBKOBNELJD_KBDFDLPHFEI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBKOBNELJD_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::String* ELKMGMLMEAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBKOBNELJD_ELKMGMLMEAB_OFFSET))(this);
	}

	::System::Boolean CCOOGKNIJKK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBKOBNELJD_CCOOGKNIJKK_OFFSET))(this);
	}

	::System::Void POBNIMHDAOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBKOBNELJD_POBNIMHDAOP_OFFSET))(this);
	}

	::System::Void ACMHCDIKBLI(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFBKOBNELJD_ACMHCDIKBLI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean EOLODOPAPNK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBKOBNELJD_EOLODOPAPNK_OFFSET))(this);
	}

	::System::Void HBMJPMOFAEN(::System::String* MCOHLHMKLIP, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CFBKOBNELJD_HBMJPMOFAEN_OFFSET))(this, MCOHLHMKLIP, AELLPLBJELA);
	}

	::System::Void KPOBDALOEFO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFBKOBNELJD_KPOBDALOEFO_OFFSET))(this, EGEGIMGMJHN);
	}
};
