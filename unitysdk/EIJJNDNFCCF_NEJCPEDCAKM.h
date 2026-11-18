#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGAONHGMLLA_FHDBLKFNBBJ.h"
#include "unitysdk/System/Object.h"

class HDBIKLMCCCK;
class IGAONHGMLLA;

#define EIJJNDNFCCF_NEJCPEDCAKM_PNNNOALFJID_OFFSET UNITYSDK_OFFSET(0x158B1DE0)
#define EIJJNDNFCCF_NEJCPEDCAKM__CTOR_OFFSET UNITYSDK_OFFSET(0x158B1DD0)

inline static constexpr unsigned int EIJJNDNFCCF_NEJCPEDCAKM_TypeDefinitionIndex = 56541;

class EIJJNDNFCCF_NEJCPEDCAKM : public ::System::Object
{
public:
	::IGAONHGMLLA* AEOMCHBDPFD; // 0x10
	::System::Boolean DOFCLPCLHOJ; // 0x18
	::System::Byte _padding0[0x3];
	::IGAONHGMLLA_FHDBLKFNBBJ NDBJBBOCJDD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJJNDNFCCF_NEJCPEDCAKM__CTOR_OFFSET))(this);
	}

	::HDBIKLMCCCK* PNNNOALFJID()
	{
		return ((::HDBIKLMCCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJJNDNFCCF_NEJCPEDCAKM_PNNNOALFJID_OFFSET))(this);
	}
};
