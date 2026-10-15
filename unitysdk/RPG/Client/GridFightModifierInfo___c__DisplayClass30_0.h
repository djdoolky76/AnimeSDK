#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEBDCPNECAD;

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1993A0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__TRYGETTRAITLIMITLAYER_B__0_OFFSET UNITYSDK_OFFSET(0xD199D20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass30_0_TypeDefinitionIndex = 65049;

	class GridFightModifierInfo___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetTraitLimitLayer_b__0(::HEBDCPNECAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEBDCPNECAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__TRYGETTRAITLIMITLAYER_B__0_OFFSET))(this, a1);
		}

	};
}
