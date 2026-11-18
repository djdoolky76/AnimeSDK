#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NGHNFKFGMNA_KPFHPFKNOEI;
class PFEOJDIJIBM;
namespace System { template <typename T> class Action_1; }

#define NGHNFKFGMNA_LNGNELCNPMO_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x13756980)
#define NGHNFKFGMNA_LNGNELCNPMO_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x13756890)
#define NGHNFKFGMNA_LNGNELCNPMO__CTOR_OFFSET UNITYSDK_OFFSET(0x13756880)

inline static constexpr unsigned int NGHNFKFGMNA_LNGNELCNPMO_TypeDefinitionIndex = 58751;

class NGHNFKFGMNA_LNGNELCNPMO : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* FBGHCCDCJNG; // 0x10
	::NGHNFKFGMNA_KPFHPFKNOEI* FGBNBFHOKAA; // 0x18
	::System::Boolean IMPFJBOEFFE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_LNGNELCNPMO__CTOR_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_LNGNELCNPMO_HOFIFAEOLBM_OFFSET))(this, EBFCACIEKBC);
	}

	::System::Void CKEMNJODHCH(::PFEOJDIJIBM* FDGLDBOBFDJ, ::System::Int32 KFADOGCIMKJ)
	{
		return ((::System::Void(*)(::PVOID, ::PFEOJDIJIBM*, ::System::Int32))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_LNGNELCNPMO_CKEMNJODHCH_OFFSET))(this, FDGLDBOBFDJ, KFADOGCIMKJ);
	}
};
