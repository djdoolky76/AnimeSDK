#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneMeshCulledManager_MyTrigger;
namespace System { template <typename T1, typename T2> class Func_2; }

#define SCENEMESHCULLEDMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2CA150)
#define SCENEMESHCULLEDMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CA190)
#define SCENEMESHCULLEDMANAGER___C__INVISBLEMESH_B__14_0_OFFSET UNITYSDK_OFFSET(0x1C2CA1A0)

inline static constexpr unsigned int SceneMeshCulledManager___c_TypeDefinitionIndex = 65640;

class SceneMeshCulledManager___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SceneMeshCulledManager___c_TypeDefinitionIndex)->GetStaticField(0x49450);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SceneMeshCulledManager___c_TypeDefinitionIndex)->GetStaticField(0x49458);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _invisbleMesh_b__14_0(::SceneMeshCulledManager_MyTrigger* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::SceneMeshCulledManager_MyTrigger*))((::PBYTE)hIl2Cpp + SCENEMESHCULLEDMANAGER___C__INVISBLEMESH_B__14_0_OFFSET))(this, item);
	}
};
