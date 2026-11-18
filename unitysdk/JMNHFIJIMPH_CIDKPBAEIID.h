#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMNHFIJIMPH;

#define JMNHFIJIMPH_CIDKPBAEIID_CGKGDNHLMPI_OFFSET UNITYSDK_OFFSET(0x13CCF3B0)
#define JMNHFIJIMPH_CIDKPBAEIID__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCF3A0)

inline static constexpr unsigned int JMNHFIJIMPH_CIDKPBAEIID_TypeDefinitionIndex = 60018;

class JMNHFIJIMPH_CIDKPBAEIID : public ::System::Object
{
public:
	::JMNHFIJIMPH* KLHPEBKNIFB; // 0x10
	::System::Int32 FFHBNGPOHOF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_CIDKPBAEIID__CTOR_OFFSET))(this);
	}

	::System::Void CGKGDNHLMPI(::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_CIDKPBAEIID_CGKGDNHLMPI_OFFSET))(this, BOBBHFPEPHC);
	}
};
