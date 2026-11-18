#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EGABGCHCAGF__CCTOR_OFFSET UNITYSDK_OFFSET(0x154A78D0)

inline static constexpr unsigned int EGABGCHCAGF_TypeDefinitionIndex = 68828;

class EGABGCHCAGF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PICOPFGOGGC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EGABGCHCAGF_TypeDefinitionIndex)->GetStaticField(0x51E00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGABGCHCAGF__CCTOR_OFFSET))();
	}
};
