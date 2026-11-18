#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_OOGJOILIFIO__CTOR_OFFSET UNITYSDK_OFFSET(0x735F40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadNestedListDelegate_OOGJOILIFIO_TypeDefinitionIndex = 45015;

	struct alignas(4) MonoGamepadNestedListDelegate_OOGJOILIFIO
	{
		::System::Int32 IBIBHEGIEOE; // 0x10
		::System::Int32 PGPLKIFOCOO; // 0x14
		::System::Int32 EJKHEBIEKDE; // 0x18
		::System::Boolean FGLCOFPMMKI; // 0x1C
		::System::Boolean DLIJDFJGCOK; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single AAGHKNDEEOA; // 0x20
		::System::Single IKEBJKPGFGI; // 0x24
		::System::Boolean HJHKHDEGJPA; // 0x28

		::System::Void _ctor(::MoleMole::MonoGamepadNestedListDelegate* MJODFDBNJIP, ::MoleMole::MonoGamepadNestedListDelegate* LMHNJIBCLJF, ::System::Nullable_1<::System::Object*> HNOGOACBONK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadNestedListDelegate*, ::MoleMole::MonoGamepadNestedListDelegate*, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADNESTEDLISTDELEGATE_OOGJOILIFIO__CTOR_OFFSET))(this, MJODFDBNJIP, LMHNJIBCLJF, HNOGOACBONK);
		}
	};
}
