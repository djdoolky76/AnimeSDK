#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGHNKKOFJBA.h"
#include "unitysdk/System/Object.h"

class MGEHIAFOLIE;
class NKEGAKMNAGM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define NKEGAKMNAGM_KBICOEHLFFJ_CMFNMGBHMLG_OFFSET UNITYSDK_OFFSET(0xE1A73E0)
#define NKEGAKMNAGM_KBICOEHLFFJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A73D0)

inline static constexpr unsigned int NKEGAKMNAGM_KBICOEHLFFJ_TypeDefinitionIndex = 82164;

class NKEGAKMNAGM_KBICOEHLFFJ : public ::System::Object
{
public:
	::CGHNKKOFJBA HICJKOGKLOK; // 0x10
	::System::String* OIAAGKHNNEP; // 0x30
	::MoleMole::Battle::Entity* PLCBINNKMAM; // 0x38
	::MGEHIAFOLIE* PFKPFJHFIGL; // 0x40
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x48
	::MoleMole::Battle::Entity* KMHICJLIECP; // 0x50
	::System::Int32 LLDGAJNCFLH; // 0x58
	::System::Int32 MJGHICEDDMB; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_KBICOEHLFFJ__CTOR_OFFSET))(this);
	}

	::System::Boolean CMFNMGBHMLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_KBICOEHLFFJ_CMFNMGBHMLG_OFFSET))(this);
	}
};
