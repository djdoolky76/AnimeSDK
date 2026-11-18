#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EMDBMCPAIIN_ICOIJNKFDCJ_KNKLPCLMPDB_OFFSET UNITYSDK_OFFSET(0x13550AB0)
#define EMDBMCPAIIN_ICOIJNKFDCJ_OJAIJJMKEBE_OFFSET UNITYSDK_OFFSET(0x13550AA0)
#define EMDBMCPAIIN_ICOIJNKFDCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13550A90)

inline static constexpr unsigned int EMDBMCPAIIN_ICOIJNKFDCJ_TypeDefinitionIndex = 88334;

class EMDBMCPAIIN_ICOIJNKFDCJ : public ::System::Object
{
public:
	::System::Action* LJFKEJMODMK; // 0x10
	::System::Action* DMPEOJCCCLO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBMCPAIIN_ICOIJNKFDCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJAIJJMKEBE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EMDBMCPAIIN_ICOIJNKFDCJ_OJAIJJMKEBE_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KNKLPCLMPDB(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EMDBMCPAIIN_ICOIJNKFDCJ_KNKLPCLMPDB_OFFSET))(this, JMFEPDAHBED);
	}
};
