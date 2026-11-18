#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IBFMBBHPPEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BF2DA0)

inline static constexpr unsigned int IBFMBBHPPEF_TypeDefinitionIndex = 63191;

class IBFMBBHPPEF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JLBODFOKJEE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IBFMBBHPPEF_TypeDefinitionIndex)->GetStaticField(0x322D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFMBBHPPEF__CCTOR_OFFSET))();
	}
};
