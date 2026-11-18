#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJEPGMHFOMD_KKAEOOPJKAF.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PEIPCHALOLP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1196BD00)
#define PEIPCHALOLP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1196BDB0)
#define PEIPCHALOLP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1196BC70)
#define PEIPCHALOLP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1196BBF0)
#define PEIPCHALOLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1196BC60)

inline static constexpr unsigned int PEIPCHALOLP_TypeDefinitionIndex = 67516;

class PEIPCHALOLP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xF3; // 0x0
	::EJEPGMHFOMD_KKAEOOPJKAF HOFOJLBFNME; // 0x20
	::System::Int32 LKMGOPOJJEE; // 0x24
	::System::Boolean BNLKAJBLFEC; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEIPCHALOLP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIPCHALOLP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIPCHALOLP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 HBFCDLLPFGK, ::System::Boolean BNLKAJBLFEC, ::System::Int32 LKMGOPOJJEE, ::EJEPGMHFOMD_KKAEOOPJKAF HOFOJLBFNME)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::EJEPGMHFOMD_KKAEOOPJKAF))((::PBYTE)hIl2Cpp + PEIPCHALOLP_CNHBDOMKKDE_OFFSET))(this, HBFCDLLPFGK, BNLKAJBLFEC, LKMGOPOJJEE, HOFOJLBFNME);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIPCHALOLP_FIGPAOKNJLN_OFFSET))(this);
	}
};
