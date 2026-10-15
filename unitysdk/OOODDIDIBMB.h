#pragma once
#include "unitysdk/unitysdk.h"
class KJPOADGEGJH;
class NNIKOAIKFMO;
class ODCELNBAEIB;
namespace Entitas { class IEntity; }

#define OOODDIDIBMB_BMAGHCMCDJM_OFFSET UNITYSDK_OFFSET(0xBF92870)
#define OOODDIDIBMB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF92C60)
#define OOODDIDIBMB_JJLOLEDAINE_OFFSET UNITYSDK_OFFSET(0xBF92A40)
#define OOODDIDIBMB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBF926B0)
#define OOODDIDIBMB_ONADD_OFFSET UNITYSDK_OFFSET(0xBF925F0)
#define OOODDIDIBMB_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xBF92820)
#define OOODDIDIBMB_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBF92730)

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
