#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAMLGDMCCMB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class KEMLPKIBNCC;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KEMLPKIBNCC_OHHEPOKCMFI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1A2C4FC0)
#define KEMLPKIBNCC_OHHEPOKCMFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C4FB0)

inline static constexpr unsigned int KEMLPKIBNCC_OHHEPOKCMFI_TypeDefinitionIndex = 79666;

class KEMLPKIBNCC_OHHEPOKCMFI : public ::System::Object
{
public:
	::CAMLGDMCCMB OLILAJBGBPC; // 0x10
	::KEMLPKIBNCC* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMLPKIBNCC_OHHEPOKCMFI__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LIDNPLMPHAL(::LGCNEDCMPKM HBMGHPEPBNC)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + KEMLPKIBNCC_OHHEPOKCMFI_LIDNPLMPHAL_OFFSET))(this, HBMGHPEPBNC);
	}
};
