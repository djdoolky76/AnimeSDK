#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLPMLAJELBL.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class AOEHPGLBLIH;
class FCANEPJMANL;

#define HBMDIEHGDEF_DLMLOJGEOCE_OFFSET UNITYSDK_OFFSET(0x16F231E0)
#define HBMDIEHGDEF_FOBKBCAJCLJ_OFFSET UNITYSDK_OFFSET(0x16F23060)
#define HBMDIEHGDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F23050)

inline static constexpr unsigned int HBMDIEHGDEF_TypeDefinitionIndex = 79754;

class HBMDIEHGDEF : public ::PLPMLAJELBL
{
public:
	::System::Void _ctor(::AOEHPGLBLIH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::AOEHPGLBLIH*))((::PBYTE)hIl2Cpp + HBMDIEHGDEF__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::FCANEPJMANL* FOBKBCAJCLJ(::NodeGraph::VariantUnion KMFOONLDBFA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::FCANEPJMANL*(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + HBMDIEHGDEF_FOBKBCAJCLJ_OFFSET))(this, KMFOONLDBFA, ABHBKFJKINO);
	}

	::FCANEPJMANL* DLMLOJGEOCE(::NodeGraph::VariantUnion MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::FCANEPJMANL*(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + HBMDIEHGDEF_DLMLOJGEOCE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
