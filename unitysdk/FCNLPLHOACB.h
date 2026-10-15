#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAFIACIMMHE;
class FAJOKAOEELI;
class GLJEIMDMFGI;
class HEKHCLACHJE;
class NCEOAMDCDPJ;
namespace System { class Action; }

#define FCNLPLHOACB_AFFBLPBDDKK_OFFSET UNITYSDK_OFFSET(0x1C524220)
#define FCNLPLHOACB_BCMAPECHDNC_OFFSET UNITYSDK_OFFSET(0x1C524040)
#define FCNLPLHOACB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C515B40)
#define FCNLPLHOACB_FMKMEKFNLLB_OFFSET UNITYSDK_OFFSET(0x1C5242D0)
#define FCNLPLHOACB_GET_ATTRIBUTESTRACKER_OFFSET UNITYSDK_OFFSET(0x1C523F60)
#define FCNLPLHOACB_GET_PRIMARYATTRIBUTETYPESAGGREGATOR_OFFSET UNITYSDK_OFFSET(0x1C524210)
#define FCNLPLHOACB_GET_TARGETATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0x1C523F50)
#define FCNLPLHOACB_GNJHPPMMLKO_OFFSET UNITYSDK_OFFSET(0x1C524180)
#define FCNLPLHOACB_IKICCAJAKHC_OFFSET UNITYSDK_OFFSET(0x1C524370)
#define FCNLPLHOACB_OGOMIEELHNJ_OFFSET UNITYSDK_OFFSET(0x1C5240E0)
#define FCNLPLHOACB_PBJHMJEGELA_OFFSET UNITYSDK_OFFSET(0x1C523FC0)
#define FCNLPLHOACB_PGCFAFDDOOK_OFFSET UNITYSDK_OFFSET(0x1C523F70)

inline static constexpr unsigned int FCNLPLHOACB_TypeDefinitionIndex = 41832;

	class FCNLPLHOACB : public ::System::Object
	{
	public:
		::FAJOKAOEELI* _AttributesTracker_k__BackingField; // 0x10
		::GLJEIMDMFGI* _PrimaryAttributeTypesAggregator_k__BackingField; // 0x18
		::HEKHCLACHJE* _TargetAttributeLevels_k__BackingField; // 0x20
		::System::Void _ctor(::HEKHCLACHJE* a1, ::AAFIACIMMHE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*, ::AAFIACIMMHE*))((::PBYTE)hIl2Cpp + FCNLPLHOACB_CTOR_OFFSET))(this, a1, a2);
		}

		::HEKHCLACHJE* get_TargetAttributeLevels()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNLPLHOACB_GET_TARGETATTRIBUTELEVELS_OFFSET))(this);
		}

		::FAJOKAOEELI* get_AttributesTracker()
		{
			return ((::FAJOKAOEELI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNLPLHOACB_GET_ATTRIBUTESTRACKER_OFFSET))(this);
		}

		::HEKHCLACHJE* PGCFAFDDOOK()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNLPLHOACB_PGCFAFDDOOK_OFFSET))(this);
		}

		::HEKHCLACHJE* PBJHMJEGELA()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNLPLHOACB_PBJHMJEGELA_OFFSET))(this);
		}

		::System::Void BCMAPECHDNC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCNLPLHOACB_BCMAPECHDNC_OFFSET))(this, a1);
		}

		::System::Void OGOMIEELHNJ(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCNLPLHOACB_OGOMIEELHNJ_OFFSET))(this, a1);
		}

		::System::Boolean GNJHPPMMLKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNLPLHOACB_GNJHPPMMLKO_OFFSET))(this);
		}

		::GLJEIMDMFGI* get_PrimaryAttributeTypesAggregator()
		{
			return ((::GLJEIMDMFGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNLPLHOACB_GET_PRIMARYATTRIBUTETYPESAGGREGATOR_OFFSET))(this);
		}

		::NCEOAMDCDPJ* AFFBLPBDDKK()
		{
			return ((::NCEOAMDCDPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNLPLHOACB_AFFBLPBDDKK_OFFSET))(this);
		}

		::System::Void FMKMEKFNLLB(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCNLPLHOACB_FMKMEKFNLLB_OFFSET))(this, a1);
		}

		::System::Void IKICCAJAKHC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCNLPLHOACB_IKICCAJAKHC_OFFSET))(this, a1);
		}

	};
