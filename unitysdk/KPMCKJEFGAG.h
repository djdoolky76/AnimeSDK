#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPAHOMDFCEH.h"
#include "unitysdk/System/Object.h"

class OIMECABFLAD;

#define KPMCKJEFGAG_EDAALBHJBHK_OFFSET UNITYSDK_OFFSET(0x1E5E56D0)
#define KPMCKJEFGAG_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1E5F6B60)
#define KPMCKJEFGAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F6B10)
#define KPMCKJEFGAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F6D60)

inline static constexpr unsigned int KPMCKJEFGAG_TypeDefinitionIndex = 34115;

class KPMCKJEFGAG : public ::System::Object
{
public:
	static ::Il2CppArray<::OIMECABFLAD*>** StaticGet_AFGBPLFIMMG()
	{
		return (::Il2CppArray<::OIMECABFLAD*>**)Il2CppClass::FromTypeDefinitionIndex(KPMCKJEFGAG_TypeDefinitionIndex)->GetStaticField(0x2A0F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMCKJEFGAG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMCKJEFGAG__CTOR_OFFSET))(this);
	}

	static ::OIMECABFLAD* EDAALBHJBHK(::DPAHOMDFCEH IMLLDOHDCNC)
	{
		return ((::OIMECABFLAD*(*)(::DPAHOMDFCEH))((::PBYTE)hIl2Cpp + KPMCKJEFGAG_EDAALBHJBHK_OFFSET))(IMLLDOHDCNC);
	}

	static ::System::Void JMDEKPONKMF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMCKJEFGAG_JMDEKPONKMF_OFFSET))();
	}
};
