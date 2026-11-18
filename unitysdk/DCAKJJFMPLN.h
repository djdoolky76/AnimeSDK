#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HJDNNLKBHBA;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define DCAKJJFMPLN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13E382C0)
#define DCAKJJFMPLN_GEALDNDMILO_OFFSET UNITYSDK_OFFSET(0x13E383C0)
#define DCAKJJFMPLN_MCFEAHMADKC_OFFSET UNITYSDK_OFFSET(0x13E38230)
#define DCAKJJFMPLN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13E38700)
#define DCAKJJFMPLN_OACCFMPBNCO_OFFSET UNITYSDK_OFFSET(0x13E37E80)
#define DCAKJJFMPLN_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13E38480)
#define DCAKJJFMPLN__CTOR_OFFSET UNITYSDK_OFFSET(0x13E37E70)

inline static constexpr unsigned int DCAKJJFMPLN_TypeDefinitionIndex = 64548;

class DCAKJJFMPLN : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* MGCPBHDGAID; // 0x10
	::HJDNNLKBHBA* POBADKEDFOE; // 0x18
	::System::Single PONJLEFMPDO; // 0x20
	::System::Single EOFEKOLFOPO; // 0x24
	::System::Single HACJFKBLODH; // 0x28
	::System::Boolean CPMAEOHBMBA; // 0x2C
	::System::Boolean GLCOFPJLMEE; // 0x2D
	::System::Byte _padding0[0x2];
	::System::Single JOFGIANGHMK; // 0x30
	::System::Single NGCBAGHIOAK; // 0x34
	::System::Single PPELJIHKBBD; // 0x38
	::System::Single MDPPNMIPDMP; // 0x3C
	::System::Single GDAJMGOECAA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAKJJFMPLN__CTOR_OFFSET))(this);
	}

	::System::Void OACCFMPBNCO(::System::Boolean& AAHNOLAFLCJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + DCAKJJFMPLN_OACCFMPBNCO_OFFSET))(this, AAHNOLAFLCJ);
	}

	::System::Void BBOMJDBNHIC(::HJDNNLKBHBA* POBADKEDFOE, ::System::Single GEGOALONGBI, ::System::Single DLBFEAOALML, ::System::Single MDPPNMIPDMP, ::System::Single HODAIDNDKHD, ::System::String* JOMMDBHDKNG)
	{
		return ((::System::Void(*)(::PVOID, ::HJDNNLKBHBA*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + DCAKJJFMPLN_BBOMJDBNHIC_OFFSET))(this, POBADKEDFOE, GEGOALONGBI, DLBFEAOALML, MDPPNMIPDMP, HODAIDNDKHD, JOMMDBHDKNG);
	}

	::System::Void GEALDNDMILO(::System::String* JOMMDBHDKNG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DCAKJJFMPLN_GEALDNDMILO_OFFSET))(this, JOMMDBHDKNG);
	}

	::System::Single MCFEAHMADKC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAKJJFMPLN_MCFEAHMADKC_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCAKJJFMPLN_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAKJJFMPLN_NPOLNFDBOOD_OFFSET))(this);
	}
};
