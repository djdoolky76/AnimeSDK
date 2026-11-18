#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LFEAJOJMCPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x184E8110)

inline static constexpr unsigned int LFEAJOJMCPO_TypeDefinitionIndex = 47435;

class LFEAJOJMCPO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FBBDPGINJFK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LFEAJOJMCPO_TypeDefinitionIndex)->GetStaticField(0x4BE70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFEAJOJMCPO__CCTOR_OFFSET))();
	}
};
