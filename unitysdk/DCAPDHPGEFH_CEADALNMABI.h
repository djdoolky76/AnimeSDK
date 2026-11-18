#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAMLGDMCCMB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class DCAPDHPGEFH;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DCAPDHPGEFH_CEADALNMABI_LBMEFANIEIO_OFFSET UNITYSDK_OFFSET(0x15A2B810)
#define DCAPDHPGEFH_CEADALNMABI__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2B800)

inline static constexpr unsigned int DCAPDHPGEFH_CEADALNMABI_TypeDefinitionIndex = 80107;

class DCAPDHPGEFH_CEADALNMABI : public ::System::Object
{
public:
	::DCAPDHPGEFH* KLHPEBKNIFB; // 0x10
	::CAMLGDMCCMB OLILAJBGBPC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPDHPGEFH_CEADALNMABI__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LBMEFANIEIO(::LGCNEDCMPKM HBMGHPEPBNC)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + DCAPDHPGEFH_CEADALNMABI_LBMEFANIEIO_OFFSET))(this, HBMGHPEPBNC);
	}
};
