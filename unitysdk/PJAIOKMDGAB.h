#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define PJAIOKMDGAB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x178DC2E0)
#define PJAIOKMDGAB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x178DC450)
#define PJAIOKMDGAB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x178DC3C0)
#define PJAIOKMDGAB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x178DC290)
#define PJAIOKMDGAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x178DC330)
#define PJAIOKMDGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x178DC3B0)

inline static constexpr unsigned int PJAIOKMDGAB_TypeDefinitionIndex = 83635;

class PJAIOKMDGAB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x4; // 0x0
	::System::UInt32 PLGDPMJKELN; // 0x48
	::System::UInt32 FGNLJNHCPHB; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJAIOKMDGAB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAIOKMDGAB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAIOKMDGAB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAIOKMDGAB_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAIOKMDGAB_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::PJAIOKMDGAB* JFDOOELFAOA()
	{
		return ((::PJAIOKMDGAB*(*)())((::PBYTE)hIl2Cpp + PJAIOKMDGAB_JFDOOELFAOA_OFFSET))();
	}
};
