#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAFGGCCJPNI;
class OHKGNIAAAAM;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JFFMGCEJNPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1664C2D0)
#define JFFMGCEJNPI_GET_LEVELENDDATA_OFFSET UNITYSDK_OFFSET(0x1664C2B0)
#define JFFMGCEJNPI_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0x1664C2A0)
#define JFFMGCEJNPI_GET_ROUTECONTEXTS_OFFSET UNITYSDK_OFFSET(0x1664C2C0)

	class JFFMGCEJNPI : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* _RouteContexts_k__BackingField; // 0x10
		::OHKGNIAAAAM* _LevelEndData_k__BackingField; // 0x18
		::System::UInt32 _LevelIndex_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::OHKGNIAAAAM* a2, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::OHKGNIAAAAM*, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + JFFMGCEJNPI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_LevelIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFMGCEJNPI_GET_LEVELINDEX_OFFSET))(this);
		}

		::OHKGNIAAAAM* get_LevelEndData()
		{
			return ((::OHKGNIAAAAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFMGCEJNPI_GET_LEVELENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* get_RouteContexts()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFMGCEJNPI_GET_ROUTECONTEXTS_OFFSET))(this);
		}

	};
