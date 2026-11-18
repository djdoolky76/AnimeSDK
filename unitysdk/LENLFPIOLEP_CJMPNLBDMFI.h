#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace MoleMole { class UILineupSelectContext_OnGetRoleSelectContextDel; }
namespace MoleMole { class UIRoleSelectPageContext; }

#define LENLFPIOLEP_CJMPNLBDMFI_LBGLCAIJNJG_OFFSET UNITYSDK_OFFSET(0x1A6055C0)
#define LENLFPIOLEP_CJMPNLBDMFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6055B0)

inline static constexpr unsigned int LENLFPIOLEP_CJMPNLBDMFI_TypeDefinitionIndex = 73417;

class LENLFPIOLEP_CJMPNLBDMFI : public ::System::Object
{
public:
	::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel* FPLLPPOHCGL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLFPIOLEP_CJMPNLBDMFI__CTOR_OFFSET))(this);
	}

	::MoleMole::UIRoleSelectPageContext* LBGLCAIJNJG(::System::Int32 FOLKIBNJNHM, ::Il2CppArray<::BPHGNMNLLHF*>* DGFEMBEDHAC)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::BPHGNMNLLHF*>*))((::PBYTE)hIl2Cpp + LENLFPIOLEP_CJMPNLBDMFI_LBGLCAIJNJG_OFFSET))(this, FOLKIBNJNHM, DGFEMBEDHAC);
	}
};
