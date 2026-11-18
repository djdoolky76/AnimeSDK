#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define HCHLALAACOF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19DF88D0)
#define HCHLALAACOF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x19DF89B0)
#define HCHLALAACOF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x19DF8A30)
#define HCHLALAACOF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x19DF8890)
#define HCHLALAACOF__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DF8920)
#define HCHLALAACOF__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF89A0)

inline static constexpr unsigned int HCHLALAACOF_TypeDefinitionIndex = 76012;

class HCHLALAACOF : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x8B; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCHLALAACOF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHLALAACOF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHLALAACOF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHLALAACOF_GETCLASSID_OFFSET))(this);
	}

	static ::HCHLALAACOF* JFDOOELFAOA()
	{
		return ((::HCHLALAACOF*(*)())((::PBYTE)hIl2Cpp + HCHLALAACOF_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHLALAACOF_MEFBHFEOKGH_OFFSET))(this);
	}
};
