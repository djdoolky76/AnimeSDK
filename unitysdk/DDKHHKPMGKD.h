#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DDKHHKPMGKD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1328F3F0)
#define DDKHHKPMGKD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1328F470)
#define DDKHHKPMGKD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1328F360)
#define DDKHHKPMGKD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1328F2E0)
#define DDKHHKPMGKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1328F350)

inline static constexpr unsigned int DDKHHKPMGKD_TypeDefinitionIndex = 81854;

class DDKHHKPMGKD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x128; // 0x0
	::System::Int32 LAAGLPEFOFK; // 0x20
	::System::Boolean JOPCJBCCDEF; // 0x24
	::System::Boolean KNAIAOKGMAG; // 0x25
	::System::Byte _padding0[0x2];
	::System::UInt32 IHNAHCDOGBL; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDKHHKPMGKD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKHHKPMGKD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKHHKPMGKD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 BKLGNCBNEGM, ::System::Boolean KNAIAOKGMAG, ::System::Boolean JOPCJBCCDEF, ::System::Int32 LAAGLPEFOFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + DDKHHKPMGKD_CNHBDOMKKDE_OFFSET))(this, BKLGNCBNEGM, KNAIAOKGMAG, JOPCJBCCDEF, LAAGLPEFOFK);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKHHKPMGKD_FIGPAOKNJLN_OFFSET))(this);
	}
};
