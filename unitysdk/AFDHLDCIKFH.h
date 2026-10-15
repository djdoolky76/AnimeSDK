#pragma once
#include "unitysdk/unitysdk.h"
class GBJHOMFKNDE;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define AFDHLDCIKFH_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFF6F0)
#define AFDHLDCIKFH_HGKLDBNGKHD_OFFSET UNITYSDK_OFFSET(0xCEFF2C0)
#define AFDHLDCIKFH_ONADD_OFFSET UNITYSDK_OFFSET(0xCEFF250)
#define AFDHLDCIKFH_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xCEFF6A0)
#define AFDHLDCIKFH_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xCEFF630)

inline static constexpr unsigned int AFDHLDCIKFH_TypeDefinitionIndex = 79131;

	class AFDHLDCIKFH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDHLDCIKFH_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::GBJHOMFKNDE* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GBJHOMFKNDE*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + AFDHLDCIKFH_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::GBJHOMFKNDE* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GBJHOMFKNDE*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + AFDHLDCIKFH_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + AFDHLDCIKFH_ONREMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void HGKLDBNGKHD(::Entitas::IEntity* a1, ::GBJHOMFKNDE* a2, ::NNIKOAIKFMO* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GBJHOMFKNDE*, ::NNIKOAIKFMO*, ::System::Boolean))((::PBYTE)hIl2Cpp + AFDHLDCIKFH_HGKLDBNGKHD_OFFSET))(this, a1, a2, a3, a4);
		}

	};
