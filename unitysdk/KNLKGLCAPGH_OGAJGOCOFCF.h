#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_OGAJGOCOFCF_HEHLMDKMPOA_OFFSET UNITYSDK_OFFSET(0x16822B50)
#define KNLKGLCAPGH_OGAJGOCOFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x16822B40)

inline static constexpr unsigned int KNLKGLCAPGH_OGAJGOCOFCF_TypeDefinitionIndex = 41122;

class KNLKGLCAPGH_OGAJGOCOFCF : public ::System::Object
{
public:
	::System::Action* NGFDBMGHFCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_OGAJGOCOFCF__CTOR_OFFSET))(this);
	}

	::System::Void HEHLMDKMPOA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_OGAJGOCOFCF_HEHLMDKMPOA_OFFSET))(this, GLAOEHCGCFO);
	}
};
