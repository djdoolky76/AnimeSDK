#pragma once
#include "unitysdk/unitysdk.h"
class LCEANMDMFNF;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define PILCBGBLKKP_CTOR_OFFSET UNITYSDK_OFFSET(0xC266800)
#define PILCBGBLKKP_ONADD_OFFSET UNITYSDK_OFFSET(0xC2665C0)
#define PILCBGBLKKP_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xC2667B0)
#define PILCBGBLKKP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC266640)

inline static constexpr unsigned int PILCBGBLKKP_TypeDefinitionIndex = 79123;

	class PILCBGBLKKP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILCBGBLKKP_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::LCEANMDMFNF* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::LCEANMDMFNF*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + PILCBGBLKKP_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::LCEANMDMFNF* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::LCEANMDMFNF*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + PILCBGBLKKP_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + PILCBGBLKKP_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
