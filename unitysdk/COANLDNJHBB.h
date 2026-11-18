#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COANLDNJHBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1971CE40)

inline static constexpr unsigned int COANLDNJHBB_TypeDefinitionIndex = 58470;

class COANLDNJHBB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LNDCOLBMFBJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(COANLDNJHBB_TypeDefinitionIndex)->GetStaticField(0x4CD40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COANLDNJHBB__CCTOR_OFFSET))();
	}
};
