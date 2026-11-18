#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class InteractEntryModeBuddy; }

#define DJPPPGJMADN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x148AE9B0)
#define DJPPPGJMADN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x148AEA90)
#define DJPPPGJMADN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x148AEB10)
#define DJPPPGJMADN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x148AE960)
#define DJPPPGJMADN__CCTOR_OFFSET UNITYSDK_OFFSET(0x148AEA00)
#define DJPPPGJMADN__CTOR_OFFSET UNITYSDK_OFFSET(0x148AEA80)

inline static constexpr unsigned int DJPPPGJMADN_TypeDefinitionIndex = 92532;

class DJPPPGJMADN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x9B; // 0x0
	::MoleMole::InteractEntryModeBuddy* DBAFFFMJGKD; // 0x48
	::System::Boolean CPOJPDFKEKC; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJPPPGJMADN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPPPGJMADN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPPPGJMADN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPPPGJMADN_GETCLASSID_OFFSET))(this);
	}

	static ::DJPPPGJMADN* JFDOOELFAOA()
	{
		return ((::DJPPPGJMADN*(*)())((::PBYTE)hIl2Cpp + DJPPPGJMADN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPPPGJMADN_MEFBHFEOKGH_OFFSET))(this);
	}
};
