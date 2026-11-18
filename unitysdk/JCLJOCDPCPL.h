#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_WaveType.h"
#include "unitysdk/System/Object.h"

class OAELENKFJDC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCLJOCDPCPL_AKMIGMNANND_OFFSET UNITYSDK_OFFSET(0x16AC8E70)
#define JCLJOCDPCPL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16AC82D0)
#define JCLJOCDPCPL_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x16AC80E0)
#define JCLJOCDPCPL_EEPGAKJANJB_OFFSET UNITYSDK_OFFSET(0x16AC8DE0)
#define JCLJOCDPCPL_GOMMDONOGBP_OFFSET UNITYSDK_OFFSET(0x16AC8090)
#define JCLJOCDPCPL_HGIMEJKKKBE_OFFSET UNITYSDK_OFFSET(0x16AC8A80)
#define JCLJOCDPCPL_JMGAIDLMCMN_OFFSET UNITYSDK_OFFSET(0x16AC8B90)
#define JCLJOCDPCPL_MCJCCJOEKGN_OFFSET UNITYSDK_OFFSET(0x16AC8E30)
#define JCLJOCDPCPL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16AC8CB0)
#define JCLJOCDPCPL_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16AC88C0)
#define JCLJOCDPCPL__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC8010)

inline static constexpr unsigned int JCLJOCDPCPL_TypeDefinitionIndex = 49647;

class JCLJOCDPCPL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::OAELENKFJDC*>* CMAKAHIFEPM; // 0x10
	::System::String* DKJGDHKMILC; // 0x18
	::MoleMole::Config::LevelShootGameConfig_WaveType AHBEDKOBGPD; // 0x20
	::System::Boolean OOGLHLBACBD; // 0x24
	::System::Boolean AJFFIBBGBCG; // 0x25
	::System::Byte _padding0[0x2];
	::System::Single DLBFEAOALML; // 0x28
	::System::Single MDPPNMIPDMP; // 0x2C
	::System::Single AAFNFPAMPJI; // 0x30
	::System::Single HACJFKBLODH; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLJOCDPCPL__CTOR_OFFSET))(this);
	}

	::System::Single GOMMDONOGBP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_GOMMDONOGBP_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 FOGOIGGBCHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_BBOMJDBNHIC_OFFSET))(this, FOGOIGGBCHK);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Single EEPGAKJANJB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_EEPGAKJANJB_OFFSET))(this);
	}

	::System::Boolean JMGAIDLMCMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_JMGAIDLMCMN_OFFSET))(this);
	}

	::System::Boolean MCJCCJOEKGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_MCJCCJOEKGN_OFFSET))(this);
	}

	::System::Void HGIMEJKKKBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_HGIMEJKKKBE_OFFSET))(this);
	}

	::System::Void AKMIGMNANND(::System::Single DLBFEAOALML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCLJOCDPCPL_AKMIGMNANND_OFFSET))(this, DLBFEAOALML);
	}
};
