#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Delegate; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class DelegateBridgeBase; }

#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS7286_1_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C1CA0)
#define XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS7286_1__GETDELEGATE_B__1_OFFSET UNITYSDK_OFFSET(0xE8CA490)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass7286_1_TypeDefinitionIndex = 51135;

	template <typename T>
	class ObjectTranslator___c__DisplayClass7286_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Reflection::MethodInfo* foundMethod; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS7286_1_CTOR_OFFSET))(this);
		}

		::System::Delegate* _getDelegate_b__1(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__DISPLAYCLASS7286_1__GETDELEGATE_B__1_OFFSET))(this, a1);
		}

	};
}
