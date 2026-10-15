#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;

#define LADJOPIOMCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71FB10)
#define LADJOPIOMCP_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C71FB20)

inline static constexpr unsigned int LADJOPIOMCP_TypeDefinitionIndex = 37397;

	class LADJOPIOMCP : public ::GPLOFONGBGI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LADJOPIOMCP_CTOR_OFFSET))(this);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + LADJOPIOMCP_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
