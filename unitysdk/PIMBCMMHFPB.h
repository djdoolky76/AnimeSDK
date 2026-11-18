#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBENDELLLAO.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class AOEHPGLBLIH;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIMBCMMHFPB_BMIMLEKODLE_OFFSET UNITYSDK_OFFSET(0x194A8890)
#define PIMBCMMHFPB_GENMOJKFIMJ_OFFSET UNITYSDK_OFFSET(0x194A86D0)
#define PIMBCMMHFPB_ILDHEBJLDND_OFFSET UNITYSDK_OFFSET(0x194A8A20)
#define PIMBCMMHFPB_KIFFOOFOILN_OFFSET UNITYSDK_OFFSET(0x194A87A0)
#define PIMBCMMHFPB_MFPPPMPEKCP_OFFSET UNITYSDK_OFFSET(0x194A8880)
#define PIMBCMMHFPB__CTOR_OFFSET UNITYSDK_OFFSET(0x194A85B0)

inline static constexpr unsigned int PIMBCMMHFPB_TypeDefinitionIndex = 71857;

class PIMBCMMHFPB : public ::IBENDELLLAO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMBCMMHFPB__CTOR_OFFSET))(this);
	}

	::System::Void GENMOJKFIMJ(::IBENDELLLAO* JNLBPMKIFNK, ::System::Boolean NHDNNKAKBDE)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIMBCMMHFPB_GENMOJKFIMJ_OFFSET))(this, JNLBPMKIFNK, NHDNNKAKBDE);
	}

	::System::String* KIFFOOFOILN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMBCMMHFPB_KIFFOOFOILN_OFFSET))(this);
	}

	::System::Void MFPPPMPEKCP(::IBENDELLLAO* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIMBCMMHFPB_MFPPPMPEKCP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void BMIMLEKODLE(::AOEHPGLBLIH* DFMKILICPFB, ::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>* EACNBJIJJBP)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*, ::NodeGraph::VariantUnion, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>*))((::PBYTE)hIl2Cpp + PIMBCMMHFPB_BMIMLEKODLE_OFFSET))(this, DFMKILICPFB, KMFOONLDBFA, EACNBJIJJBP);
	}

	::System::String* ILDHEBJLDND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMBCMMHFPB_ILDHEBJLDND_OFFSET))(this);
	}
};
