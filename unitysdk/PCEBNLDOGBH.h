#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;

#define PCEBNLDOGBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BD2A0)
#define PCEBNLDOGBH_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C7BD2B0)

inline static constexpr unsigned int PCEBNLDOGBH_TypeDefinitionIndex = 37384;

	class PCEBNLDOGBH : public ::GPLOFONGBGI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEBNLDOGBH_CTOR_OFFSET))(this);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + PCEBNLDOGBH_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
