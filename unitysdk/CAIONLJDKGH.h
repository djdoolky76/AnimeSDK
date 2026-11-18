#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole::Battle { class Entity; }

#define CAIONLJDKGH_CBIFDAMLDDK_OFFSET UNITYSDK_OFFSET(0x1141AF80)
#define CAIONLJDKGH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1141AEA0)
#define CAIONLJDKGH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1141B1C0)
#define CAIONLJDKGH_JHOCAPNPHGH_OFFSET UNITYSDK_OFFSET(0x1141B240)
#define CAIONLJDKGH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1141B130)
#define CAIONLJDKGH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1141AE50)
#define CAIONLJDKGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1141AEF0)
#define CAIONLJDKGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1141AF70)

inline static constexpr unsigned int CAIONLJDKGH_TypeDefinitionIndex = 69840;

class CAIONLJDKGH : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x57; // 0x0
	::System::UInt64 CFCIKPIABAN; // 0x48
	::System::UInt32 POLLEGCPGEM; // 0x50
	::System::Single FENFFEDAOIL; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAIONLJDKGH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIONLJDKGH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIONLJDKGH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIONLJDKGH_GETCLASSID_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* CBIFDAMLDDK()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIONLJDKGH_CBIFDAMLDDK_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIONLJDKGH_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::CAIONLJDKGH* JFDOOELFAOA()
	{
		return ((::CAIONLJDKGH*(*)())((::PBYTE)hIl2Cpp + CAIONLJDKGH_JFDOOELFAOA_OFFSET))();
	}

	::MoleMole::Battle::Entity* JHOCAPNPHGH()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIONLJDKGH_JHOCAPNPHGH_OFFSET))(this);
	}
};
