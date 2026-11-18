#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNKOPDEKLKG.h"
#include "unitysdk/System/Object.h"

class DPFMDEBJEMG;
namespace System { class String; }

#define JJAEEGPAEJN_GMIGHFFHOOD_ADEAABNKHOO_OFFSET UNITYSDK_OFFSET(0x198CEF90)
#define JJAEEGPAEJN_GMIGHFFHOOD_GLMKHMBFLML_OFFSET UNITYSDK_OFFSET(0x198CF240)
#define JJAEEGPAEJN_GMIGHFFHOOD_NGNHMFNCENC_OFFSET UNITYSDK_OFFSET(0x198CED70)
#define JJAEEGPAEJN_GMIGHFFHOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x198CED60)

inline static constexpr unsigned int JJAEEGPAEJN_GMIGHFFHOOD_TypeDefinitionIndex = 72047;

class JJAEEGPAEJN_GMIGHFFHOOD : public ::System::Object
{
public:
	::FNKOPDEKLKG BFNIJGMBEFC; // 0x10
	::System::String* PIHBGIEMCPA; // 0x28
	::System::Int32 COMDNFILAIC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAEEGPAEJN_GMIGHFFHOOD__CTOR_OFFSET))(this);
	}

	::System::Void NGNHMFNCENC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAEEGPAEJN_GMIGHFFHOOD_NGNHMFNCENC_OFFSET))(this);
	}

	::System::Void ADEAABNKHOO(::DPFMDEBJEMG* DEJEGHGEMEF)
	{
		return ((::System::Void(*)(::PVOID, ::DPFMDEBJEMG*))((::PBYTE)hIl2Cpp + JJAEEGPAEJN_GMIGHFFHOOD_ADEAABNKHOO_OFFSET))(this, DEJEGHGEMEF);
	}

	::System::Void GLMKHMBFLML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAEEGPAEJN_GMIGHFFHOOD_GLMKHMBFLML_OFFSET))(this);
	}
};
