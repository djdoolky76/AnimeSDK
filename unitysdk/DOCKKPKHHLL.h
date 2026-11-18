#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOCKKPKHHLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1346B6C0)

inline static constexpr unsigned int DOCKKPKHHLL_TypeDefinitionIndex = 54498;

class DOCKKPKHHLL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HGMBABGODJD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DOCKKPKHHLL_TypeDefinitionIndex)->GetStaticField(0x373C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOCKKPKHHLL__CCTOR_OFFSET))();
	}
};
