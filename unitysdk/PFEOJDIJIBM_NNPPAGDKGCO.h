#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PFEOJDIJIBM;
class PFEOJDIJIBM_MFLCLODDICJ;

#define PFEOJDIJIBM_NNPPAGDKGCO_AHFIPCLNOGH_OFFSET UNITYSDK_OFFSET(0x11976880)
#define PFEOJDIJIBM_NNPPAGDKGCO__CTOR_OFFSET UNITYSDK_OFFSET(0x11976870)

inline static constexpr unsigned int PFEOJDIJIBM_NNPPAGDKGCO_TypeDefinitionIndex = 62743;

class PFEOJDIJIBM_NNPPAGDKGCO : public ::System::Object
{
public:
	::PFEOJDIJIBM_MFLCLODDICJ* DCLIBLNLHDN; // 0x10
	::PFEOJDIJIBM* KLHPEBKNIFB; // 0x18
	::System::Boolean DHFFHPAOCCN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEOJDIJIBM_NNPPAGDKGCO__CTOR_OFFSET))(this);
	}

	::System::Boolean AHFIPCLNOGH(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFEOJDIJIBM_NNPPAGDKGCO_AHFIPCLNOGH_OFFSET))(this, MGMDLMBEDJF);
	}
};
