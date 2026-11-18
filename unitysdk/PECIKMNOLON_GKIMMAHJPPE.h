#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PECIKMNOLON;
namespace System { template <typename T> class Action_1; }

#define PECIKMNOLON_GKIMMAHJPPE_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1AFD7AF0)
#define PECIKMNOLON_GKIMMAHJPPE_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1AFD7BA0)
#define PECIKMNOLON_GKIMMAHJPPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD7AE0)

inline static constexpr unsigned int PECIKMNOLON_GKIMMAHJPPE_TypeDefinitionIndex = 83928;

class PECIKMNOLON_GKIMMAHJPPE : public ::System::Object
{
public:
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x10
	::PECIKMNOLON* KLHPEBKNIFB; // 0x40
	::System::Action_1<::OAEFGCLEHHO*>* DLMJCFBENGB; // 0x48
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x50
	::System::Int32 HPOEEFGLLHC; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIKMNOLON_GKIMMAHJPPE__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PECIKMNOLON_GKIMMAHJPPE_AAHMACBDCPN_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIKMNOLON_GKIMMAHJPPE_LIDNPLMPHAL_OFFSET))(this);
	}
};
