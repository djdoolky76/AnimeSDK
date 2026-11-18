#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKIKKFOMCEP_EEKHGOHHMBF.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IEntity; }

#define PKIKKFOMCEP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1EDF61C0)
#define PKIKKFOMCEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EDFD0E0)
#define PKIKKFOMCEP_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x1EDFD160)
#define PKIKKFOMCEP_NIHOLHLLHIF_OFFSET UNITYSDK_OFFSET(0x1EDFD0D0)
#define PKIKKFOMCEP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1EDF5EF0)
#define PKIKKFOMCEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EDFD120)
#define PKIKKFOMCEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDFCC10)

inline static constexpr unsigned int PKIKKFOMCEP_TypeDefinitionIndex = 18763;

class PKIKKFOMCEP : public ::System::Object
{
public:
	::Foundation::IEntity* CJHKKDKFGJE; // 0x10
	::PKIKKFOMCEP_EEKHGOHHMBF _JKONJIJANDB_k__BackingField; // 0x18
	::System::Single PJPJAFPCHNB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIKKFOMCEP__CTOR_OFFSET))(this);
	}

	::PKIKKFOMCEP_EEKHGOHHMBF NIHOLHLLHIF()
	{
		return ((::PKIKKFOMCEP_EEKHGOHHMBF(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIKKFOMCEP_NIHOLHLLHIF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIKKFOMCEP_DISPOSE_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::Foundation::IEntity* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + PKIKKFOMCEP_BBOMJDBNHIC_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIKKFOMCEP_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIKKFOMCEP_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIKKFOMCEP_IAHPLEHJFGB_OFFSET))(this);
	}
};
