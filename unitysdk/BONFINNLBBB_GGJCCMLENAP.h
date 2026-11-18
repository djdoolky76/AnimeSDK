#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HBKABBHPFGJ;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define BONFINNLBBB_GGJCCMLENAP_KCDOGDLFMOI_OFFSET UNITYSDK_OFFSET(0x128BA5E0)
#define BONFINNLBBB_GGJCCMLENAP_PJNFAAOCNOB_OFFSET UNITYSDK_OFFSET(0x128BA710)
#define BONFINNLBBB_GGJCCMLENAP__CTOR_OFFSET UNITYSDK_OFFSET(0x128BA5D0)

inline static constexpr unsigned int BONFINNLBBB_GGJCCMLENAP_TypeDefinitionIndex = 40510;

class BONFINNLBBB_GGJCCMLENAP : public ::System::Object
{
public:
	::System::Action_1<::HBKABBHPFGJ*>* LJFKEJMODMK; // 0x10
	::System::Action_1<::HBKABBHPFGJ*>* LPFMDKKFMBA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONFINNLBBB_GGJCCMLENAP__CTOR_OFFSET))(this);
	}

	::System::Void KCDOGDLFMOI(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BONFINNLBBB_GGJCCMLENAP_KCDOGDLFMOI_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void PJNFAAOCNOB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BONFINNLBBB_GGJCCMLENAP_PJNFAAOCNOB_OFFSET))(this, NAPFALLANDL);
	}
};
