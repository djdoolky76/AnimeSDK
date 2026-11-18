#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLPMLAJELBL.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class AOEHPGLBLIH;
class FCANEPJMANL;

#define EGBBLLGAOJC_DLMLOJGEOCE_OFFSET UNITYSDK_OFFSET(0x135473F0)
#define EGBBLLGAOJC_FOBKBCAJCLJ_OFFSET UNITYSDK_OFFSET(0x13547270)
#define EGBBLLGAOJC__CTOR_OFFSET UNITYSDK_OFFSET(0x13547260)

inline static constexpr unsigned int EGBBLLGAOJC_TypeDefinitionIndex = 60705;

class EGBBLLGAOJC : public ::PLPMLAJELBL
{
public:
	::System::Void _ctor(::AOEHPGLBLIH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*))((::PBYTE)hIl2Cpp + EGBBLLGAOJC__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::FCANEPJMANL* FOBKBCAJCLJ(::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::FCANEPJMANL*(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + EGBBLLGAOJC_FOBKBCAJCLJ_OFFSET))(this, KMFOONLDBFA, ABHBKFJKINO);
	}

	::FCANEPJMANL* DLMLOJGEOCE(::NodeGraph::VariantUnion MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::FCANEPJMANL*(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + EGBBLLGAOJC_DLMLOJGEOCE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
