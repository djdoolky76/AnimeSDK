#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GHMFHCBMFHD_CDHGLODBFFK_OFFSET UNITYSDK_OFFSET(0x179F0D60)
#define GHMFHCBMFHD__CTOR_OFFSET UNITYSDK_OFFSET(0x179F0D50)

inline static constexpr unsigned int GHMFHCBMFHD_TypeDefinitionIndex = 70446;

class GHMFHCBMFHD : public ::System::Object
{
public:
	::System::Int32 OKGEKIAGBJA; // 0x10

	::System::Void _ctor(::System::Int32 OKGEKIAGBJA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHMFHCBMFHD__CTOR_OFFSET))(this, OKGEKIAGBJA);
	}

	::System::Int32 CDHGLODBFFK(::System::Int32 IPIAGCPNDBB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHMFHCBMFHD_CDHGLODBFFK_OFFSET))(this, IPIAGCPNDBB);
	}
};
