#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBENDELLLAO.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class AOEHPGLBLIH;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define FCANEPJMANL_COIEEDMIEMP_OFFSET UNITYSDK_OFFSET(0x11ABE2B0)
#define FCANEPJMANL_GENMOJKFIMJ_OFFSET UNITYSDK_OFFSET(0x11ABE040)
#define FCANEPJMANL_ILDHEBJLDND_OFFSET UNITYSDK_OFFSET(0x11ABE210)
#define FCANEPJMANL_KIFFOOFOILN_OFFSET UNITYSDK_OFFSET(0x11ABE110)
#define FCANEPJMANL_MFPPPMPEKCP_OFFSET UNITYSDK_OFFSET(0x11ABE450)
#define FCANEPJMANL__CTOR_OFFSET UNITYSDK_OFFSET(0x11ABDF20)

inline static constexpr unsigned int FCANEPJMANL_TypeDefinitionIndex = 58642;

class FCANEPJMANL : public ::IBENDELLLAO
{
public:
	::System::Int32 MLNKCNJEOMI; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCANEPJMANL__CTOR_OFFSET))(this);
	}

	::System::Void GENMOJKFIMJ(::IBENDELLLAO* JNLBPMKIFNK, ::System::Boolean NHDNNKAKBDE)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCANEPJMANL_GENMOJKFIMJ_OFFSET))(this, JNLBPMKIFNK, NHDNNKAKBDE);
	}

	::System::String* KIFFOOFOILN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCANEPJMANL_KIFFOOFOILN_OFFSET))(this);
	}

	::System::String* ILDHEBJLDND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCANEPJMANL_ILDHEBJLDND_OFFSET))(this);
	}

	::System::Void COIEEDMIEMP(::AOEHPGLBLIH* DFMKILICPFB, ::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Int32 ABHBKFJKINO, ::System::Func_3<::NodeGraph::VariantUnion, ::System::Int32, ::System::Int32>* EACNBJIJJBP)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*, ::NodeGraph::VariantUnion, ::System::Int32, ::System::Func_3<::NodeGraph::VariantUnion, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FCANEPJMANL_COIEEDMIEMP_OFFSET))(this, DFMKILICPFB, KMFOONLDBFA, ABHBKFJKINO, EACNBJIJJBP);
	}

	::System::Void MFPPPMPEKCP(::IBENDELLLAO* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCANEPJMANL_MFPPPMPEKCP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
