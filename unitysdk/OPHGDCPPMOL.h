#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CEPPDEPBFOF;

#define OPHGDCPPMOL_MEKAAKPLGDJ_OFFSET UNITYSDK_OFFSET(0x16C4B830)
#define OPHGDCPPMOL_PCLABHFNEGJ_OFFSET UNITYSDK_OFFSET(0x16C4B690)

inline static constexpr unsigned int OPHGDCPPMOL_TypeDefinitionIndex = 92232;

class OPHGDCPPMOL : public ::System::Object
{
public:
	static ::System::Boolean PCLABHFNEGJ(::CEPPDEPBFOF* IBFBPJPKNJN)
	{
		return ((::System::Boolean(*)(::CEPPDEPBFOF*))((::PBYTE)hIl2Cpp + OPHGDCPPMOL_PCLABHFNEGJ_OFFSET))(IBFBPJPKNJN);
	}

	static ::System::Boolean MEKAAKPLGDJ(::CEPPDEPBFOF* IBFBPJPKNJN)
	{
		return ((::System::Boolean(*)(::CEPPDEPBFOF*))((::PBYTE)hIl2Cpp + OPHGDCPPMOL_MEKAAKPLGDJ_OFFSET))(IBFBPJPKNJN);
	}
};
