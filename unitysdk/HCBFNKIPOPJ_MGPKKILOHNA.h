#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCPCAPILDDK;
class HCBFNKIPOPJ;
class HEMMOPDOMEA;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCBFNKIPOPJ_MGPKKILOHNA_NAELDEMHBLO_OFFSET UNITYSDK_OFFSET(0x181741E0)
#define HCBFNKIPOPJ_MGPKKILOHNA__CTOR_OFFSET UNITYSDK_OFFSET(0x181741D0)

inline static constexpr unsigned int HCBFNKIPOPJ_MGPKKILOHNA_TypeDefinitionIndex = 60436;

class HCBFNKIPOPJ_MGPKKILOHNA : public ::System::Object
{
public:
	::System::Action_1<::CCPCAPILDDK*>* EDNJGMKPFHG; // 0x10
	::HCBFNKIPOPJ* KLHPEBKNIFB; // 0x18
	::System::Action* LMGFIOAMHHB; // 0x20
	::System::UInt32 LBINFBPACPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_MGPKKILOHNA__CTOR_OFFSET))(this);
	}

	::System::Void NAELDEMHBLO(::System::Boolean DJCNCELJPOM, ::HEMMOPDOMEA* BELEHPLHKKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::HEMMOPDOMEA*))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_MGPKKILOHNA_NAELDEMHBLO_OFFSET))(this, DJCNCELJPOM, BELEHPLHKKN);
	}
};
