#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMNHFJOBPKL;

#define FKGALBKGLMD_AMGOHHGLHGM_KJBHENNPCED_OFFSET UNITYSDK_OFFSET(0x14AD93E0)
#define FKGALBKGLMD_AMGOHHGLHGM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD93D0)

inline static constexpr unsigned int FKGALBKGLMD_AMGOHHGLHGM_TypeDefinitionIndex = 47426;

class FKGALBKGLMD_AMGOHHGLHGM : public ::System::Object
{
public:
	::System::UInt32 CCNMDLOCLFE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGALBKGLMD_AMGOHHGLHGM__CTOR_OFFSET))(this);
	}

	::System::Boolean KJBHENNPCED(::AMNHFJOBPKL* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMNHFJOBPKL*))((::PBYTE)hIl2Cpp + FKGALBKGLMD_AMGOHHGLHGM_KJBHENNPCED_OFFSET))(this, JNDDJMAHNAI);
	}
};
