#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace MoleMole::Battle { class Entity; }

#define OLHIGHPIDBH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11B42B30)
#define OLHIGHPIDBH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11B42C40)
#define OLHIGHPIDBH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11B42AA0)
#define OLHIGHPIDBH_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11B42BA0)
#define OLHIGHPIDBH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11B42990)
#define OLHIGHPIDBH__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B42A20)
#define OLHIGHPIDBH__CTOR_OFFSET UNITYSDK_OFFSET(0x11B42A90)

inline static constexpr unsigned int OLHIGHPIDBH_TypeDefinitionIndex = 39096;

class OLHIGHPIDBH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x60; // 0x0
	::System::UInt32 JMFAOIFLNDI; // 0x20
	::System::Boolean FOAHHAAPPGG; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLHIGHPIDBH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHIGHPIDBH__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHIGHPIDBH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHIGHPIDBH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::System::Boolean FOAHHAAPPGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLHIGHPIDBH_CNHBDOMKKDE_OFFSET))(this, DJHFOGHIFEJ, FOAHHAAPPGG);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHIGHPIDBH_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHIGHPIDBH_FIGPAOKNJLN_OFFSET))(this);
	}
};
