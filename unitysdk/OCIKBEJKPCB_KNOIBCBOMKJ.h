#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIKBEJKPCB;
namespace System { class Action; }

#define OCIKBEJKPCB_KNOIBCBOMKJ_MDEKKHPGFMN_OFFSET UNITYSDK_OFFSET(0x12920A50)
#define OCIKBEJKPCB_KNOIBCBOMKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12920A40)

inline static constexpr unsigned int OCIKBEJKPCB_KNOIBCBOMKJ_TypeDefinitionIndex = 66586;

class OCIKBEJKPCB_KNOIBCBOMKJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::OCIKBEJKPCB* KLHPEBKNIFB; // 0x18
	::System::Boolean ECHCMNDKEOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_KNOIBCBOMKJ__CTOR_OFFSET))(this);
	}

	::System::Void MDEKKHPGFMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_KNOIBCBOMKJ_MDEKKHPGFMN_OFFSET))(this);
	}
};
