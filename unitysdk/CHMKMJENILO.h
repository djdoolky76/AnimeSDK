#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMPPLMMMPOA.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class ScreenSpaceSplineRenderer;

#define CHMKMJENILO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x169581E0)
#define CHMKMJENILO_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x16957F00)
#define CHMKMJENILO_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x16958180)
#define CHMKMJENILO_IMNBLBOEGHE_OFFSET UNITYSDK_OFFSET(0x16957EB0)
#define CHMKMJENILO_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16957EC0)
#define CHMKMJENILO_POEIOKIDPHC_OFFSET UNITYSDK_OFFSET(0x16958820)
#define CHMKMJENILO__CTOR_OFFSET UNITYSDK_OFFSET(0x169581D0)

inline static constexpr unsigned int CHMKMJENILO_TypeDefinitionIndex = 49202;

class CHMKMJENILO : public ::System::Object
{
public:
	// static const ::System::String* LFAEHBLHCLJ; // 0x0
	::MoleMole::EntityHandle BHMLIFIKCEL; // 0x10
	::ScreenSpaceSplineRenderer* AGDEJOENBJK; // 0x20
	::MoleMole::EntityHandle KEHECMCDLFC; // 0x28
	::System::UInt32 _IGHCJKPIHOJ_k__BackingField; // 0x38
	::System::Boolean NMBIHKDGGHL; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMKMJENILO__CTOR_OFFSET))(this);
	}

	::System::UInt32 IMNBLBOEGHE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMKMJENILO_IMNBLBOEGHE_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMKMJENILO_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMKMJENILO_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void GIAOBHOJCDP(::GMPPLMMMPOA KAMJLKGLFDB)
	{
		return ((::System::Void(*)(::PVOID, ::GMPPLMMMPOA))((::PBYTE)hIl2Cpp + CHMKMJENILO_GIAOBHOJCDP_OFFSET))(this, KAMJLKGLFDB);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::EntityHandle KHGFAKJKDGG, ::MoleMole::EntityHandle HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CHMKMJENILO_BBOMJDBNHIC_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD);
	}

	::System::Void POEIOKIDPHC(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHMKMJENILO_POEIOKIDPHC_OFFSET))(this, EGEGIMGMJHN);
	}
};
