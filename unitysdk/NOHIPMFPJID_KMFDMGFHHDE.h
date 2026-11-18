#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOHIPMFPJID_PDNEMLJECOI;
template <typename T> class KLIOMMIOFDC_1;

#define NOHIPMFPJID_KMFDMGFHHDE_JGIHIJHGHHB_OFFSET UNITYSDK_OFFSET(0xE1ACCF0)
#define NOHIPMFPJID_KMFDMGFHHDE__CTOR_OFFSET UNITYSDK_OFFSET(0xE1ACCE0)

inline static constexpr unsigned int NOHIPMFPJID_KMFDMGFHHDE_TypeDefinitionIndex = 52834;

class NOHIPMFPJID_KMFDMGFHHDE : public ::System::Object
{
public:
	::NOHIPMFPJID_PDNEMLJECOI* FGBNBFHOKAA; // 0x10
	::KLIOMMIOFDC_1<::System::Int32>* NBEGLMMLNCL; // 0x18
	::System::UInt32 AELKMGGGEJP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHIPMFPJID_KMFDMGFHHDE__CTOR_OFFSET))(this);
	}

	::System::Void JGIHIJHGHHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHIPMFPJID_KMFDMGFHHDE_JGIHIJHGHHB_OFFSET))(this);
	}
};
