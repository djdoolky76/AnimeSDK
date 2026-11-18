#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS157_0__ADDDYNAMICROLLBACKPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x132436D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS157_0__CTOR_OFFSET UNITYSDK_OFFSET(0x132436C0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass157_0_TypeDefinitionIndex = 66682;

	class ViewObjectManager___c__DisplayClass157_0 : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::String* name; // 0x18
		::IANDOOLAALI_DLAAJNDJPLO* rpcCallback; // 0x20
		::System::UInt32 floorID; // 0x28
		::UnityEngine::Vector3 rotation; // 0x2C
		::System::UInt32 groupID; // 0x38
		::UnityEngine::Vector3 position; // 0x3C
		::System::Boolean isPersistentInDungeon; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS157_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddDynamicRollbackPoint_b__0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS157_0__ADDDYNAMICROLLBACKPOINT_B__0_OFFSET))(this, msg);
		}
	};
}
