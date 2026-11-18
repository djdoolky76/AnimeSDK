#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

#define LHCBLCANAGG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1565EA70)
#define LHCBLCANAGG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1565EB90)
#define LHCBLCANAGG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1565EC10)
#define LHCBLCANAGG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1565EB40)
#define LHCBLCANAGG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1565EAC0)
#define LHCBLCANAGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1565EB80)

inline static constexpr unsigned int LHCBLCANAGG_TypeDefinitionIndex = 75872;

class LHCBLCANAGG : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x233; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHCBLCANAGG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBLCANAGG__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBLCANAGG_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBLCANAGG_ONCLEAN_OFFSET))(this);
	}

	static ::LHCBLCANAGG* JFDOOELFAOA()
	{
		return ((::LHCBLCANAGG*(*)())((::PBYTE)hIl2Cpp + LHCBLCANAGG_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBLCANAGG_MEFBHFEOKGH_OFFSET))(this);
	}
};
