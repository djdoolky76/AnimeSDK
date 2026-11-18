#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define FHBAFPNPLEB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17148CA0)
#define FHBAFPNPLEB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17148BC0)
#define FHBAFPNPLEB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17148D80)
#define FHBAFPNPLEB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17148CF0)
#define FHBAFPNPLEB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17148B70)
#define FHBAFPNPLEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x17148C10)
#define FHBAFPNPLEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17148C90)

inline static constexpr unsigned int FHBAFPNPLEB_TypeDefinitionIndex = 88213;

class FHBAFPNPLEB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x52; // 0x0
	::System::Boolean JHFHLEAPJFD; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 HCCAMEGIEKP; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHBAFPNPLEB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBAFPNPLEB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBAFPNPLEB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBAFPNPLEB_GETCLASSID_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 HCCAMEGIEKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FHBAFPNPLEB_BBOMJDBNHIC_OFFSET))(this, HCCAMEGIEKP);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBAFPNPLEB_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::FHBAFPNPLEB* JFDOOELFAOA()
	{
		return ((::FHBAFPNPLEB*(*)())((::PBYTE)hIl2Cpp + FHBAFPNPLEB_JFDOOELFAOA_OFFSET))();
	}
};
