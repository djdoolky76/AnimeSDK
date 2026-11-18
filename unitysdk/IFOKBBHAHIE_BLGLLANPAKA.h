#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_BLGLLANPAKA_AOBMLELMGNB_OFFSET UNITYSDK_OFFSET(0x1013BD20)
#define IFOKBBHAHIE_BLGLLANPAKA_DCNHFAJLDPA_OFFSET UNITYSDK_OFFSET(0x1013BD30)
#define IFOKBBHAHIE_BLGLLANPAKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1013BD10)

inline static constexpr unsigned int IFOKBBHAHIE_BLGLLANPAKA_TypeDefinitionIndex = 67437;

class IFOKBBHAHIE_BLGLLANPAKA : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_BLGLLANPAKA__CTOR_OFFSET))(this);
	}

	::System::Void AOBMLELMGNB(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_BLGLLANPAKA_AOBMLELMGNB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DCNHFAJLDPA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_BLGLLANPAKA_DCNHFAJLDPA_OFFSET))(this, GLAOEHCGCFO);
	}
};
