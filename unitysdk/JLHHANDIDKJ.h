#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class DCJEBIPDKMO;
class JEKOHJMBOOI;
namespace System { class String; }

#define JLHHANDIDKJ_AGMIEPHKNHB_OFFSET UNITYSDK_OFFSET(0x14FC1F20)
#define JLHHANDIDKJ_ANABLKFNCLC_OFFSET UNITYSDK_OFFSET(0x14FC1F30)
#define JLHHANDIDKJ_ANMOCNBJHIE_OFFSET UNITYSDK_OFFSET(0x14FC1DD0)
#define JLHHANDIDKJ_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x14FC1A40)
#define JLHHANDIDKJ_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x14FC1EE0)
#define JLHHANDIDKJ_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x14FC1AB0)
#define JLHHANDIDKJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x14FC1EA0)
#define JLHHANDIDKJ_HJDKNNHCPJK_OFFSET UNITYSDK_OFFSET(0x14FC1D90)
#define JLHHANDIDKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14FC1B30)
#define JLHHANDIDKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC1D50)

inline static constexpr unsigned int JLHHANDIDKJ_TypeDefinitionIndex = 83932;

class JLHHANDIDKJ
{
public:
	// static const ::System::String* INPMBOAGOCP; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHHANDIDKJ__CTOR_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHHANDIDKJ_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM(::DCJEBIPDKMO* EOBMPPJGEIE)
	{
		return ((::System::Void(*)(::PVOID, ::DCJEBIPDKMO*))((::PBYTE)hIl2Cpp + JLHHANDIDKJ_DKCCELBNBLM_OFFSET))(this, EOBMPPJGEIE);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHHANDIDKJ_TOSTRING_OFFSET))(this);
	}

	::System::Void HJDKNNHCPJK(::DCJEBIPDKMO* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DCJEBIPDKMO*))((::PBYTE)hIl2Cpp + JLHHANDIDKJ_HJDKNNHCPJK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean ANMOCNBJHIE(::JEKOHJMBOOI* EPIDDDEJJDE)
	{
		return ((::System::Boolean(*)(::PVOID, ::JEKOHJMBOOI*))((::PBYTE)hIl2Cpp + JLHHANDIDKJ_ANMOCNBJHIE_OFFSET))(this, EPIDDDEJJDE);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHHANDIDKJ_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHHANDIDKJ_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Boolean AGMIEPHKNHB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHHANDIDKJ_AGMIEPHKNHB_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ANABLKFNCLC()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHHANDIDKJ_ANABLKFNCLC_OFFSET))(this);
	}
};
