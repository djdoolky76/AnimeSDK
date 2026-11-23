#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BE96472A27DCD00F_A3EE291AA455A8B3_F989A3F8032803A2__CCTOR_OFFSET UNITYSDK_OFFSET(0x28E8F00)

inline static constexpr unsigned int BE96472A27DCD00F_A3EE291AA455A8B3_F989A3F8032803A2_TypeDefinitionIndex = 16420;

class BE96472A27DCD00F_A3EE291AA455A8B3_F989A3F8032803A2 : public ::System::Object
{
public:
	static ::UnityEngine::Vector2* StaticGet_B3816FC5ACD5D50B()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(BE96472A27DCD00F_A3EE291AA455A8B3_F989A3F8032803A2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::Vector3* StaticGet_FE1D290D7E81D458()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(BE96472A27DCD00F_A3EE291AA455A8B3_F989A3F8032803A2_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BE96472A27DCD00F_A3EE291AA455A8B3_F989A3F8032803A2__CCTOR_OFFSET))();
	}
};
