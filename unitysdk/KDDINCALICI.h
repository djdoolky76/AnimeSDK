#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDDINCALICI__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B84E50)

inline static constexpr unsigned int KDDINCALICI_TypeDefinitionIndex = 69771;

class KDDINCALICI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FAGIIILHCLF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KDDINCALICI_TypeDefinitionIndex)->GetStaticField(0x3E4E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDDINCALICI__CCTOR_OFFSET))();
	}
};
