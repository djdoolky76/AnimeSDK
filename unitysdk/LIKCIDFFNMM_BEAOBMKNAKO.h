#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LIKCIDFFNMM_BEAOBMKNAKO__CTOR_OFFSET UNITYSDK_OFFSET(0x12A59B40)

inline static constexpr unsigned int LIKCIDFFNMM_BEAOBMKNAKO_TypeDefinitionIndex = 43013;

class LIKCIDFFNMM_BEAOBMKNAKO : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 HBINAGPODHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BEAOBMKNAKO__CTOR_OFFSET))(this);
	}
};
