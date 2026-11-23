#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FAB45D193BB49413;

#define FAB45D193BB49413_F997F9CD0DE29047_EEC8E68E8A5581F7_OFFSET UNITYSDK_OFFSET(0x3CFD6B0)
#define FAB45D193BB49413_F997F9CD0DE29047__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CFD710)
#define FAB45D193BB49413_F997F9CD0DE29047__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FAB45D193BB49413_F997F9CD0DE29047_TypeDefinitionIndex = 10719;

class FAB45D193BB49413_F997F9CD0DE29047 : public ::System::Object
{
public:
	static ::FAB45D193BB49413_F997F9CD0DE29047** StaticGet_FB0A7EB463FA294A()
	{
		return (::FAB45D193BB49413_F997F9CD0DE29047**)Il2CppClass::FromTypeDefinitionIndex(FAB45D193BB49413_F997F9CD0DE29047_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Object** StaticGet_EF10191E14AD56FA()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FAB45D193BB49413_F997F9CD0DE29047_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAB45D193BB49413_F997F9CD0DE29047__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAB45D193BB49413_F997F9CD0DE29047__CTOR_OFFSET))(this);
	}

	::FAB45D193BB49413* EEC8E68E8A5581F7(::System::Object* E4831D86BAEA5712)
	{
		return ((::FAB45D193BB49413*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAB45D193BB49413_F997F9CD0DE29047_EEC8E68E8A5581F7_OFFSET))(this, E4831D86BAEA5712);
	}
};
