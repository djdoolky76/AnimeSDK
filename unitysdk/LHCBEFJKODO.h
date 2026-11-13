#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPBDBGGFODF;
class LHHBMBIDKIC;
class MBEBBDIPMKK;
class MINAKLCBJMO;
class OBJANKHLNGO;

#define LHCBEFJKODO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB89B0)
#define LHCBEFJKODO_DHJPLNJCMCN_OFFSET UNITYSDK_OFFSET(0x1BCB8B10)
#define LHCBEFJKODO_IKJAJANLNBL_OFFSET UNITYSDK_OFFSET(0x1BCB8A70)

inline static constexpr unsigned int LHCBEFJKODO_TypeDefinitionIndex = 84889;

	class LHCBEFJKODO : public ::System::Object
	{
	public:
		::LHHBMBIDKIC* LDGFHGDKLIE; // 0x10
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x18
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::System::Void _ctor(::LHHBMBIDKIC* a1, ::MINAKLCBJMO* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LHHBMBIDKIC*, ::MINAKLCBJMO*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + LHCBEFJKODO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::HPBDBGGFODF* IKJAJANLNBL()
		{
			return ((::HPBDBGGFODF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBEFJKODO_IKJAJANLNBL_OFFSET))(this);
		}

		::MBEBBDIPMKK* DHJPLNJCMCN()
		{
			return ((::MBEBBDIPMKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBEFJKODO_DHJPLNJCMCN_OFFSET))(this);
		}

	};
