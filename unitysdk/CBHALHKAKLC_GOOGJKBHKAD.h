#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC_DPIODKIFIME;

#define CBHALHKAKLC_GOOGJKBHKAD_NIKOPBIGDLG_OFFSET UNITYSDK_OFFSET(0x1452F420)
#define CBHALHKAKLC_GOOGJKBHKAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1452F410)

inline static constexpr unsigned int CBHALHKAKLC_GOOGJKBHKAD_TypeDefinitionIndex = 55868;

class CBHALHKAKLC_GOOGJKBHKAD : public ::System::Object
{
public:
	::CBHALHKAKLC_DPIODKIFIME* EEMOEMFLABI; // 0x10
	::System::UInt32 KLCELHJKJNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_GOOGJKBHKAD__CTOR_OFFSET))(this);
	}

	::System::Boolean NIKOPBIGDLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_GOOGJKBHKAD_NIKOPBIGDLG_OFFSET))(this);
	}
};
