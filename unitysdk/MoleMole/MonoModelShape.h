#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDJFBGCAEOI.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MEAKCNLKBEJ.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace MoleMole { class IMonoModelShapeElement; }

#define MOLEMOLE_MONOMODELSHAPE_FETCHMODELSHAPE_OFFSET UNITYSDK_OFFSET(0x14699CB0)
#define MOLEMOLE_MONOMODELSHAPE_GETSHAPECAPACITY_OFFSET UNITYSDK_OFFSET(0x14699BF0)
#define MOLEMOLE_MONOMODELSHAPE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x14699E70)
#define MOLEMOLE_MONOMODELSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x14699EB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoModelShape_TypeDefinitionIndex = 49455;

	class MonoModelShape : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::IMonoModelShapeElement*>* PIIAFEACGMC; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSHAPE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetShapeCapacity(::JDJFBGCAEOI FCPCLIJNDLA)
		{
			return ((::System::Int32(*)(::PVOID, ::JDJFBGCAEOI))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSHAPE_GETSHAPECAPACITY_OFFSET))(this, FCPCLIJNDLA);
		}

		::System::Int32 FetchModelShape(::System::Span_1_9011FAD97750D224<::MEAKCNLKBEJ> PMAMMGFJAJL, ::JDJFBGCAEOI FCPCLIJNDLA)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::MEAKCNLKBEJ>, ::JDJFBGCAEOI))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSHAPE_FETCHMODELSHAPE_OFFSET))(this, PMAMMGFJAJL, FCPCLIJNDLA);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSHAPE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
