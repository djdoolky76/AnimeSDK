#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKKBJHGPLNF;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define BNFIIBMAMDO_JJKCMBOADFI_KLOMKLHOOOL_OFFSET UNITYSDK_OFFSET(0x113FD780)
#define BNFIIBMAMDO_JJKCMBOADFI__CTOR_OFFSET UNITYSDK_OFFSET(0x113FD770)

inline static constexpr unsigned int BNFIIBMAMDO_JJKCMBOADFI_TypeDefinitionIndex = 80873;

class BNFIIBMAMDO_JJKCMBOADFI : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action_2<::System::Boolean, ::JKKBJHGPLNF*>* PNJMNHPMABH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_JJKCMBOADFI__CTOR_OFFSET))(this);
	}

	::System::Void KLOMKLHOOOL(::System::Boolean EBFCACIEKBC, ::JKKBJHGPLNF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::JKKBJHGPLNF*))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_JJKCMBOADFI_KLOMKLHOOOL_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};
