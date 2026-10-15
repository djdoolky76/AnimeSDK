#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_GLECDGONCHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xF22F0)
#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_GLECDGONCHA_EQUALS_OFFSET UNITYSDK_OFFSET(0xF2290)
#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_GLECDGONCHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF2300)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MeshSelfIntersectionDebugger_GLECDGONCHA_TypeDefinitionIndex = 73637;

	struct alignas(4) MeshSelfIntersectionDebugger_GLECDGONCHA
	{
		::System::Int32 IODCJHMDGFH; // 0x10
		::System::Int32 ACICDNHCLIB; // 0x14
		/*
		::System::Boolean Equals(::RPG::Client::TAUtils::MeshSelfIntersectionDebugger_GLECDGONCHA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::MeshSelfIntersectionDebugger_GLECDGONCHA))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_GLECDGONCHA_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_GLECDGONCHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_GLECDGONCHA_GETHASHCODE_OFFSET))(this);
		}

	};
}
