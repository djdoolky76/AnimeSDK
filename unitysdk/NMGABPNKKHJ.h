#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOLKBAIGBFN.h"
#include "unitysdk/HLAGNEHLNKA.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class MonoVOPathParticle;

#define NMGABPNKKHJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x105CC2B0)
#define NMGABPNKKHJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x105CC420)
#define NMGABPNKKHJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x105CC390)
#define NMGABPNKKHJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x105CC200)
#define NMGABPNKKHJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x105CC300)
#define NMGABPNKKHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x105CC380)

inline static constexpr unsigned int NMGABPNKKHJ_TypeDefinitionIndex = 84053;

class NMGABPNKKHJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xCC; // 0x0
	::MoleMole::EntityHandle CMPKBCPPPEL; // 0x48
	::MonoVOPathParticle* OBPILJAIEGJ; // 0x58
	::System::Single ABEDAPFIKFO; // 0x60
	::System::Boolean GEGLPOEMFME; // 0x64
	::System::Byte _padding0[0x3];
	::HLAGNEHLNKA PEBMOOHIIPC; // 0x68
	::System::Single GJLKCLKBNME; // 0x6C
	::System::Single CGMNBICLFEI; // 0x70
	::AOLKBAIGBFN OAPGGOHBGBH; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMGABPNKKHJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGABPNKKHJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGABPNKKHJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGABPNKKHJ_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGABPNKKHJ_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::NMGABPNKKHJ* JFDOOELFAOA()
	{
		return ((::NMGABPNKKHJ*(*)())((::PBYTE)hIl2Cpp + NMGABPNKKHJ_JFDOOELFAOA_OFFSET))();
	}
};
