#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OKNKFCEODNM_FPEEDEFCOOO_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0xFD8DDD0)
#define OKNKFCEODNM_FPEEDEFCOOO__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8DDC0)

inline static constexpr unsigned int OKNKFCEODNM_FPEEDEFCOOO_TypeDefinitionIndex = 88761;

class OKNKFCEODNM_FPEEDEFCOOO : public ::System::Object
{
public:
	::System::Action* LOJFLJJAKFJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNKFCEODNM_FPEEDEFCOOO__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNKFCEODNM_FPEEDEFCOOO_MJMKFFANPBL_OFFSET))(this);
	}
};
