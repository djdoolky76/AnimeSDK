#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define ALMDGBBABEC_AKDGNMLAOLH_JMFAMNDJEHJ_OFFSET UNITYSDK_OFFSET(0x14516330)
#define ALMDGBBABEC_AKDGNMLAOLH_PANGFNOKDIF_OFFSET UNITYSDK_OFFSET(0x14516320)
#define ALMDGBBABEC_AKDGNMLAOLH__CTOR_OFFSET UNITYSDK_OFFSET(0x14516310)

inline static constexpr unsigned int ALMDGBBABEC_AKDGNMLAOLH_TypeDefinitionIndex = 48965;

class ALMDGBBABEC_AKDGNMLAOLH : public ::System::Object
{
public:
	::System::Action* AFKOOINGNAK; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMDGBBABEC_AKDGNMLAOLH__CTOR_OFFSET))(this);
	}

	::System::Void PANGFNOKDIF(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ALMDGBBABEC_AKDGNMLAOLH_PANGFNOKDIF_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void JMFAMNDJEHJ(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ALMDGBBABEC_AKDGNMLAOLH_JMFAMNDJEHJ_OFFSET))(this, JMFEPDAHBED);
	}
};
