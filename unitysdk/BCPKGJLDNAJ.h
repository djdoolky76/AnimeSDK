#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define BCPKGJLDNAJ_AFNOOEGJNLG_OFFSET UNITYSDK_OFFSET(0x113D9310)
#define BCPKGJLDNAJ_MCNADLFHADK_OFFSET UNITYSDK_OFFSET(0x113D97C0)
#define BCPKGJLDNAJ_NOKDJPCOGOC_OFFSET UNITYSDK_OFFSET(0x113D9850)
#define BCPKGJLDNAJ_PJJHPAMMPCF_OFFSET UNITYSDK_OFFSET(0x113D98C0)
#define BCPKGJLDNAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x113D9300)

inline static constexpr unsigned int BCPKGJLDNAJ_TypeDefinitionIndex = 62680;

class BCPKGJLDNAJ : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BCPKGJLDNAJ__CTOR_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean AFNOOEGJNLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPKGJLDNAJ_AFNOOEGJNLG_OFFSET))(this);
	}

	::UnityEngine::Transform* MCNADLFHADK()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPKGJLDNAJ_MCNADLFHADK_OFFSET))(this);
	}

	::System::Void NOKDJPCOGOC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCPKGJLDNAJ_NOKDJPCOGOC_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PJJHPAMMPCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPKGJLDNAJ_PJJHPAMMPCF_OFFSET))(this);
	}
};
