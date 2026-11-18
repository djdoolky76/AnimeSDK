#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJOKKBDDGNN;
class KECNBGKAFHP;

#define KECNBGKAFHP_HGJHLOJMHFC_IHFBMPEAFCN_OFFSET UNITYSDK_OFFSET(0x16338540)
#define KECNBGKAFHP_HGJHLOJMHFC_OHCLKHPJGAL_OFFSET UNITYSDK_OFFSET(0x16338320)
#define KECNBGKAFHP_HGJHLOJMHFC__CTOR_OFFSET UNITYSDK_OFFSET(0x16338310)

inline static constexpr unsigned int KECNBGKAFHP_HGJHLOJMHFC_TypeDefinitionIndex = 65123;

class KECNBGKAFHP_HGJHLOJMHFC : public ::System::Object
{
public:
	::KECNBGKAFHP* KLHPEBKNIFB; // 0x10
	::JJOKKBDDGNN* HPEMFJDOAKL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_HGJHLOJMHFC__CTOR_OFFSET))(this);
	}

	::System::Void OHCLKHPJGAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_HGJHLOJMHFC_OHCLKHPJGAL_OFFSET))(this);
	}

	::System::Void IHFBMPEAFCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_HGJHLOJMHFC_IHFBMPEAFCN_OFFSET))(this);
	}
};
