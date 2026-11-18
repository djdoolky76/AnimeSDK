#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/NodeGraph/VariantUnion_VariantType.h"
#include "unitysdk/System/Object.h"

class NCOHFCFKLND;
namespace System { class String; }

#define NPBDFEABOHA_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x10DB0470)
#define NPBDFEABOHA_JKHFEJJKJCC_OFFSET UNITYSDK_OFFSET(0x10DB02F0)
#define NPBDFEABOHA_KJKCAKKPNKO_OFFSET UNITYSDK_OFFSET(0x10DB0410)
#define NPBDFEABOHA__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB02E0)

inline static constexpr unsigned int NPBDFEABOHA_TypeDefinitionIndex = 50098;

class NPBDFEABOHA : public ::System::Object
{
public:
	// static const ::System::Int32 CAKKKOLMEPA = 0x1; // 0x0
	// static const ::System::Int32 ALBIADPKFMN = 0x2; // 0x0
	// static const ::System::Int32 GOIEFLOCAOP = 0x3; // 0x0
	::NodeGraph::VariantUnion DNKAHMLEAEE; // 0x10
	::System::Int32 OMJALKHKPKB; // 0x28

	::System::Void _ctor(::System::Int32 CFFCKJIDPDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPBDFEABOHA__CTOR_OFFSET))(this, CFFCKJIDPDC);
	}

	::NCOHFCFKLND* JKHFEJJKJCC(::System::String* HNOPAJLDCFB)
	{
		return ((::NCOHFCFKLND*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPBDFEABOHA_JKHFEJJKJCC_OFFSET))(this, HNOPAJLDCFB);
	}

	::NodeGraph::VariantUnion_VariantType KJKCAKKPNKO()
	{
		return ((::NodeGraph::VariantUnion_VariantType(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDFEABOHA_KJKCAKKPNKO_OFFSET))(this);
	}

	::NodeGraph::VariantUnion FHDJDIIPGGP()
	{
		return ((::NodeGraph::VariantUnion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBDFEABOHA_FHDJDIIPGGP_OFFSET))(this);
	}
};
