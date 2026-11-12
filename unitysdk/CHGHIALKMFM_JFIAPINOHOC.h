#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BAELLFLPIPF;
class CHGHIALKMFM;
class GBFJKGKIIKD;
class JJEHILJOIEK;
class KJALACAGLNJ;
class PIIOAKOEACN;
class PJPPGJEDCOG;

#define CHGHIALKMFM_JFIAPINOHOC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1D6C6B30)
#define CHGHIALKMFM_JFIAPINOHOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CDA10)

inline static constexpr unsigned int CHGHIALKMFM_JFIAPINOHOC_TypeDefinitionIndex = 42779;

	class CHGHIALKMFM_JFIAPINOHOC : public ::System::Object
	{
	public:
		::KJALACAGLNJ* OMGDJHLGMGB; // 0x10
		::GBFJKGKIIKD* IDHHCNLNPJE; // 0x18
		::JJEHILJOIEK* GLBMJMPEFHF; // 0x20
		::BAELLFLPIPF* PDDEAIKFMOP; // 0x28
		::System::Void _ctor(::KJALACAGLNJ* a1, ::BAELLFLPIPF* a2, ::JJEHILJOIEK* a3, ::GBFJKGKIIKD* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KJALACAGLNJ*, ::BAELLFLPIPF*, ::JJEHILJOIEK*, ::GBFJKGKIIKD*))((::PBYTE)hIl2Cpp + CHGHIALKMFM_JFIAPINOHOC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::CHGHIALKMFM* BPLPBPMEODA(::PIIOAKOEACN* a1, ::PJPPGJEDCOG* a2, ::UnityEngine::Vector2Int a3)
		{
			return ((::CHGHIALKMFM*(*)(::PVOID, ::PIIOAKOEACN*, ::PJPPGJEDCOG*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CHGHIALKMFM_JFIAPINOHOC_BPLPBPMEODA_OFFSET))(this, a1, a2, a3);
		}

	};
