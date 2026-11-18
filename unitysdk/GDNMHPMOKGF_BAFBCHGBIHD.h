#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDNMHPMOKGF;

#define GDNMHPMOKGF_BAFBCHGBIHD_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x18133160)
#define GDNMHPMOKGF_BAFBCHGBIHD_JINCFIGEAKM_OFFSET UNITYSDK_OFFSET(0x18132EA0)
#define GDNMHPMOKGF_BAFBCHGBIHD_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x18132F30)
#define GDNMHPMOKGF_BAFBCHGBIHD__CTOR_OFFSET UNITYSDK_OFFSET(0x181331A0)

inline static constexpr unsigned int GDNMHPMOKGF_BAFBCHGBIHD_TypeDefinitionIndex = 67613;

class GDNMHPMOKGF_BAFBCHGBIHD : public ::System::Object
{
public:
	::System::Boolean EMFIJLMPMEG; // 0x10
	::System::Boolean GEAPCDLJOCN; // 0x11
	::System::Boolean DIIDANKMCAE; // 0x12
	::System::Byte _padding0[0x1];
	::System::Single PLGPEAMLKFJ; // 0x14
	::System::Single CKMNLHHOAAL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_BAFBCHGBIHD__CTOR_OFFSET))(this);
	}

	::System::Void JINCFIGEAKM(::GDNMHPMOKGF* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::GDNMHPMOKGF*))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_BAFBCHGBIHD_JINCFIGEAKM_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void PLPONJAKNEB(::GDNMHPMOKGF* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::GDNMHPMOKGF*))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_BAFBCHGBIHD_PLPONJAKNEB_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNMHPMOKGF_BAFBCHGBIHD_HBPLINHBFFK_OFFSET))(this);
	}
};
