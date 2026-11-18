#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;
namespace Foundation::ViewObject { class ViewObjectManager; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS194_0__ADDEXTRASUITE_B__0_OFFSET UNITYSDK_OFFSET(0x175128C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS194_0__ADDEXTRASUITE_B__1_OFFSET UNITYSDK_OFFSET(0x17512910)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS194_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175128B0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass194_0_TypeDefinitionIndex = 66687;

	class ViewObjectManager___c__DisplayClass194_0 : public ::System::Object
	{
	public:
		::IANDOOLAALI_DLAAJNDJPLO* rpcCallback; // 0x10
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x18
		::IANDOOLAALI_NGKHGAPPFDA* errorCallback; // 0x20
		::System::UInt32 groupID; // 0x28
		::System::UInt32 suiteIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS194_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddExtraSuite_b__0(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS194_0__ADDEXTRASUITE_B__0_OFFSET))(this, message);
		}

		::System::Void _AddExtraSuite_b__1(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS194_0__ADDEXTRASUITE_B__1_OFFSET))(this, message);
		}
	};
}
