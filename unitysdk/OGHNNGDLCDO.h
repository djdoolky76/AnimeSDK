#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Battle/GamePlayLogicKind.h"

class PIPFFMMLJBL;

#define OGHNNGDLCDO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1006F310)
#define OGHNNGDLCDO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1006F3F0)
#define OGHNNGDLCDO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1006F470)
#define OGHNNGDLCDO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1006F2C0)
#define OGHNNGDLCDO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1006F360)
#define OGHNNGDLCDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1006F3E0)

inline static constexpr unsigned int OGHNNGDLCDO_TypeDefinitionIndex = 71932;

class OGHNNGDLCDO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x4B; // 0x0
	::PIPFFMMLJBL* BBHLPBCHODA; // 0x48
	::MoleMole::Battle::GamePlayLogicKind CNDGNDJDHME; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGHNNGDLCDO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHNNGDLCDO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHNNGDLCDO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHNNGDLCDO_GETCLASSID_OFFSET))(this);
	}

	static ::OGHNNGDLCDO* JFDOOELFAOA()
	{
		return ((::OGHNNGDLCDO*(*)())((::PBYTE)hIl2Cpp + OGHNNGDLCDO_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHNNGDLCDO_MEFBHFEOKGH_OFFSET))(this);
	}
};
