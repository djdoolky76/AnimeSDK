#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class IEFCEGHFEJK;
class JEKOHJMBOOI;
namespace System { class String; }

#define IFMILFCFGEP_AGMIEPHKNHB_OFFSET UNITYSDK_OFFSET(0x12EA9900)
#define IFMILFCFGEP_ANABLKFNCLC_OFFSET UNITYSDK_OFFSET(0x12EA9950)
#define IFMILFCFGEP_ANMOCNBJHIE_OFFSET UNITYSDK_OFFSET(0x12EA99F0)
#define IFMILFCFGEP_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x12EA9620)
#define IFMILFCFGEP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12EA9AC0)
#define IFMILFCFGEP_HJDKNNHCPJK_OFFSET UNITYSDK_OFFSET(0x12EA9910)
#define IFMILFCFGEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12EA96A0)
#define IFMILFCFGEP__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA98C0)

inline static constexpr unsigned int IFMILFCFGEP_TypeDefinitionIndex = 40413;

class IFMILFCFGEP
{
public:
	// static const ::System::String* ECCBDPJOMEI; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMILFCFGEP__CTOR_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM(::IEFCEGHFEJK* EOBMPPJGEIE)
	{
		return ((::System::Void(*)(::PVOID, ::IEFCEGHFEJK*))((::PBYTE)hIl2Cpp + IFMILFCFGEP_DKCCELBNBLM_OFFSET))(this, EOBMPPJGEIE);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMILFCFGEP_TOSTRING_OFFSET))(this);
	}

	::System::Boolean AGMIEPHKNHB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMILFCFGEP_AGMIEPHKNHB_OFFSET))(this);
	}

	::System::Void HJDKNNHCPJK(::IEFCEGHFEJK* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::IEFCEGHFEJK*))((::PBYTE)hIl2Cpp + IFMILFCFGEP_HJDKNNHCPJK_OFFSET))(this, MIALFKCCCPI);
	}

	::Cysharp::Threading::Tasks::UniTask ANABLKFNCLC()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMILFCFGEP_ANABLKFNCLC_OFFSET))(this);
	}

	::System::Boolean ANMOCNBJHIE(::JEKOHJMBOOI* EPIDDDEJJDE)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEKOHJMBOOI*))((::PBYTE)hIl2Cpp + IFMILFCFGEP_ANMOCNBJHIE_OFFSET))(this, EPIDDDEJJDE);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMILFCFGEP_DPIHOJBBGLA_OFFSET))(this);
	}
};
