#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACKPMNNHHON__CCTOR_OFFSET UNITYSDK_OFFSET(0x12644400)

inline static constexpr unsigned int ACKPMNNHHON_TypeDefinitionIndex = 56906;

class ACKPMNNHHON : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CGCLCEJMBAE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ACKPMNNHHON_TypeDefinitionIndex)->GetStaticField(0x2FAA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACKPMNNHHON__CCTOR_OFFSET))();
	}
};
