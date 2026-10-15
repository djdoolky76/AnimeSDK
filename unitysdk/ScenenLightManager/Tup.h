#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class Tup; }
namespace System { class Object; }

#define SCENENLIGHTMANAGER_TUP_CTOR_OFFSET UNITYSDK_OFFSET(0xE95C330)
#define SCENENLIGHTMANAGER_TUP_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xE95C3C0)
#define SCENENLIGHTMANAGER_TUP_EQUALS_OFFSET UNITYSDK_OFFSET(0xE95C340)
#define SCENENLIGHTMANAGER_TUP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE95C3E0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int Tup_TypeDefinitionIndex = 49164;

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
