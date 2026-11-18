#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class AEJLJONCNNJ;
class IELGDBFHIMK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraControlConfig; }
namespace System { class Action; }

#define FDLKOJKNKCB_BCIFAFIBLBG_OFFSET UNITYSDK_OFFSET(0x14AC0AF0)
#define FDLKOJKNKCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AC0580)
#define FDLKOJKNKCB_FFCIOICFNFN_OFFSET UNITYSDK_OFFSET(0x14AC0760)
#define FDLKOJKNKCB_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x14AC06C0)
#define FDLKOJKNKCB_MMGNJJGEHOD_OFFSET UNITYSDK_OFFSET(0x14AC0680)
#define FDLKOJKNKCB_NPIHBFDLCBB_OFFSET UNITYSDK_OFFSET(0x14AC0740)
#define FDLKOJKNKCB_OCMCJHBPENI_OFFSET UNITYSDK_OFFSET(0x14AC0BA0)
#define FDLKOJKNKCB_OIFKKOLIKCA_OFFSET UNITYSDK_OFFSET(0x14AC0780)
#define FDLKOJKNKCB_POCFEHGFNEE_OFFSET UNITYSDK_OFFSET(0x14AC06A0)
#define FDLKOJKNKCB__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC03F0)

inline static constexpr unsigned int FDLKOJKNKCB_TypeDefinitionIndex = 40999;

class FDLKOJKNKCB : public ::System::Object
{
public:
	// static const ::System::String* NGCBAJBNMOJ; // 0x0
	::AEJLJONCNNJ* CEGKFLHNIMN; // 0x10
	::System::Action* EGBBBMAIKNP; // 0x18
	::IELGDBFHIMK* MCNBLEAKONG; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Photo::ScopedFirstPersonCameraControlConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Photo::ScopedFirstPersonCameraControlConfig*))((::PBYTE)hIl2Cpp + FDLKOJKNKCB__CTOR_OFFSET))(this, KECKGDFIALJ, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_DISPOSE_OFFSET))(this);
	}

	::System::Void MMGNJJGEHOD(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_MMGNJJGEHOD_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
	}

	::System::Boolean POCFEHGFNEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_POCFEHGFNEE_OFFSET))(this);
	}

	::System::Void JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Boolean NPIHBFDLCBB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_NPIHBFDLCBB_OFFSET))(this);
	}

	::System::Void FFCIOICFNFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_FFCIOICFNFN_OFFSET))(this);
	}

	::System::Void OIFKKOLIKCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_OIFKKOLIKCA_OFFSET))(this, KECKGDFIALJ);
	}

	::UnityEngine::Quaternion BCIFAFIBLBG()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_BCIFAFIBLBG_OFFSET))(this);
	}

	::System::Void OCMCJHBPENI(::UnityEngine::Vector2 JEJNLIBIPOO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FDLKOJKNKCB_OCMCJHBPENI_OFFSET))(this, JEJNLIBIPOO);
	}
};
