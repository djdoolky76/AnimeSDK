#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCBBDGEGPM;
namespace System { template <typename T> class Action_1; }
template <typename T1, typename T2> class LPFKBLNNAMI_2;

#define AIOGGGIHCAE_FAJEBBLGFHA_GKDNGBDCPFB_OFFSET UNITYSDK_OFFSET(0x164817F0)
#define AIOGGGIHCAE_FAJEBBLGFHA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16481750)
#define AIOGGGIHCAE_FAJEBBLGFHA_PJKGENIIILP_OFFSET UNITYSDK_OFFSET(0x164816A0)
#define AIOGGGIHCAE_FAJEBBLGFHA__CTOR_OFFSET UNITYSDK_OFFSET(0x164815F0)

inline static constexpr unsigned int AIOGGGIHCAE_FAJEBBLGFHA_TypeDefinitionIndex = 70946;

class AIOGGGIHCAE_FAJEBBLGFHA : public ::System::Object
{
public:
	::LPFKBLNNAMI_2<::System::Int32, ::System::Object*>* FCLJLCJMFNP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOGGGIHCAE_FAJEBBLGFHA__CTOR_OFFSET))(this);
	}

	::System::Void PJKGENIIILP(::System::Int32 AJJPHGLFOID, ::System::Action_1<::NPCBBDGEGPM*>* FCCFGMANMKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::NPCBBDGEGPM*>*))((::PBYTE)hIl2Cpp + AIOGGGIHCAE_FAJEBBLGFHA_PJKGENIIILP_OFFSET))(this, AJJPHGLFOID, FCCFGMANMKM);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOGGGIHCAE_FAJEBBLGFHA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GKDNGBDCPFB(::System::Int32 AJJPHGLFOID, ::NPCBBDGEGPM* KMOHKCADPNA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCBBDGEGPM*))((::PBYTE)hIl2Cpp + AIOGGGIHCAE_FAJEBBLGFHA_GKDNGBDCPFB_OFFSET))(this, AJJPHGLFOID, KMOHKCADPNA);
	}
};
