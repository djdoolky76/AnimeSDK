#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OpaqueSoftEdgeRenderer_ObjectInfo;

#define OPAQUESOFTEDGERENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D270470)
#define OPAQUESOFTEDGERENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2704B0)
#define OPAQUESOFTEDGERENDERER___C___CCTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x1D2704C0)

inline static constexpr unsigned int OpaqueSoftEdgeRenderer___c_TypeDefinitionIndex = 26321;

class OpaqueSoftEdgeRenderer___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OpaqueSoftEdgeRenderer___c_TypeDefinitionIndex)->GetStaticField(0x23BB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__27_0(::OpaqueSoftEdgeRenderer_ObjectInfo* infoItem)
	{
		return ((::System::Void(*)(::PVOID, ::OpaqueSoftEdgeRenderer_ObjectInfo*))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER___C___CCTOR_B__27_0_OFFSET))(this, infoItem);
	}
};
