#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFNHKIGLHEE_DLBOCMLEBFF_OFFSET UNITYSDK_OFFSET(0x19A410E0)
#define DFNHKIGLHEE_EEMPGIDPPMK_OFFSET UNITYSDK_OFFSET(0x19A410D0)
#define DFNHKIGLHEE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A410F0)

inline static constexpr unsigned int DFNHKIGLHEE_TypeDefinitionIndex = 76073;

class DFNHKIGLHEE : public ::System::Object
{
public:
	::System::Int32 _NNNDNHJIDEJ_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNHKIGLHEE__CTOR_OFFSET))(this);
	}

	::System::Int32 EEMPGIDPPMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNHKIGLHEE_EEMPGIDPPMK_OFFSET))(this);
	}

	::System::Void DLBOCMLEBFF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFNHKIGLHEE_DLBOCMLEBFF_OFFSET))(this, EGEGIMGMJHN);
	}
};
