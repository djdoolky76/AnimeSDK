#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LIKCIDFFNMM_ONONOIAAHBE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E01720)

inline static constexpr unsigned int LIKCIDFFNMM_ONONOIAAHBE_TypeDefinitionIndex = 43019;

class LIKCIDFFNMM_ONONOIAAHBE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 HBINAGPODHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_ONONOIAAHBE__CTOR_OFFSET))(this);
	}
};
