#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJIMJEHPKHN;

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC36300)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS32_0__ISALLTRAITDEACTIVATED_B__0_OFFSET UNITYSDK_OFFSET(0x1CC36EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass32_0_TypeDefinitionIndex = 66677;

	class GridFightModifierInfo___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllTraitDeactivated_b__0(::EJIMJEHPKHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJIMJEHPKHN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS32_0__ISALLTRAITDEACTIVATED_B__0_OFFSET))(this, a1);
		}

	};
}
