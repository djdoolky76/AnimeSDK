#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole::Battle { class XWeaponTrailCustom; }

#define OMNOOPKMIBP_BCKKNPIIAFN_OFFSET UNITYSDK_OFFSET(0x16C28590)
#define OMNOOPKMIBP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16C28350)
#define OMNOOPKMIBP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16C28510)
#define OMNOOPKMIBP_LBIIEKDBCPC_OFFSET UNITYSDK_OFFSET(0x16C284C0)
#define OMNOOPKMIBP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16C28430)
#define OMNOOPKMIBP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16C282F0)
#define OMNOOPKMIBP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C283A0)
#define OMNOOPKMIBP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C28420)

inline static constexpr unsigned int OMNOOPKMIBP_TypeDefinitionIndex = 82225;

class OMNOOPKMIBP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x81; // 0x0
	::Il2CppArray<::MoleMole::Battle::XWeaponTrailCustom*>* NNDEGHLKPNI; // 0x48
	::System::Boolean AJKNEHLMKOI; // 0x50
	::System::Boolean ANBMFEGFMEJ; // 0x51
	::System::Byte _padding0[0x2];
	::System::Single LGOCJOHLNON; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNOOPKMIBP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNOOPKMIBP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNOOPKMIBP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNOOPKMIBP_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNOOPKMIBP_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void LBIIEKDBCPC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMNOOPKMIBP_LBIIEKDBCPC_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::OMNOOPKMIBP* JFDOOELFAOA()
	{
		return ((::OMNOOPKMIBP*(*)())((::PBYTE)hIl2Cpp + OMNOOPKMIBP_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean BCKKNPIIAFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNOOPKMIBP_BCKKNPIIAFN_OFFSET))(this);
	}
};
