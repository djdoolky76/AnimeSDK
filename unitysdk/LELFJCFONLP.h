#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MMEOMPHPOFC;
class ONGAINBJDFM;
namespace MoleMole::Battle { class Entity; }

#define LELFJCFONLP_JEDMNOEBDON_OFFSET UNITYSDK_OFFSET(0x15654B10)
#define LELFJCFONLP_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x15654DC0)
#define LELFJCFONLP_LOCOIKIOLBE_OFFSET UNITYSDK_OFFSET(0x15654D50)
#define LELFJCFONLP_NOKDJPCOGOC_OFFSET UNITYSDK_OFFSET(0x15654F10)
#define LELFJCFONLP__CTOR_OFFSET UNITYSDK_OFFSET(0x15654880)

inline static constexpr unsigned int LELFJCFONLP_TypeDefinitionIndex = 89307;

class LELFJCFONLP : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x10
	::MMEOMPHPOFC* DAAAEJDBNFI; // 0x18
	::System::Single KDMAPIKGLJM; // 0x20
	::System::Int32 CPKFNPACNFO; // 0x24
	::UnityEngine::Vector3 JPIKAOJLFKJ; // 0x28
	::System::Single GAFNNKAPHPH; // 0x34
	::UnityEngine::Vector3 DBMDOBFDLNK; // 0x38

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MMEOMPHPOFC* AAOCANGHBDG, ::System::Single LPEFECLJHJN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MMEOMPHPOFC*, ::System::Single))((::PBYTE)hIl2Cpp + LELFJCFONLP__CTOR_OFFSET))(this, KECKGDFIALJ, AAOCANGHBDG, LPEFECLJHJN);
	}

	::UnityEngine::Vector3 JEDMNOEBDON(::UnityEngine::Vector3 FMJGOHNLJNA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LELFJCFONLP_JEDMNOEBDON_OFFSET))(this, FMJGOHNLJNA);
	}

	::System::Void LOCOIKIOLBE(::ONGAINBJDFM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ONGAINBJDFM*))((::PBYTE)hIl2Cpp + LELFJCFONLP_LOCOIKIOLBE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LELFJCFONLP_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void NOKDJPCOGOC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LELFJCFONLP_NOKDJPCOGOC_OFFSET))(this, PMNLNNGEIFM);
	}
};
