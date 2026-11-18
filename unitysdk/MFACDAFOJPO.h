#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AICompareType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MFACDAFOJPO_BCFNADEMEOA_OFFSET UNITYSDK_OFFSET(0x10742BC0)
#define MFACDAFOJPO_DGBOKGJGGII_OFFSET UNITYSDK_OFFSET(0x10742CD0)
#define MFACDAFOJPO_KAOCNFNGKKM_OFFSET UNITYSDK_OFFSET(0x10742AA0)
#define MFACDAFOJPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x10742A50)
#define MFACDAFOJPO__CTOR_OFFSET UNITYSDK_OFFSET(0x10742A40)

inline static constexpr unsigned int MFACDAFOJPO_TypeDefinitionIndex = 88001;

class MFACDAFOJPO : public ::System::Object
{
public:
	static ::System::String** StaticGet_PAKDFPCFONB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MFACDAFOJPO_TypeDefinitionIndex)->GetStaticField(0x32BD0);
	}
	static ::System::String** StaticGet_AGCPCIBEEOH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MFACDAFOJPO_TypeDefinitionIndex)->GetStaticField(0x32BD8);
	}
	// static const ::System::String* NNNPPLFNKMD; // 0x0
	// static const ::System::String* COOFEHBMENA; // 0x0
	// static const ::System::String* EDLLIPLBDLI; // 0x0
	// static const ::System::String* JNCKIBIDEFN; // 0x0
	// static const ::System::String* DBJBEAIHPFG; // 0x0
	// static const ::System::String* EOELBNPGIKK; // 0x0
	// static const ::System::Int32 POCKNKPBNPC = 0x4; // 0x0
	// static const ::System::Int32 BJMMMEBPOHM = 0x2; // 0x0
	// static const ::System::Int32 HNOBBHKDCEI = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFACDAFOJPO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFACDAFOJPO__CCTOR_OFFSET))();
	}

	static ::System::Boolean KAOCNFNGKKM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFACDAFOJPO_KAOCNFNGKKM_OFFSET))();
	}

	static ::System::Void BCFNADEMEOA(::System::Boolean EFGCGIAAFNB)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MFACDAFOJPO_BCFNADEMEOA_OFFSET))(EFGCGIAAFNB);
	}

	static ::System::Boolean DGBOKGJGGII(::MoleMole::AICompareType FAMMCEJDLFE, ::System::Single KIADGHJNLAC, ::System::Single KHMMANBNPII)
	{
		return ((::System::Boolean(*)(::MoleMole::AICompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MFACDAFOJPO_DGBOKGJGGII_OFFSET))(FAMMCEJDLFE, KIADGHJNLAC, KHMMANBNPII);
	}
};
