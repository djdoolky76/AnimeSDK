#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEBDCPNECAD;

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS29_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC35FD0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS29_0__TRYGETTRAITLIMITLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x1CC36E30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass29_0_TypeDefinitionIndex = 66674;

	class GridFightModifierInfo___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS29_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetTraitLimitLayer_b__0(::HEBDCPNECAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEBDCPNECAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS29_0__TRYGETTRAITLIMITLAYER_B__0_OFFSET))(this, a1);
		}

	};
}
