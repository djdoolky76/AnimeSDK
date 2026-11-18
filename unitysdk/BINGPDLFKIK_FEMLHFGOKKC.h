#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BINGPDLFKIK_NIEPMBKBFDK.h"
#include "unitysdk/System/ValueType.h"

namespace FlowCanvas { class FlowGraph; }
namespace FlowCanvas { class FlowScriptController; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Variable; }
namespace System { class String; }

#define BINGPDLFKIK_FEMLHFGOKKC_CHOKIAEFIFJ_OFFSET UNITYSDK_OFFSET(0x678FD0)
#define BINGPDLFKIK_FEMLHFGOKKC_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x678FE0)
#define BINGPDLFKIK_FEMLHFGOKKC_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x679100)
#define BINGPDLFKIK_FEMLHFGOKKC_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x678FC0)
#define BINGPDLFKIK_FEMLHFGOKKC_FJEMCJJOEND_OFFSET UNITYSDK_OFFSET(0x679080)
#define BINGPDLFKIK_FEMLHFGOKKC_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x679060)
#define BINGPDLFKIK_FEMLHFGOKKC_JNDKICCOOIG_OFFSET UNITYSDK_OFFSET(0x679170)
#define BINGPDLFKIK_FEMLHFGOKKC_NFIDCGGFFCB_OFFSET UNITYSDK_OFFSET(0x679070)
#define BINGPDLFKIK_FEMLHFGOKKC_PJFDKMFOLNO_OFFSET UNITYSDK_OFFSET(0x679050)
#define BINGPDLFKIK_FEMLHFGOKKC_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x113EB5D0)
#define BINGPDLFKIK_FEMLHFGOKKC__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int BINGPDLFKIK_FEMLHFGOKKC_TypeDefinitionIndex = 61266;

struct alignas(8) BINGPDLFKIK_FEMLHFGOKKC
{
	::BINGPDLFKIK_NIEPMBKBFDK FNLGDLHAEGD; // 0x10
	::System::Byte _padding0[0x4];
	::FlowCanvas::FlowScriptController* HDNKMBCIOHD; // 0x18

	::System::Void _ctor(::BINGPDLFKIK_NIEPMBKBFDK OBNIAHNMHPF, ::FlowCanvas::FlowScriptController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::BINGPDLFKIK_NIEPMBKBFDK, ::FlowCanvas::FlowScriptController*))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC__CTOR_OFFSET))(this, OBNIAHNMHPF, NCIMBHDKIJM);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_FFCPIEDHBDP_OFFSET))(this);
	}

	::NodeCanvas::Framework::Variable* CHOKIAEFIFJ(::System::String* AHJKNBGHELD)
	{
		return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_CHOKIAEFIFJ_OFFSET))(this, AHJKNBGHELD);
	}

	::System::Void DNNJOOJBJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_DNNJOOJBJNB_OFFSET))(this);
	}

	::NodeCanvas::Framework::Variable* PJFDKMFOLNO(::System::String* AHJKNBGHELD)
	{
		return ((::NodeCanvas::Framework::Variable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_PJFDKMFOLNO_OFFSET))(this, AHJKNBGHELD);
	}

	/*
	static ::BINGPDLFKIK_FEMLHFGOKKC PPGBHNIJOIB()
	{
		return ((::BINGPDLFKIK_FEMLHFGOKKC(*)())((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_PPGBHNIJOIB_OFFSET))();
	}
	*/

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_JJEJHGOJOII_OFFSET))(this);
	}

	::NodeCanvas::Framework::Graph* NFIDCGGFFCB()
	{
		return ((::NodeCanvas::Framework::Graph*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_NFIDCGGFFCB_OFFSET))(this);
	}

	::System::Void FJEMCJJOEND(::System::String* KPIAFDELPJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_FJEMCJJOEND_OFFSET))(this, KPIAFDELPJL);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Boolean JNDKICCOOIG(::FlowCanvas::FlowGraph* DKALOJNFEEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::FlowGraph*))((::PBYTE)hIl2Cpp + BINGPDLFKIK_FEMLHFGOKKC_JNDKICCOOIG_OFFSET))(this, DKALOJNFEEF);
	}
};
