#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"

#define PJBICAOMDLN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1C2B0C70)
#define PJBICAOMDLN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1C2B0DA0)
#define PJBICAOMDLN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1C2B0E20)
#define PJBICAOMDLN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1C2B0D40)
#define PJBICAOMDLN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2B0CC0)
#define PJBICAOMDLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B0D90)

inline static constexpr unsigned int PJBICAOMDLN_TypeDefinitionIndex = 61461;

class PJBICAOMDLN : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x21E; // 0x0
	::MoleMole::HollowEntityConfig_CampType OLNAFBAENGH; // 0x50
	::System::Int32 KBBJGIMEGFI; // 0x54
	::System::Boolean EOMLMLCMEMK; // 0x58
	::System::Byte _padding0[0x3];
	::System::Int32 POOCMAFCHED; // 0x5C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBICAOMDLN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBICAOMDLN__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBICAOMDLN_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBICAOMDLN_ONCLEAN_OFFSET))(this);
	}

	static ::PJBICAOMDLN* JFDOOELFAOA()
	{
		return ((::PJBICAOMDLN*(*)())((::PBYTE)hIl2Cpp + PJBICAOMDLN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBICAOMDLN_MEFBHFEOKGH_OFFSET))(this);
	}
};
