#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFOEPBDHOOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E47000)

inline static constexpr unsigned int HFOEPBDHOOD_TypeDefinitionIndex = 58848;

class HFOEPBDHOOD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JLCAOLGEHBB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HFOEPBDHOOD_TypeDefinitionIndex)->GetStaticField(0x46460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFOEPBDHOOD__CCTOR_OFFSET))();
	}
};
