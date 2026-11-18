#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGamepadNestedListDelegate_LMLPOHFKKOK.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_GGHBGNGANNN_OIAHLKHEBEP_OFFSET UNITYSDK_OFFSET(0x14690600)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_GGHBGNGANNN_OKMFOMJGLNG_OFFSET UNITYSDK_OFFSET(0x14690780)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_GGHBGNGANNN__CTOR_OFFSET UNITYSDK_OFFSET(0x146907C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadNestedListDelegate_GGHBGNGANNN_TypeDefinitionIndex = 45017;

	class MonoGamepadNestedListDelegate_GGHBGNGANNN : public ::MoleMole::MonoGamepadNestedListDelegate_LMLPOHFKKOK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_GGHBGNGANNN__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> OIAHLKHEBEP()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_GGHBGNGANNN_OIAHLKHEBEP_OFFSET))(this);
		}

		::System::Void OKMFOMJGLNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_GGHBGNGANNN_OKMFOMJGLNG_OFFSET))(this);
		}
	};
}
