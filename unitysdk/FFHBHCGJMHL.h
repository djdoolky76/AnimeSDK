#pragma once
#include "unitysdk/unitysdk.h"
class ENLPLPMGOBM;
namespace RPG::Client { class RootMotionHandler; }

#define FFHBHCGJMHL_AJJMOIHDCAO_OFFSET UNITYSDK_OFFSET(0x2E75BE0)
#define FFHBHCGJMHL_CTOR_OFFSET UNITYSDK_OFFSET(0x2E75BD0)
#define FFHBHCGJMHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2E75C40)

inline static constexpr unsigned int FFHBHCGJMHL_TypeDefinitionIndex = 68821;

	struct alignas(8) FFHBHCGJMHL
	{
		::ENLPLPMGOBM* MNELKDDGGNJ; // 0x10
		::RPG::Client::RootMotionHandler* MBOEDFCNCJF; // 0x18
		::System::Void _ctor(::RPG::Client::RootMotionHandler* a1, ::ENLPLPMGOBM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RootMotionHandler*, ::ENLPLPMGOBM*))((::PBYTE)hIl2Cpp + FFHBHCGJMHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean AJJMOIHDCAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHBHCGJMHL_AJJMOIHDCAO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHBHCGJMHL_DISPOSE_OFFSET))(this);
		}

	};
