#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHFJMGEFPHM_DCJMFMAHBLD_OFFSET UNITYSDK_OFFSET(0x15B8C9E0)
#define KHFJMGEFPHM_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x15B8CA20)
#define KHFJMGEFPHM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8CA60)

inline static constexpr unsigned int KHFJMGEFPHM_TypeDefinitionIndex = 43774;

class KHFJMGEFPHM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFJMGEFPHM__CTOR_OFFSET))(this);
	}

	::System::Void DCJMFMAHBLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFJMGEFPHM_DCJMFMAHBLD_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFJMGEFPHM_OIBKFFAGPNH_OFFSET))(this);
	}
};
