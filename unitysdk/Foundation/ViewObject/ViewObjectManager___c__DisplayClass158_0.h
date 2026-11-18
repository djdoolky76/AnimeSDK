#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS158_0__ACTIVEDYNAMICROLLBACKPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x13243880)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS158_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13243870)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass158_0_TypeDefinitionIndex = 66688;

	class ViewObjectManager___c__DisplayClass158_0 : public ::System::Object
	{
	public:
		::IANDOOLAALI_DLAAJNDJPLO* rpcCallback; // 0x10
		::System::String* key; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS158_0__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveDynamicRollbackPoint_b__0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS158_0__ACTIVEDYNAMICROLLBACKPOINT_B__0_OFFSET))(this, msg);
		}
	};
}
