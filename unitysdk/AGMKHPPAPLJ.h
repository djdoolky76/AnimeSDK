#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OHILMPIHMPO;
namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define AGMKHPPAPLJ_BIENLHEKMCD_OFFSET UNITYSDK_OFFSET(0x135E17A0)
#define AGMKHPPAPLJ_DFICDDKALAN_OFFSET UNITYSDK_OFFSET(0x135E1BC0)
#define AGMKHPPAPLJ_EBCJPEKFALJ_OFFSET UNITYSDK_OFFSET(0x135E2060)
#define AGMKHPPAPLJ_HEHLIAAFPFP_OFFSET UNITYSDK_OFFSET(0x135E1D60)
#define AGMKHPPAPLJ_HFIALJIMMPB_OFFSET UNITYSDK_OFFSET(0x135E1A20)
#define AGMKHPPAPLJ_IBLPEEGHFEP_OFFSET UNITYSDK_OFFSET(0x135E1EE0)
#define AGMKHPPAPLJ_OAJOJKBHLEL_OFFSET UNITYSDK_OFFSET(0x135E1860)
#define AGMKHPPAPLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x135E1800)

inline static constexpr unsigned int AGMKHPPAPLJ_TypeDefinitionIndex = 89297;

class AGMKHPPAPLJ : public ::System::Object
{
public:
	::MoleMole::MonoLayoutTween* JKOGOJDDDLD; // 0x10
	::System::Action* FLGBEOOGMCE; // 0x18

	::System::Void _ctor(::MoleMole::MonoLayoutTween* PEAFCOCKGAJ, ::OHILMPIHMPO* GKFAOHIJLOA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLayoutTween*, ::OHILMPIHMPO*))((::PBYTE)hIl2Cpp + AGMKHPPAPLJ__CTOR_OFFSET))(this, PEAFCOCKGAJ, GKFAOHIJLOA);
	}

	::UnityEngine::Transform* BIENLHEKMCD()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKHPPAPLJ_BIENLHEKMCD_OFFSET))(this);
	}

	::System::Void OAJOJKBHLEL(::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGMKHPPAPLJ_OAJOJKBHLEL_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void HFIALJIMMPB(::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGMKHPPAPLJ_HFIALJIMMPB_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void DFICDDKALAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKHPPAPLJ_DFICDDKALAN_OFFSET))(this);
	}

	::System::Boolean HEHLIAAFPFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKHPPAPLJ_HEHLIAAFPFP_OFFSET))(this);
	}

	::System::Boolean IBLPEEGHFEP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKHPPAPLJ_IBLPEEGHFEP_OFFSET))(this);
	}

	::System::Void EBCJPEKFALJ(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGMKHPPAPLJ_EBCJPEKFALJ_OFFSET))(this, MDPPNMIPDMP);
	}
};
