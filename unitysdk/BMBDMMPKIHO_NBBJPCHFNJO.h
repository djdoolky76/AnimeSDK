#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMBDMMPKIHO;
namespace UnityEngine { class Transform; }

#define BMBDMMPKIHO_NBBJPCHFNJO_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x128B2C10)
#define BMBDMMPKIHO_NBBJPCHFNJO_ONDROP_OFFSET UNITYSDK_OFFSET(0x128B2C70)
#define BMBDMMPKIHO_NBBJPCHFNJO__CTOR_OFFSET UNITYSDK_OFFSET(0x128B2C00)

inline static constexpr unsigned int BMBDMMPKIHO_NBBJPCHFNJO_TypeDefinitionIndex = 65324;

class BMBDMMPKIHO_NBBJPCHFNJO : public ::System::Object
{
public:
	::BMBDMMPKIHO* LKOCKEJOACF; // 0x10

	::System::Void _ctor(::BMBDMMPKIHO* OPNAPIGACGP)
	{
		return ((::System::Void(*)(::PVOID, ::BMBDMMPKIHO*))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_NBBJPCHFNJO__CTOR_OFFSET))(this, OPNAPIGACGP);
	}

	::System::Boolean CanAcceptDrop(::System::Object* MFHBPIBHAOB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_NBBJPCHFNJO_CANACCEPTDROP_OFFSET))(this, MFHBPIBHAOB);
	}

	::System::Void OnDrop(::System::Object* MFHBPIBHAOB, ::UnityEngine::Transform* JHDOMODPOPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_NBBJPCHFNJO_ONDROP_OFFSET))(this, MFHBPIBHAOB, JHDOMODPOPO);
	}
};
