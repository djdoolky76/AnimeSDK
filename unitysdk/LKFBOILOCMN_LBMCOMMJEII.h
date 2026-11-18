#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMFICBDLJKB;
class LHIOGJMEIEI;

#define LKFBOILOCMN_LBMCOMMJEII_JPFGICNHJID_OFFSET UNITYSDK_OFFSET(0x11F1F1F0)
#define LKFBOILOCMN_LBMCOMMJEII__CTOR_OFFSET UNITYSDK_OFFSET(0x11F1F1E0)

inline static constexpr unsigned int LKFBOILOCMN_LBMCOMMJEII_TypeDefinitionIndex = 82639;

class LKFBOILOCMN_LBMCOMMJEII : public ::System::Object
{
public:
	::System::Int32 ILOHMDELDKK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LBMCOMMJEII__CTOR_OFFSET))(this);
	}

	::CMFICBDLJKB* JPFGICNHJID(::LHIOGJMEIEI* BDHOILPIGKB)
	{
		return ((::CMFICBDLJKB*(*)(::PVOID, ::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LBMCOMMJEII_JPFGICNHJID_OFFSET))(this, BDHOILPIGKB);
	}
};
