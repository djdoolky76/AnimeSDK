#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class FDBFKHEPBON;
namespace System { class String; }

#define HELHJBHBFDO_JCNAJODHDNP_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0x146F64C0)
#define HELHJBHBFDO_JCNAJODHDNP__CTOR_OFFSET UNITYSDK_OFFSET(0x146F64B0)

inline static constexpr unsigned int HELHJBHBFDO_JCNAJODHDNP_TypeDefinitionIndex = 89054;

class HELHJBHBFDO_JCNAJODHDNP : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x10
	::HOCDHMEPPEG JBEPDJPHNOG; // 0x20
	::HOCDHMEPPEG HOKEPEGPNJP; // 0x50
	::System::String* KGLMFAMCOHO; // 0x80
	::System::String* GAEPFALFAIK; // 0x88
	::System::UInt32 AOCOIDIMLIH; // 0x90
	::System::Int32 AEIAFDJOACK; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELHJBHBFDO_JCNAJODHDNP__CTOR_OFFSET))(this);
	}

	::System::Void MAKNEHPPFFN(::System::Boolean DOFCLPCLHOJ, ::FDBFKHEPBON* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FDBFKHEPBON*))((::PBYTE)hIl2Cpp + HELHJBHBFDO_JCNAJODHDNP_MAKNEHPPFFN_OFFSET))(this, DOFCLPCLHOJ, GLAOEHCGCFO);
	}
};
