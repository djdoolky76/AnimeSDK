#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165DFDB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165DFDF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__SHOOTCACHEVO_B__13_0_OFFSET UNITYSDK_OFFSET(0x165DFE00)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_GroupOrderReady___c_TypeDefinitionIndex = 66667;

	class ViewObjectManager_GroupOrderReady___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Foundation::ViewObject::ViewObjectHandle>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::Foundation::ViewObject::ViewObjectHandle>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_GroupOrderReady___c_TypeDefinitionIndex)->GetStaticField(0x435A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_GroupOrderReady___c_TypeDefinitionIndex)->GetStaticField(0x435A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShootCacheVO_b__13_0(::Foundation::ViewObject::ViewObjectHandle l, ::Foundation::ViewObject::ViewObjectHandle r)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY___C__SHOOTCACHEVO_B__13_0_OFFSET))(this, l, r);
		}
	};
}
