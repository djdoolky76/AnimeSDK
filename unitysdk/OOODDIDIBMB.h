#pragma once
#include "unitysdk/unitysdk.h"
class KJPOADGEGJH;
class NNIKOAIKFMO;
class ODCELNBAEIB;
namespace Entitas { class IEntity; }

#define OOODDIDIBMB_BMAGHCMCDJM_OFFSET UNITYSDK_OFFSET(0xC8937C0)
#define OOODDIDIBMB_CTOR_OFFSET UNITYSDK_OFFSET(0xC893BB0)
#define OOODDIDIBMB_JJLOLEDAINE_OFFSET UNITYSDK_OFFSET(0xC893990)
#define OOODDIDIBMB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC893600)
#define OOODDIDIBMB_ONADD_OFFSET UNITYSDK_OFFSET(0xC893540)
#define OOODDIDIBMB_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xC893770)
#define OOODDIDIBMB_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC893680)

inline static constexpr unsigned int OOODDIDIBMB_TypeDefinitionIndex = 81901;

	class OOODDIDIBMB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOODDIDIBMB_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::KJPOADGEGJH* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::KJPOADGEGJH*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + OOODDIDIBMB_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::KJPOADGEGJH* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::KJPOADGEGJH*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + OOODDIDIBMB_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + OOODDIDIBMB_ONREMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void BMAGHCMCDJM(::KJPOADGEGJH* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJPOADGEGJH*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + OOODDIDIBMB_BMAGHCMCDJM_OFFSET))(this, a1, a2);
		}

		::System::Void KANMCJHEFJJ(::KJPOADGEGJH* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KJPOADGEGJH*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + OOODDIDIBMB_KANMCJHEFJJ_OFFSET))(this, a1, a2);
		}

		::System::Void JJLOLEDAINE(::ODCELNBAEIB* a1, ::System::Int32 a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*, ::System::Int32, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + OOODDIDIBMB_JJLOLEDAINE_OFFSET))(this, a1, a2, a3);
		}

	};
