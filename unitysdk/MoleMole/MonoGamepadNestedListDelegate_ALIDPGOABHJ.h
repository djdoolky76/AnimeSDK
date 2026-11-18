#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGamepadNestedListDelegate_LMLPOHFKKOK.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_ALIDPGOABHJ_OIAHLKHEBEP_OFFSET UNITYSDK_OFFSET(0x139F4C20)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_ALIDPGOABHJ_OKMFOMJGLNG_OFFSET UNITYSDK_OFFSET(0x139F4DC0)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_ALIDPGOABHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x139F4E30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadNestedListDelegate_ALIDPGOABHJ_TypeDefinitionIndex = 45013;

	class MonoGamepadNestedListDelegate_ALIDPGOABHJ : public ::MoleMole::MonoGamepadNestedListDelegate_LMLPOHFKKOK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_ALIDPGOABHJ__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> OIAHLKHEBEP()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_ALIDPGOABHJ_OIAHLKHEBEP_OFFSET))(this);
		}

		::System::Void OKMFOMJGLNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_ALIDPGOABHJ_OKMFOMJGLNG_OFFSET))(this);
		}
	};
}
