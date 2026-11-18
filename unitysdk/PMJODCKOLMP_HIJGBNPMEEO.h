#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAMLGDMCCMB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class PMJODCKOLMP;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PMJODCKOLMP_HIJGBNPMEEO_LBMEFANIEIO_OFFSET UNITYSDK_OFFSET(0x178ED3D0)
#define PMJODCKOLMP_HIJGBNPMEEO__CTOR_OFFSET UNITYSDK_OFFSET(0x178ED3C0)

inline static constexpr unsigned int PMJODCKOLMP_HIJGBNPMEEO_TypeDefinitionIndex = 91736;

class PMJODCKOLMP_HIJGBNPMEEO : public ::System::Object
{
public:
	::CAMLGDMCCMB OLILAJBGBPC; // 0x10
	::PMJODCKOLMP* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJODCKOLMP_HIJGBNPMEEO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LBMEFANIEIO(::LGCNEDCMPKM HBMGHPEPBNC)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + PMJODCKOLMP_HIJGBNPMEEO_LBMEFANIEIO_OFFSET))(this, HBMGHPEPBNC);
	}
};
