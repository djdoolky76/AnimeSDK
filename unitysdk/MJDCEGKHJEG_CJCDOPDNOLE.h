#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_CJCDOPDNOLE_NNMEPLBPNEJ_OFFSET UNITYSDK_OFFSET(0x11A05450)
#define MJDCEGKHJEG_CJCDOPDNOLE_OCNKJIGBIJK_OFFSET UNITYSDK_OFFSET(0x11A05460)
#define MJDCEGKHJEG_CJCDOPDNOLE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A05440)

inline static constexpr unsigned int MJDCEGKHJEG_CJCDOPDNOLE_TypeDefinitionIndex = 56450;

class MJDCEGKHJEG_CJCDOPDNOLE : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_CJCDOPDNOLE__CTOR_OFFSET))(this);
	}

	::System::Void NNMEPLBPNEJ(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_CJCDOPDNOLE_NNMEPLBPNEJ_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void OCNKJIGBIJK(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_CJCDOPDNOLE_OCNKJIGBIJK_OFFSET))(this, DJCNCELJPOM);
	}
};
