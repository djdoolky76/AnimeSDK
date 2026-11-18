#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define EJNGLIEFCGL_KHABHIGBPIN_OFFSET UNITYSDK_OFFSET(0x169A1190)
#define EJNGLIEFCGL__CTOR_OFFSET UNITYSDK_OFFSET(0x169A1180)

inline static constexpr unsigned int EJNGLIEFCGL_TypeDefinitionIndex = 70177;

class EJNGLIEFCGL : public ::System::Object
{
public:
	::System::Int32 FAAJODOGCPG; // 0x10
	::System::Int32 IAPGMMGLNMH; // 0x14

	::System::Void _ctor(::System::Int32 PCEFKJHBDDF, ::System::Int32 EAGIOAABNDD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EJNGLIEFCGL__CTOR_OFFSET))(this, PCEFKJHBDDF, EAGIOAABNDD);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> KHABHIGBPIN(::System::Single ALLNOLHHJMD)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJNGLIEFCGL_KHABHIGBPIN_OFFSET))(this, ALLNOLHHJMD);
	}
};
