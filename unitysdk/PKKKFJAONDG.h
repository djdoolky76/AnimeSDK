#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PKKKFJAONDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1371C200)

inline static constexpr unsigned int PKKKFJAONDG_TypeDefinitionIndex = 72094;

class PKKKFJAONDG : public ::System::Object
{
public:
	::System::String* JBHCOILFGCK; // 0x10
	::System::Int32 PDKIBFEKPLD; // 0x18
	::System::UInt32 AECCAPBJJIN; // 0x1C
	::System::Boolean GOCFKONJAOP; // 0x20
	::System::Byte _padding0[0x3];
	::MoleMole::Config::ScreenEffectType MFLCCPAHBKN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKKFJAONDG__CTOR_OFFSET))(this);
	}
};
