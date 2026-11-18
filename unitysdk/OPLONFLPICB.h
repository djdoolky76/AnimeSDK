#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/RendererUpdateAllAsyncHandle.h"

#define OPLONFLPICB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172E2E80)
#define OPLONFLPICB_HLECJLHAEOO_OFFSET UNITYSDK_OFFSET(0x172E2F10)
#define OPLONFLPICB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x172E2E40)
#define OPLONFLPICB__CCTOR_OFFSET UNITYSDK_OFFSET(0x172E2F00)
#define OPLONFLPICB__CTOR_OFFSET UNITYSDK_OFFSET(0x172E2EE0)

inline static constexpr unsigned int OPLONFLPICB_TypeDefinitionIndex = 69030;

class OPLONFLPICB
{
public:
	static ::System::Boolean* StaticGet_OCGPNAHJNEE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OPLONFLPICB_TypeDefinitionIndex)->GetStaticField(0xC020);
	}
	::UnityEngine::Rendering::RendererUpdateAllAsyncHandle MOGPEKAJFHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLONFLPICB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPLONFLPICB__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLONFLPICB_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLONFLPICB_DISPOSE_OFFSET))(this);
	}

	::System::Void HLECJLHAEOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLONFLPICB_HLECJLHAEOO_OFFSET))(this);
	}
};
