#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADDEBPHFFIF;
class MEMPJCOPMDE;
namespace System { template <typename T> class Action_1; }

#define ADDEBPHFFIF_JKJODOEPCOD_FAHMDGLOMKC_OFFSET UNITYSDK_OFFSET(0x11B8F040)
#define ADDEBPHFFIF_JKJODOEPCOD_GFFLONBEEPK_OFFSET UNITYSDK_OFFSET(0x11B8EF60)
#define ADDEBPHFFIF_JKJODOEPCOD__CTOR_OFFSET UNITYSDK_OFFSET(0x11B8EF50)

inline static constexpr unsigned int ADDEBPHFFIF_JKJODOEPCOD_TypeDefinitionIndex = 54152;

class ADDEBPHFFIF_JKJODOEPCOD : public ::System::Object
{
public:
	::System::Action_1<::MEMPJCOPMDE*>* LJFKEJMODMK; // 0x10
	::System::Action_1<::MEMPJCOPMDE*>* EJGDHCIBCJH; // 0x18
	::ADDEBPHFFIF* KLHPEBKNIFB; // 0x20
	::System::Int32 HHEGANCPILH; // 0x28
	::System::Boolean AILAIPNDNPO; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDEBPHFFIF_JKJODOEPCOD__CTOR_OFFSET))(this);
	}

	::System::Void GFFLONBEEPK(::MEMPJCOPMDE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + ADDEBPHFFIF_JKJODOEPCOD_GFFLONBEEPK_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void FAHMDGLOMKC(::MEMPJCOPMDE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + ADDEBPHFFIF_JKJODOEPCOD_FAHMDGLOMKC_OFFSET))(this, GLAOEHCGCFO);
	}
};
