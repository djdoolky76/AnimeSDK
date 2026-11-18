#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MIODKPBHOEB;
class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_LIOPGMDMCNC_IMFPKCGFBAF_OFFSET UNITYSDK_OFFSET(0x1A65E4B0)
#define MJDCEGKHJEG_LIOPGMDMCNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65E4A0)

inline static constexpr unsigned int MJDCEGKHJEG_LIOPGMDMCNC_TypeDefinitionIndex = 56410;

class MJDCEGKHJEG_LIOPGMDMCNC : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::MIODKPBHOEB* JDDGEJLDACC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_LIOPGMDMCNC__CTOR_OFFSET))(this);
	}

	::System::Void IMFPKCGFBAF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_LIOPGMDMCNC_IMFPKCGFBAF_OFFSET))(this, PIIPCLCCOIG);
	}
};
