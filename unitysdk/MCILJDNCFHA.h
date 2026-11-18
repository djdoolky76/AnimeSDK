#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLLACFEBJF.h"

class ENGKPGFGGLM;
namespace MoleMole::Config { class ControllableObjectTrait; }
namespace System { class String; }

#define MCILJDNCFHA_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xD445DC0)
#define MCILJDNCFHA_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0xD445D30)
#define MCILJDNCFHA_GHCNMOALKMM_OFFSET UNITYSDK_OFFSET(0xD445D40)
#define MCILJDNCFHA_ONEVENT_OFFSET UNITYSDK_OFFSET(0xD445C50)
#define MCILJDNCFHA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xD445CA0)
#define MCILJDNCFHA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD445C40)
#define MCILJDNCFHA__CTOR_OFFSET UNITYSDK_OFFSET(0xD445CF0)

inline static constexpr unsigned int MCILJDNCFHA_TypeDefinitionIndex = 62416;

class MCILJDNCFHA
{
public:
	::System::String* BLDGJFDHCCA; // 0x28
	::MoleMole::Config::ControllableObjectTrait* DEOGLFEFFME; // 0x30
	::System::Boolean KDHMDOJKJOK; // 0x38
	::System::Boolean BINJPOHLPOE; // 0x39
	::System::Boolean EPGCLLJOAMC; // 0x3A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCILJDNCFHA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCILJDNCFHA__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MCILJDNCFHA_ONEVENT_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCILJDNCFHA_ONRECYCLE_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MCILJDNCFHA_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHCNMOALKMM(::DLLLACFEBJF JPJBIBPBODE)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF))((::PBYTE)hIl2Cpp + MCILJDNCFHA_GHCNMOALKMM_OFFSET))(this, JPJBIBPBODE);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCILJDNCFHA_ANEOCOIFDDJ_OFFSET))(this);
	}
};
