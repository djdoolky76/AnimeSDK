#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJALJOFPNEB;

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC36200)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS31_0__GETROLEPOPULATION_B__0_OFFSET UNITYSDK_OFFSET(0x1CC36E90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass31_0_TypeDefinitionIndex = 66676;

	class GridFightModifierInfo___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolePopulation_b__0(::CJALJOFPNEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJALJOFPNEB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS31_0__GETROLEPOPULATION_B__0_OFFSET))(this, a1);
		}

	};
}
