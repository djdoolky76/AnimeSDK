#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EJEPGMHFOMD_JNFFPJJFJCE_ALJFOCKEHEI_OFFSET UNITYSDK_OFFSET(0x17116FF0)
#define EJEPGMHFOMD_JNFFPJJFJCE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17117000)
#define EJEPGMHFOMD_JNFFPJJFJCE_MIKDHNEIAHC_OFFSET UNITYSDK_OFFSET(0x17116FE0)
#define EJEPGMHFOMD_JNFFPJJFJCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17116FD0)

inline static constexpr unsigned int EJEPGMHFOMD_JNFFPJJFJCE_TypeDefinitionIndex = 58500;

class EJEPGMHFOMD_JNFFPJJFJCE : public ::System::Object
{
public:
	::System::Boolean LPNFCCBDKDP; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single IBDFINKLPMM; // 0x14
	::System::Single IFIOCPGMEHC; // 0x18
	::System::Single AFNOMONANBF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEPGMHFOMD_JNFFPJJFJCE__CTOR_OFFSET))(this);
	}

	::System::Single MIKDHNEIAHC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEPGMHFOMD_JNFFPJJFJCE_MIKDHNEIAHC_OFFSET))(this);
	}

	::System::Void ALJFOCKEHEI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJEPGMHFOMD_JNFFPJJFJCE_ALJFOCKEHEI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBOMJDBNHIC(::System::Single IFIOCPGMEHC, ::System::Boolean CMFDBJEHKCA, ::System::Single KPEAPHBMOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + EJEPGMHFOMD_JNFFPJJFJCE_BBOMJDBNHIC_OFFSET))(this, IFIOCPGMEHC, CMFDBJEHKCA, KPEAPHBMOOL);
	}
};
