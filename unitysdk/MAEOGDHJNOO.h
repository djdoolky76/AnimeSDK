#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;

#define MAEOGDHJNOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7188C0)
#define MAEOGDHJNOO_FCFANMPPCHO_OFFSET UNITYSDK_OFFSET(0x1C718CE0)
#define MAEOGDHJNOO_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C7188D0)
#define MAEOGDHJNOO_GEIOFJHFDDI_OFFSET UNITYSDK_OFFSET(0x1C718980)

inline static constexpr unsigned int MAEOGDHJNOO_TypeDefinitionIndex = 37389;

	class MAEOGDHJNOO : public ::GPLOFONGBGI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEOGDHJNOO_CTOR_OFFSET))(this);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + MAEOGDHJNOO_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GEIOFJHFDDI(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MAEOGDHJNOO_GEIOFJHFDDI_OFFSET))(this, a1, a2);
		}

		::System::Void FCFANMPPCHO(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MAEOGDHJNOO_FCFANMPPCHO_OFFSET))(this, a1, a2);
		}

	};
