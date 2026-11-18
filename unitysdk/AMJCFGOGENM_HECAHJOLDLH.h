#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class FANBKJPNEDB;

#define AMJCFGOGENM_HECAHJOLDLH_ONFKGAMDHKH_OFFSET UNITYSDK_OFFSET(0x143B9350)
#define AMJCFGOGENM_HECAHJOLDLH__CTOR_OFFSET UNITYSDK_OFFSET(0x143B9340)

inline static constexpr unsigned int AMJCFGOGENM_HECAHJOLDLH_TypeDefinitionIndex = 92765;

class AMJCFGOGENM_HECAHJOLDLH : public ::System::Object
{
public:
	::System::Int32 GDAHIOLKOFA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_HECAHJOLDLH__CTOR_OFFSET))(this);
	}

	::System::Boolean ONFKGAMDHKH(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::FANBKJPNEDB*> HMHNHLFGLCK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::FANBKJPNEDB*>))((::PBYTE)hIl2Cpp + AMJCFGOGENM_HECAHJOLDLH_ONFKGAMDHKH_OFFSET))(this, HMHNHLFGLCK);
	}
};
