#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOLIADLCIDK.h"

class EPLMHMEEENH;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BGPDBNCDJCP_DFPHILJHFOE_OFFSET UNITYSDK_OFFSET(0x115C6BA0)
#define BGPDBNCDJCP_FOEJBIHFDMG_OFFSET UNITYSDK_OFFSET(0x115C67C0)
#define BGPDBNCDJCP_KEDGMMFIOBJ_OFFSET UNITYSDK_OFFSET(0x115C6B10)
#define BGPDBNCDJCP_KLOPBEHGPHH_OFFSET UNITYSDK_OFFSET(0x115C6720)
#define BGPDBNCDJCP_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x115C63E0)
#define BGPDBNCDJCP__CTOR_OFFSET UNITYSDK_OFFSET(0x115C63D0)

inline static constexpr unsigned int BGPDBNCDJCP_TypeDefinitionIndex = 53118;

class BGPDBNCDJCP : public ::HOLIADLCIDK
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* MDJBHMHJACO; // 0x18

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF, ::Il2CppArray<::System::Int32>* NMHLMLBMCML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + BGPDBNCDJCP__CTOR_OFFSET))(this, MGMDLMBEDJF, NMHLMLBMCML);
	}

	::System::Void OMMICIJCCKB(::EPLMHMEEENH* LDNCGMNHANO)
	{
		return ((::System::Void(*)(::PVOID, ::EPLMHMEEENH*))((::PBYTE)hIl2Cpp + BGPDBNCDJCP_OMMICIJCCKB_OFFSET))(this, LDNCGMNHANO);
	}

	::System::Void KLOPBEHGPHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPDBNCDJCP_KLOPBEHGPHH_OFFSET))(this);
	}

	::System::Void FOEJBIHFDMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPDBNCDJCP_FOEJBIHFDMG_OFFSET))(this);
	}

	::System::Void KEDGMMFIOBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPDBNCDJCP_KEDGMMFIOBJ_OFFSET))(this);
	}

	::System::Void DFPHILJHFOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPDBNCDJCP_DFPHILJHFOE_OFFSET))(this);
	}
};
