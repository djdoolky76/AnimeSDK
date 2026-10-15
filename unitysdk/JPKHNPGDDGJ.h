#pragma once
#include "unitysdk/unitysdk.h"
class MANCPDFHDHO;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define JPKHNPGDDGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C8770)
#define JPKHNPGDDGJ_ONADD_OFFSET UNITYSDK_OFFSET(0xB2C8660)
#define JPKHNPGDDGJ_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xB2C8720)
#define JPKHNPGDDGJ_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB2C86C0)

inline static constexpr unsigned int JPKHNPGDDGJ_TypeDefinitionIndex = 75955;

	class JPKHNPGDDGJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKHNPGDDGJ_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::MANCPDFHDHO* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::MANCPDFHDHO*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + JPKHNPGDDGJ_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::MANCPDFHDHO* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::MANCPDFHDHO*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + JPKHNPGDDGJ_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + JPKHNPGDDGJ_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
