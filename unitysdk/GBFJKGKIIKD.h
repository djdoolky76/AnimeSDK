#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class AGNMGANBNAA;
class DIGCDGKOBMK;

#define GBFJKGKIIKD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C54C3C0)
#define GBFJKGKIIKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C555E70)

inline static constexpr unsigned int GBFJKGKIIKD_TypeDefinitionIndex = 41785;

	class GBFJKGKIIKD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBFJKGKIIKD_CTOR_OFFSET))(this);
		}

		::DIGCDGKOBMK* BPLPBPMEODA(::AGNMGANBNAA* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::DIGCDGKOBMK*(*)(::PVOID, ::AGNMGANBNAA*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + GBFJKGKIIKD_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
