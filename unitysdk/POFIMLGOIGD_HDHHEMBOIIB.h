#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/System/Object.h"

class KPAKKOJMBHN;
class POFIMLGOIGD;
namespace System { template <typename T> class Action_1; }

#define POFIMLGOIGD_HDHHEMBOIIB_HKLIACKCHGA_OFFSET UNITYSDK_OFFSET(0x150E2B40)
#define POFIMLGOIGD_HDHHEMBOIIB_MKLPAIFPGKA_OFFSET UNITYSDK_OFFSET(0x150E2710)
#define POFIMLGOIGD_HDHHEMBOIIB__CTOR_OFFSET UNITYSDK_OFFSET(0x150E2700)

inline static constexpr unsigned int POFIMLGOIGD_HDHHEMBOIIB_TypeDefinitionIndex = 57474;

class POFIMLGOIGD_HDHHEMBOIIB : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* PABLEDCGDGM; // 0x10
	::POFIMLGOIGD* KLHPEBKNIFB; // 0x18
	::MoleMole::FlowCanvas::Nodes::AreaIDTag NENCOLJEKFJ; // 0x20
	::System::Boolean FENHKHJDEDO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_HDHHEMBOIIB__CTOR_OFFSET))(this);
	}

	::System::Void MKLPAIFPGKA(::KPAKKOJMBHN* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::KPAKKOJMBHN*))((::PBYTE)hIl2Cpp + POFIMLGOIGD_HDHHEMBOIIB_MKLPAIFPGKA_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void HKLIACKCHGA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_HDHHEMBOIIB_HKLIACKCHGA_OFFSET))(this);
	}
};
