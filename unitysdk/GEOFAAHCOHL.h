#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class IIEOINDPNGP;

#define GEOFAAHCOHL_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x116EDEF0)
#define GEOFAAHCOHL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x116EDDB0)
#define GEOFAAHCOHL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x116EDFA0)
#define GEOFAAHCOHL_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x116EDF90)
#define GEOFAAHCOHL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x116EDF00)
#define GEOFAAHCOHL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x116EDE80)
#define GEOFAAHCOHL__CCTOR_OFFSET UNITYSDK_OFFSET(0x116EDE00)
#define GEOFAAHCOHL__CTOR_OFFSET UNITYSDK_OFFSET(0x116EDED0)

inline static constexpr unsigned int GEOFAAHCOHL_TypeDefinitionIndex = 45964;

class GEOFAAHCOHL : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x20D; // 0x0
	::IIEOINDPNGP* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEOFAAHCOHL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOFAAHCOHL__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOFAAHCOHL_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOFAAHCOHL_ONCLEAN_OFFSET))(this);
	}

	::IIEOINDPNGP* BLIOCCCNKDK()
	{
		return ((::IIEOINDPNGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOFAAHCOHL_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOFAAHCOHL_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::IIEOINDPNGP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IIEOINDPNGP*))((::PBYTE)hIl2Cpp + GEOFAAHCOHL_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::GEOFAAHCOHL* JFDOOELFAOA()
	{
		return ((::GEOFAAHCOHL*(*)())((::PBYTE)hIl2Cpp + GEOFAAHCOHL_JFDOOELFAOA_OFFSET))();
	}
};
