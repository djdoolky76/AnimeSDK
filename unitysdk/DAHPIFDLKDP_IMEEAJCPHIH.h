#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AGAFGMPKAFA.h"

class CHOBEPDPDEF;
class DFDGBCDHDCG;

#define DAHPIFDLKDP_IMEEAJCPHIH_LEKFIBCOLGG_OFFSET UNITYSDK_OFFSET(0x123FE300)
#define DAHPIFDLKDP_IMEEAJCPHIH__CTOR_OFFSET UNITYSDK_OFFSET(0x123FE2F0)

inline static constexpr unsigned int DAHPIFDLKDP_IMEEAJCPHIH_TypeDefinitionIndex = 62136;

class DAHPIFDLKDP_IMEEAJCPHIH : public ::System::Object
{
public:
	::CHOBEPDPDEF* FCEIKAIDHPM; // 0x10
	::System::Int32 DBMEHBMAALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHPIFDLKDP_IMEEAJCPHIH__CTOR_OFFSET))(this);
	}

	::DFDGBCDHDCG* LEKFIBCOLGG(::AGAFGMPKAFA HNOPAJLDCFB)
	{
		return ((::DFDGBCDHDCG*(*)(::PVOID, ::AGAFGMPKAFA))((::PBYTE)hIl2Cpp + DAHPIFDLKDP_IMEEAJCPHIH_LEKFIBCOLGG_OFFSET))(this, HNOPAJLDCFB);
	}
};
