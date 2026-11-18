#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

#define LDOBCBKNAAN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1255B5E0)
#define LDOBCBKNAAN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1255B7A0)
#define LDOBCBKNAAN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1255B710)
#define LDOBCBKNAAN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1255B6B0)
#define LDOBCBKNAAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1255B630)
#define LDOBCBKNAAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1255B700)

inline static constexpr unsigned int LDOBCBKNAAN_TypeDefinitionIndex = 39324;

class LDOBCBKNAAN : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x23C; // 0x0
	::System::UInt32 EKPLEDILKCK; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDOBCBKNAAN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOBCBKNAAN__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOBCBKNAAN_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOBCBKNAAN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOBCBKNAAN_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::LDOBCBKNAAN* JFDOOELFAOA()
	{
		return ((::LDOBCBKNAAN*(*)())((::PBYTE)hIl2Cpp + LDOBCBKNAAN_JFDOOELFAOA_OFFSET))();
	}
};
