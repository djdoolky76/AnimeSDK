#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BINGPDLFKIK_NIEPMBKBFDK.h"
#include "unitysdk/System/Object.h"

class BINGPDLFKIK;
namespace FlowCanvas { class FlowScriptController; }
namespace NodeCanvas::Framework { class Variable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BINGPDLFKIK_FCADJJKPBKC_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1867F910)
#define BINGPDLFKIK_FCADJJKPBKC_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x1867F7C0)
#define BINGPDLFKIK_FCADJJKPBKC_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1867EEC0)
#define BINGPDLFKIK_FCADJJKPBKC_KECLFPFGNCN_OFFSET UNITYSDK_OFFSET(0x1867F180)
#define BINGPDLFKIK_FCADJJKPBKC_KLPKAPADKOG_OFFSET UNITYSDK_OFFSET(0x1867F7A0)
#define BINGPDLFKIK_FCADJJKPBKC_KPBOACMBLIJ_OFFSET UNITYSDK_OFFSET(0x1867F170)
#define BINGPDLFKIK_FCADJJKPBKC_MCCPKCIMFEC_OFFSET UNITYSDK_OFFSET(0x1867F160)
#define BINGPDLFKIK_FCADJJKPBKC_NACLODBGOJM_OFFSET UNITYSDK_OFFSET(0x1867F7B0)
#define BINGPDLFKIK_FCADJJKPBKC_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1867F010)
#define BINGPDLFKIK_FCADJJKPBKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1867EC00)

inline static constexpr unsigned int BINGPDLFKIK_FCADJJKPBKC_TypeDefinitionIndex = 61268;

class BINGPDLFKIK_FCADJJKPBKC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FlowCanvas::FlowScriptController*>* OBBDCJKDEJE; // 0x10
	::UnityEngine::GameObject* HHBBOINFPAI; // 0x18
	::BINGPDLFKIK* KHICFJPIGFM; // 0x20
	::BINGPDLFKIK_NIEPMBKBFDK _KOOCKIFALDB_k__BackingField; // 0x28
	::System::Boolean _NKOCKEAFPPD_k__BackingField; // 0x2C

	::System::Void _ctor(::BINGPDLFKIK* KHICFJPIGFM, ::System::String* HIAIKHDFCLN, ::UnityEngine::GameObject* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BINGPDLFKIK*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC__CTOR_OFFSET))(this, KHICFJPIGFM, HIAIKHDFCLN, JNLBPMKIFNK);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC_PGHAJOMNDDJ_OFFSET))(this);
	}

	::BINGPDLFKIK_NIEPMBKBFDK MCCPKCIMFEC()
	{
		return ((::BINGPDLFKIK_NIEPMBKBFDK(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC_MCCPKCIMFEC_OFFSET))(this);
	}

	::System::Void KPBOACMBLIJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC_KPBOACMBLIJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KECLFPFGNCN(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Variable*>* CFFOGHBKJEF, ::Il2CppArray<::System::String*>* OPCMGALKGKJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Variable*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC_KECLFPFGNCN_OFFSET))(this, CFFOGHBKJEF, OPCMGALKGKJ);
	}

	::System::Boolean KLPKAPADKOG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC_KLPKAPADKOG_OFFSET))(this);
	}

	::System::Void NACLODBGOJM(::BINGPDLFKIK_NIEPMBKBFDK EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BINGPDLFKIK_NIEPMBKBFDK))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC_NACLODBGOJM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FCADJJKPBKC_BJANDJKKNCD_OFFSET))(this);
	}
};
