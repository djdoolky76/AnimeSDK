#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AHGFNANCLDH_JJPPAHLOBEA_CKHDHMKJIJP_OFFSET UNITYSDK_OFFSET(0x154F8E50)
#define AHGFNANCLDH_JJPPAHLOBEA_LPDECIMPMBB_OFFSET UNITYSDK_OFFSET(0x154F8F50)
#define AHGFNANCLDH_JJPPAHLOBEA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x154F8DE0)
#define AHGFNANCLDH_JJPPAHLOBEA__CTOR_OFFSET UNITYSDK_OFFSET(0x154F8D80)

inline static constexpr unsigned int AHGFNANCLDH_JJPPAHLOBEA_TypeDefinitionIndex = 89980;

class AHGFNANCLDH_JJPPAHLOBEA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CDMBEOFBKCL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGFNANCLDH_JJPPAHLOBEA__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGFNANCLDH_JJPPAHLOBEA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Int32 CKHDHMKJIJP(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHGFNANCLDH_JJPPAHLOBEA_CKHDHMKJIJP_OFFSET))(this, OIKFFGKDHME);
	}

	::System::Void LPDECIMPMBB(::System::Collections::Generic::List_1<::System::Int32>* FGIJGLMKNBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AHGFNANCLDH_JJPPAHLOBEA_LPDECIMPMBB_OFFSET))(this, FGIJGLMKNBB);
	}
};
