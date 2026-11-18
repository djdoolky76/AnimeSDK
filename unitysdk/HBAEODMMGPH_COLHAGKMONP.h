#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBDGKAJPALP;

#define HBAEODMMGPH_COLHAGKMONP_BJEIELAIIKH_OFFSET UNITYSDK_OFFSET(0x124CC2D0)
#define HBAEODMMGPH_COLHAGKMONP__CTOR_OFFSET UNITYSDK_OFFSET(0x124CC2C0)

inline static constexpr unsigned int HBAEODMMGPH_COLHAGKMONP_TypeDefinitionIndex = 93737;

class HBAEODMMGPH_COLHAGKMONP : public ::System::Object
{
public:
	::KBDGKAJPALP* GEEHGDABNJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAEODMMGPH_COLHAGKMONP__CTOR_OFFSET))(this);
	}

	::System::Void BJEIELAIIKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAEODMMGPH_COLHAGKMONP_BJEIELAIIKH_OFFSET))(this);
	}
};
