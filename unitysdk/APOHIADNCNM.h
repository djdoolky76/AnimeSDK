#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLPMLAJELBL.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class AOEHPGLBLIH;
class FCANEPJMANL;

#define APOHIADNCNM_DLMLOJGEOCE_OFFSET UNITYSDK_OFFSET(0x1821EE90)
#define APOHIADNCNM_FOBKBCAJCLJ_OFFSET UNITYSDK_OFFSET(0x1821ED10)
#define APOHIADNCNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1821ED00)

inline static constexpr unsigned int APOHIADNCNM_TypeDefinitionIndex = 50948;

class APOHIADNCNM : public ::PLPMLAJELBL
{
public:
	::System::Void _ctor(::AOEHPGLBLIH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*))((::PBYTE)hIl2Cpp + APOHIADNCNM__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::FCANEPJMANL* FOBKBCAJCLJ(::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::FCANEPJMANL*(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + APOHIADNCNM_FOBKBCAJCLJ_OFFSET))(this, KMFOONLDBFA, ABHBKFJKINO);
	}

	::FCANEPJMANL* DLMLOJGEOCE(::NodeGraph::VariantUnion MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::FCANEPJMANL*(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + APOHIADNCNM_DLMLOJGEOCE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
