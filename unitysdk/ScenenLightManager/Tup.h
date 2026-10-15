#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class Tup; }
namespace System { class Object; }

#define SCENENLIGHTMANAGER_TUP_CTOR_OFFSET UNITYSDK_OFFSET(0xE966870)
#define SCENENLIGHTMANAGER_TUP_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xE966900)
#define SCENENLIGHTMANAGER_TUP_EQUALS_OFFSET UNITYSDK_OFFSET(0xE966880)
#define SCENENLIGHTMANAGER_TUP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE966920)

namespace ScenenLightManager
{
	class Tup : public ::System::Object
	{
	public:
		::System::Int64 sid; // 0x10
		::System::Int32 id; // 0x18
		::System::Void _ctor(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TUP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TUP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean DGCGLNOLDIB(::ScenenLightManager::Tup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::Tup*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TUP_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_TUP_GETHASHCODE_OFFSET))(this);
		}

	};
}
