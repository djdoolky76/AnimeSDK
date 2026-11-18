#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGamepadNestedListDelegate_LMLPOHFKKOK.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_KCLILFFGOOH_OIAHLKHEBEP_OFFSET UNITYSDK_OFFSET(0x146907D0)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_KCLILFFGOOH_OKMFOMJGLNG_OFFSET UNITYSDK_OFFSET(0x14690970)
#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_KCLILFFGOOH__CTOR_OFFSET UNITYSDK_OFFSET(0x146909E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadNestedListDelegate_KCLILFFGOOH_TypeDefinitionIndex = 45009;

	class MonoGamepadNestedListDelegate_KCLILFFGOOH : public ::MoleMole::MonoGamepadNestedListDelegate_LMLPOHFKKOK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_KCLILFFGOOH__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> OIAHLKHEBEP()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_KCLILFFGOOH_OIAHLKHEBEP_OFFSET))(this);
		}

		::System::Void OKMFOMJGLNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_KCLILFFGOOH_OKMFOMJGLNG_OFFSET))(this);
		}
	};
}
