#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMJAHCIDMME_DODLBENLKNF_OFFSET UNITYSDK_OFFSET(0x14518820)
#define AMJAHCIDMME_GLNCFKCEPCJ_OFFSET UNITYSDK_OFFSET(0x145186D0)
#define AMJAHCIDMME_LFCNGEMADHF_OFFSET UNITYSDK_OFFSET(0x145186F0)
#define AMJAHCIDMME_LMODJJAAOCK_OFFSET UNITYSDK_OFFSET(0x14518750)
#define AMJAHCIDMME_NMMNNOGMGPE_OFFSET UNITYSDK_OFFSET(0x145187B0)
#define AMJAHCIDMME__CTOR_OFFSET UNITYSDK_OFFSET(0x14518670)

inline static constexpr unsigned int AMJAHCIDMME_TypeDefinitionIndex = 88071;

class AMJAHCIDMME : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HDNCPIMBIJM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJAHCIDMME__CTOR_OFFSET))(this);
	}

	::System::Int32 GLNCFKCEPCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJAHCIDMME_GLNCFKCEPCJ_OFFSET))(this);
	}

	::System::Void LFCNGEMADHF(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMJAHCIDMME_LFCNGEMADHF_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LMODJJAAOCK(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMJAHCIDMME_LMODJJAAOCK_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NMMNNOGMGPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJAHCIDMME_NMMNNOGMGPE_OFFSET))(this);
	}

	::System::Int32 DODLBENLKNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJAHCIDMME_DODLBENLKNF_OFFSET))(this);
	}
};
