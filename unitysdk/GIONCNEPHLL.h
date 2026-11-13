#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;

#define GIONCNEPHLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA520A0)
#define GIONCNEPHLL_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1AA520B0)
#define GIONCNEPHLL_HOOOAOJAMMO_OFFSET UNITYSDK_OFFSET(0x1AA521A0)
#define GIONCNEPHLL_JBHPPGJGBPI_OFFSET UNITYSDK_OFFSET(0x1AA52300)

inline static constexpr unsigned int GIONCNEPHLL_TypeDefinitionIndex = 38324;

	class GIONCNEPHLL : public ::GPLOFONGBGI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIONCNEPHLL_CTOR_OFFSET))(this);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + GIONCNEPHLL_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOOOAOJAMMO(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + GIONCNEPHLL_HOOOAOJAMMO_OFFSET))(this, a1, a2);
		}

		::System::Void JBHPPGJGBPI(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + GIONCNEPHLL_JBHPPGJGBPI_OFFSET))(this, a1, a2);
		}

	};
