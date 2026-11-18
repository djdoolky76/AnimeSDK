#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Track; }

#define CAEGMKPAGDF_JCOOCMABPOL_OFFSET UNITYSDK_OFFSET(0x14591FB0)
#define CAEGMKPAGDF_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x14592020)
#define CAEGMKPAGDF_ONFBLIJJKBE_OFFSET UNITYSDK_OFFSET(0x14592010)
#define CAEGMKPAGDF__CTOR_OFFSET UNITYSDK_OFFSET(0x14591FA0)

inline static constexpr unsigned int CAEGMKPAGDF_TypeDefinitionIndex = 53887;

class CAEGMKPAGDF : public ::System::Object
{
public:
	::MoleMole::Track* MEMBKNEHDDF; // 0x10
	::System::Int32 _EGBKMJIFEKN_k__BackingField; // 0x18

	::System::Void _ctor(::MoleMole::Track* PGFEIBALIMO, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Track*, ::System::Int32))((::PBYTE)hIl2Cpp + CAEGMKPAGDF__CTOR_OFFSET))(this, PGFEIBALIMO, ABHBKFJKINO);
	}

	::System::Int32 JCOOCMABPOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEGMKPAGDF_JCOOCMABPOL_OFFSET))(this);
	}

	::System::Void ONFBLIJJKBE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAEGMKPAGDF_ONFBLIJJKBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEGMKPAGDF_MDLLGIMAGCP_OFFSET))(this);
	}
};
