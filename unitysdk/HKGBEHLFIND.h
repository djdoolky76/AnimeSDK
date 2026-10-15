#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/WaypointRefreshReason.h"
#include "unitysdk/System/Object.h"
class HKGBEHLFIND;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HKGBEHLFIND_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D43720)
#define HKGBEHLFIND_CTOR_OFFSET UNITYSDK_OFFSET(0x15D43810)
#define HKGBEHLFIND_FKFFBNGIMND_OFFSET UNITYSDK_OFFSET(0x15D438C0)
#define HKGBEHLFIND_LGEFFBHAHOE_OFFSET UNITYSDK_OFFSET(0x15D43970)
#define HKGBEHLFIND___TRYPREPAREREFRESHCOROUTINE_B__4_0_OFFSET UNITYSDK_OFFSET(0x15D43A20)

inline static constexpr unsigned int HKGBEHLFIND_TypeDefinitionIndex = 74595;

	class HKGBEHLFIND : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::NavMap::WaypointRefreshReason>* AFCHLNOLMJP; // 0x10
		::System::Boolean ABMBGMBFELK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGBEHLFIND_CTOR_OFFSET))(this);
		}

		static ::HKGBEHLFIND* BPLPBPMEODA()
		{
			return ((::HKGBEHLFIND*(*)())((::PBYTE)hIl2Cpp + HKGBEHLFIND_BPLPBPMEODA_OFFSET))();
		}

		::System::Void FKFFBNGIMND(::RPG::Client::NavMap::WaypointRefreshReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WaypointRefreshReason))((::PBYTE)hIl2Cpp + HKGBEHLFIND_FKFFBNGIMND_OFFSET))(this, a1);
		}

		::System::Void LGEFFBHAHOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGBEHLFIND_LGEFFBHAHOE_OFFSET))(this);
		}

		::System::Void __TryPrepareRefreshCoroutine_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGBEHLFIND___TRYPREPAREREFRESHCOROUTINE_B__4_0_OFFSET))(this);
		}

	};
