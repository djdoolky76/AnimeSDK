#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ODAJIALMLPG_JJCGEIKHKMM_LDMGPECNLAK_OFFSET UNITYSDK_OFFSET(0x13A4BC90)
#define ODAJIALMLPG_JJCGEIKHKMM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4BC80)

inline static constexpr unsigned int ODAJIALMLPG_JJCGEIKHKMM_TypeDefinitionIndex = 63558;

class ODAJIALMLPG_JJCGEIKHKMM : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* JIDEDAPGIJB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAJIALMLPG_JJCGEIKHKMM__CTOR_OFFSET))(this);
	}

	::System::Void LDMGPECNLAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAJIALMLPG_JJCGEIKHKMM_LDMGPECNLAK_OFFSET))(this);
	}
};
