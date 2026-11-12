#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JONAOEKOCEI_IPDHLMJJDND.h"
namespace System { class String; }

#define JONAOEKOCEI_DNGONJCNPAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBAD7450)
#define JONAOEKOCEI_DNGONJCNPAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAD88D0)
#define JONAOEKOCEI_DNGONJCNPAM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBAD8910)

inline static constexpr unsigned int JONAOEKOCEI_DNGONJCNPAM_TypeDefinitionIndex = 61468;

	class JONAOEKOCEI_DNGONJCNPAM : public ::JONAOEKOCEI_IPDHLMJJDND
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x38
		::System::Single HBDJCFFDGDD; // 0x3C
		::System::Void _ctor(::System::Single a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + JONAOEKOCEI_DNGONJCNPAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_DNGONJCNPAM_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JONAOEKOCEI_DNGONJCNPAM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
