#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHPHMDACGG;

#define LJOKEFCOMNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB723E50)

inline static constexpr unsigned int LJOKEFCOMNH_TypeDefinitionIndex = 80560;

	class LJOKEFCOMNH : public ::System::Object
	{
	public:
		::AJHPHMDACGG* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::AJHPHMDACGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJHPHMDACGG*))((::PBYTE)hIl2Cpp + LJOKEFCOMNH_CTOR_OFFSET))(this, a1);
		}

	};
