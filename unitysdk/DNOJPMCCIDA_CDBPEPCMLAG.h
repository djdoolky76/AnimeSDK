#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPFMDEBJEMG;
namespace System { class String; }

#define DNOJPMCCIDA_CDBPEPCMLAG_ADEAABNKHOO_OFFSET UNITYSDK_OFFSET(0x16BC1E30)
#define DNOJPMCCIDA_CDBPEPCMLAG_GLMKHMBFLML_OFFSET UNITYSDK_OFFSET(0x16BC20E0)
#define DNOJPMCCIDA_CDBPEPCMLAG_NGNHMFNCENC_OFFSET UNITYSDK_OFFSET(0x16BC1D30)
#define DNOJPMCCIDA_CDBPEPCMLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC1D20)

inline static constexpr unsigned int DNOJPMCCIDA_CDBPEPCMLAG_TypeDefinitionIndex = 58115;

class DNOJPMCCIDA_CDBPEPCMLAG : public ::System::Object
{
public:
	::System::String* PIHBGIEMCPA; // 0x10
	::System::Int32 COMDNFILAIC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOJPMCCIDA_CDBPEPCMLAG__CTOR_OFFSET))(this);
	}

	::System::Void NGNHMFNCENC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOJPMCCIDA_CDBPEPCMLAG_NGNHMFNCENC_OFFSET))(this);
	}

	::System::Void ADEAABNKHOO(::DPFMDEBJEMG* DEJEGHGEMEF)
	{
		return ((::System::Void(*)(::PVOID, ::DPFMDEBJEMG*))((::PBYTE)hIl2Cpp + DNOJPMCCIDA_CDBPEPCMLAG_ADEAABNKHOO_OFFSET))(this, DEJEGHGEMEF);
	}

	::System::Void GLMKHMBFLML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOJPMCCIDA_CDBPEPCMLAG_GLMKHMBFLML_OFFSET))(this);
	}
};
