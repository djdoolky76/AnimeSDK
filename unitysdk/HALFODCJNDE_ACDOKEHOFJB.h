#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HALFODCJNDE_FDPLJLNPCCI.h"

#define HALFODCJNDE_ACDOKEHOFJB_COMPARE_OFFSET UNITYSDK_OFFSET(0x16B161B0)
#define HALFODCJNDE_ACDOKEHOFJB_CTOR_OFFSET UNITYSDK_OFFSET(0x16B161A0)

inline static constexpr unsigned int HALFODCJNDE_ACDOKEHOFJB_TypeDefinitionIndex = 52870;

	class HALFODCJNDE_ACDOKEHOFJB : public ::System::Object
	{
	public:
		::System::Int32 JOGJNDDNCFL; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_ACDOKEHOFJB_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::HALFODCJNDE_FDPLJLNPCCI a1, ::HALFODCJNDE_FDPLJLNPCCI a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HALFODCJNDE_FDPLJLNPCCI, ::HALFODCJNDE_FDPLJLNPCCI))((::PBYTE)hIl2Cpp + HALFODCJNDE_ACDOKEHOFJB_COMPARE_OFFSET))(this, a1, a2);
		}

	};
