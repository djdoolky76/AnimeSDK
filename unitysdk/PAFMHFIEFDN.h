#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KADDBCHLLFN;

#define PAFMHFIEFDN_FKACDDALMAD_OFFSET UNITYSDK_OFFSET(0x15FF7E60)
#define PAFMHFIEFDN_MADBPLKEGCJ_OFFSET UNITYSDK_OFFSET(0x15FF7DF0)
#define PAFMHFIEFDN_MLGJJCNIGGA_OFFSET UNITYSDK_OFFSET(0x15FF7E40)
#define PAFMHFIEFDN_NPFBBPEJAOE_OFFSET UNITYSDK_OFFSET(0x15FF7E50)
#define PAFMHFIEFDN__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF7DE0)

inline static constexpr unsigned int PAFMHFIEFDN_TypeDefinitionIndex = 80925;

class PAFMHFIEFDN : public ::System::Object
{
public:
	::KADDBCHLLFN* DEFPKPMLBIK; // 0x10
	::System::Int32 _CMIMDEBMFDP_k__BackingField; // 0x18

	::System::Void _ctor(::KADDBCHLLFN* PLOADLAGEBG)
	{
		return ((::System::Void(*)(::PVOID, ::KADDBCHLLFN*))((::PBYTE)hIl2Cpp + PAFMHFIEFDN__CTOR_OFFSET))(this, PLOADLAGEBG);
	}

	::System::Void MADBPLKEGCJ(::System::Int32 CKELOFDFEEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAFMHFIEFDN_MADBPLKEGCJ_OFFSET))(this, CKELOFDFEEM);
	}

	::System::Void MLGJJCNIGGA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAFMHFIEFDN_MLGJJCNIGGA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NPFBBPEJAOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFMHFIEFDN_NPFBBPEJAOE_OFFSET))(this);
	}

	::System::Boolean FKACDDALMAD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFMHFIEFDN_FKACDDALMAD_OFFSET))(this);
	}
};
