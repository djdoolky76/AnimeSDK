#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJHHPFFPFOJ;
class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS156_0__ACTIVEROLLBACKPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x13243560)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS156_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13243550)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass156_0_TypeDefinitionIndex = 66678;

	class ViewObjectManager___c__DisplayClass156_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::EJHHPFFPFOJ* point; // 0x18
		::IANDOOLAALI_DLAAJNDJPLO* rpcCallback; // 0x20
		::System::UInt32 floorID; // 0x28
		::System::UInt32 groupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS156_0__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveRollbackPoint_b__0(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS156_0__ACTIVEROLLBACKPOINT_B__0_OFFSET))(this, msg);
		}
	};
}
