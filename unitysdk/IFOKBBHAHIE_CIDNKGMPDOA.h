#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_CIDNKGMPDOA_FMNEOOIOHFC_OFFSET UNITYSDK_OFFSET(0x141C1A60)
#define IFOKBBHAHIE_CIDNKGMPDOA_NCNIONHGGPN_OFFSET UNITYSDK_OFFSET(0x141C1A50)
#define IFOKBBHAHIE_CIDNKGMPDOA__CTOR_OFFSET UNITYSDK_OFFSET(0x141C1A40)

inline static constexpr unsigned int IFOKBBHAHIE_CIDNKGMPDOA_TypeDefinitionIndex = 67435;

class IFOKBBHAHIE_CIDNKGMPDOA : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_CIDNKGMPDOA__CTOR_OFFSET))(this);
	}

	::System::Void NCNIONHGGPN(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_CIDNKGMPDOA_NCNIONHGGPN_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void FMNEOOIOHFC(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_CIDNKGMPDOA_FMNEOOIOHFC_OFFSET))(this, NAPFALLANDL);
	}
};
