#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NAP_NAPECS_QUERYMASK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8601A0)
#define NAP_NAPECS_QUERYMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x860190)
#define NAP_NAPECS_QUERYMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x860640)
#define NAP_NAPECS_QUERYMASK_ISCOMPATIBLEWITH_OFFSET UNITYSDK_OFFSET(0x860700)
#define NAP_NAPECS_QUERYMASK___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8607D0)
#define NAP_NAPECS_QUERYMASK___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x860850)

namespace Nap::NapECS
{
	inline static constexpr unsigned int QueryMask_TypeDefinitionIndex = 35920;

	struct alignas(4) QueryMask
	{
		::Nap::NapECS::ComponentMask includeMask; // 0x10
		::Nap::NapECS::ComponentMask excludeMask; // 0x50
		::System::Boolean needExclude; // 0x90

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASK_EQUALS_OFFSET))(this, obj);
		}

		/*
		::System::Boolean Equals_1(::Nap::NapECS::QueryMask other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::QueryMask))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASK_EQUALS_1_OFFSET))(this, other);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsCompatibleWith(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASK_ISCOMPATIBLEWITH_OFFSET))(this, mask);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASK___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_QUERYMASK___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
