#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class TrafficLightWallConfig;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGNGHBPBLBA_ANPMMAOGKBF_OFFSET UNITYSDK_OFFSET(0x13E4C370)
#define DGNGHBPBLBA_FHBMJHNAGBG_OFFSET UNITYSDK_OFFSET(0x13E4BF70)
#define DGNGHBPBLBA_JIGDNBLDDNJ_OFFSET UNITYSDK_OFFSET(0x13E4C8D0)
#define DGNGHBPBLBA_KDDKHIMGIML_OFFSET UNITYSDK_OFFSET(0x13E4BEE0)
#define DGNGHBPBLBA_LDEFOFFAKHB_OFFSET UNITYSDK_OFFSET(0x13E4C730)
#define DGNGHBPBLBA_MOOMJKCCFGN_OFFSET UNITYSDK_OFFSET(0x13E4BB50)
#define DGNGHBPBLBA_PDIALIAGACA_OFFSET UNITYSDK_OFFSET(0x13E4C550)
#define DGNGHBPBLBA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4BA80)

inline static constexpr unsigned int DGNGHBPBLBA_TypeDefinitionIndex = 41530;

class DGNGHBPBLBA : public ::System::Object
{
public:
	::TrafficLightWallConfig* KONIKNGHPLJ; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* JPJIFLBFPMK; // 0x18
	::TrafficLightWallConfig* APELGADIFMA; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* LFCMPGCDJOF; // 0x28
	::System::Int32 BKNGAOOCGHB; // 0x30
	::System::Int32 NLOEFADAEOB; // 0x34

	::System::Void _ctor(::System::Int32 FLIFDPPBBHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGNGHBPBLBA__CTOR_OFFSET))(this, FLIFDPPBBHL);
	}

	::System::Void MOOMJKCCFGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGHBPBLBA_MOOMJKCCFGN_OFFSET))(this);
	}

	::System::Void FHBMJHNAGBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGHBPBLBA_FHBMJHNAGBG_OFFSET))(this);
	}

	::System::Void ANPMMAOGKBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGHBPBLBA_ANPMMAOGKBF_OFFSET))(this);
	}

	::System::Void PDIALIAGACA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGHBPBLBA_PDIALIAGACA_OFFSET))(this);
	}

	::System::Void LDEFOFFAKHB(::System::Int32 KBNIOABPILH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGNGHBPBLBA_LDEFOFFAKHB_OFFSET))(this, KBNIOABPILH);
	}

	::System::Void KDDKHIMGIML(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DGNGHBPBLBA_KDDKHIMGIML_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void JIGDNBLDDNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGHBPBLBA_JIGDNBLDDNJ_OFFSET))(this);
	}
};
