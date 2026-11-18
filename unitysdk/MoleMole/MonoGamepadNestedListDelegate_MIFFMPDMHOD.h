#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGamepadNestedListDelegate_LMLPOHFKKOK.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_MIFFMPDMHOD_OIAHLKHEBEP_OFFSET UNITYSDK_OFFSET(0x1A709300)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_MIFFMPDMHOD_OKMFOMJGLNG_OFFSET UNITYSDK_OFFSET(0x1A709580)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_MIFFMPDMHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7095C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadNestedListDelegate_MIFFMPDMHOD_TypeDefinitionIndex = 45003;

	class MonoGamepadNestedListDelegate_MIFFMPDMHOD : public ::MoleMole::MonoGamepadNestedListDelegate_LMLPOHFKKOK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_MIFFMPDMHOD__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> OIAHLKHEBEP()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_MIFFMPDMHOD_OIAHLKHEBEP_OFFSET))(this);
		}

		::System::Void OKMFOMJGLNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_MIFFMPDMHOD_OKMFOMJGLNG_OFFSET))(this);
		}
	};
}
