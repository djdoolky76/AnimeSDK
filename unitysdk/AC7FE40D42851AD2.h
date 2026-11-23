#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A5C6CF3CD78A10EB;
class BEE4C6F16949E0B5;

#define AC7FE40D42851AD2_E43C13F37D7F56C6_OFFSET UNITYSDK_OFFSET(0x3EE38B0)
#define AC7FE40D42851AD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x3EE3940)

inline static constexpr unsigned int AC7FE40D42851AD2_TypeDefinitionIndex = 15191;

class AC7FE40D42851AD2 : public ::System::Object
{
public:
	static ::A5C6CF3CD78A10EB** StaticGet_E5D434C4991AF5BB()
	{
		return (::A5C6CF3CD78A10EB**)Il2CppClass::FromTypeDefinitionIndex(AC7FE40D42851AD2_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AC7FE40D42851AD2__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::BEE4C6F16949E0B5*>* E43C13F37D7F56C6()
	{
		return ((::Il2CppArray<::BEE4C6F16949E0B5*>*(*)())((::PBYTE)hIl2Cpp + AC7FE40D42851AD2_E43C13F37D7F56C6_OFFSET))();
	}
};
