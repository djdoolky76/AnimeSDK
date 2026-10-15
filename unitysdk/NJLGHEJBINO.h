#pragma once
#include "unitysdk/unitysdk.h"
class FOEBKDEDOHL;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define NJLGHEJBINO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC14AA0)
#define NJLGHEJBINO_ONADD_OFFSET UNITYSDK_OFFSET(0xBC148C0)
#define NJLGHEJBINO_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xBC14A50)
#define NJLGHEJBINO_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC14920)

inline static constexpr unsigned int NJLGHEJBINO_TypeDefinitionIndex = 79128;

	class NJLGHEJBINO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLGHEJBINO_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::FOEBKDEDOHL* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::FOEBKDEDOHL*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + NJLGHEJBINO_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::FOEBKDEDOHL* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::FOEBKDEDOHL*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + NJLGHEJBINO_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + NJLGHEJBINO_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
