#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define LPJHHHCOLMO_IFGFEGMEBJB_BFDIFFIBFHE_OFFSET UNITYSDK_OFFSET(0x16C6DB50)
#define LPJHHHCOLMO_IFGFEGMEBJB_IIGBKEJGDMH_OFFSET UNITYSDK_OFFSET(0x16C6DB40)
#define LPJHHHCOLMO_IFGFEGMEBJB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6DB30)

inline static constexpr unsigned int LPJHHHCOLMO_IFGFEGMEBJB_TypeDefinitionIndex = 46630;

class LPJHHHCOLMO_IFGFEGMEBJB : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* AFKOOINGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_IFGFEGMEBJB__CTOR_OFFSET))(this);
	}

	::System::Void IIGBKEJGDMH(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_IFGFEGMEBJB_IIGBKEJGDMH_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void BFDIFFIBFHE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_IFGFEGMEBJB_BFDIFFIBFHE_OFFSET))(this, GLAOEHCGCFO);
	}
};
