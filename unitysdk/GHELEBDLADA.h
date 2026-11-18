#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define GHELEBDLADA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16CC41E0)
#define GHELEBDLADA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16CC4350)
#define GHELEBDLADA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16CC42C0)
#define GHELEBDLADA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16CC41A0)
#define GHELEBDLADA__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CC4230)
#define GHELEBDLADA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC42B0)

inline static constexpr unsigned int GHELEBDLADA_TypeDefinitionIndex = 89977;

class GHELEBDLADA : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xE8; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHELEBDLADA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHELEBDLADA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHELEBDLADA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHELEBDLADA_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHELEBDLADA_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::GHELEBDLADA* JFDOOELFAOA()
	{
		return ((::GHELEBDLADA*(*)())((::PBYTE)hIl2Cpp + GHELEBDLADA_JFDOOELFAOA_OFFSET))();
	}
};
