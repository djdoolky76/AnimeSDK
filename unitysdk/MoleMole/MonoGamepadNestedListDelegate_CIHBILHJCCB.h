#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGamepadNestedListDelegate_LMLPOHFKKOK.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_CIHBILHJCCB_OIAHLKHEBEP_OFFSET UNITYSDK_OFFSET(0x130F7D20)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_CIHBILHJCCB_OKMFOMJGLNG_OFFSET UNITYSDK_OFFSET(0x130F7ED0)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_CIHBILHJCCB__CTOR_OFFSET UNITYSDK_OFFSET(0x130F7F30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadNestedListDelegate_CIHBILHJCCB_TypeDefinitionIndex = 45012;

	class MonoGamepadNestedListDelegate_CIHBILHJCCB : public ::MoleMole::MonoGamepadNestedListDelegate_LMLPOHFKKOK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_CIHBILHJCCB__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> OIAHLKHEBEP()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_CIHBILHJCCB_OIAHLKHEBEP_OFFSET))(this);
		}

		::System::Void OKMFOMJGLNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_CIHBILHJCCB_OKMFOMJGLNG_OFFSET))(this);
		}
	};
}
