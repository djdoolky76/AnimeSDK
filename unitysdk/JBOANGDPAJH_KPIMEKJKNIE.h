#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JBOANGDPAJH;

#define JBOANGDPAJH_KPIMEKJKNIE_FHOOJCCHKHJ_OFFSET UNITYSDK_OFFSET(0x160D45B0)
#define JBOANGDPAJH_KPIMEKJKNIE_OCCMLCJEGHN_OFFSET UNITYSDK_OFFSET(0x160D4830)
#define JBOANGDPAJH_KPIMEKJKNIE__CTOR_OFFSET UNITYSDK_OFFSET(0x160D45A0)

inline static constexpr unsigned int JBOANGDPAJH_KPIMEKJKNIE_TypeDefinitionIndex = 45614;

class JBOANGDPAJH_KPIMEKJKNIE : public ::System::Object
{
public:
	::JBOANGDPAJH* KLHPEBKNIFB; // 0x10
	::System::Int32 BHCPLPFMODM; // 0x18
	::System::Single JABKCLKHHLP; // 0x1C
	::System::Int32 MECCCNJCNKO; // 0x20
	::System::Single IEAJHIAMLGA; // 0x24
	::System::Single LLJIGFAINAA; // 0x28
	::System::Int32 HDCEOGICEJE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOANGDPAJH_KPIMEKJKNIE__CTOR_OFFSET))(this);
	}

	::System::Void FHOOJCCHKHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOANGDPAJH_KPIMEKJKNIE_FHOOJCCHKHJ_OFFSET))(this);
	}

	::System::Void OCCMLCJEGHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOANGDPAJH_KPIMEKJKNIE_OCCMLCJEGHN_OFFSET))(this);
	}
};
