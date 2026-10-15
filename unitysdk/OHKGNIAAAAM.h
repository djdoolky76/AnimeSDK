#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOADDHLOJE;
class FAPMPKICHBB;
class GNFKIEAGDHL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHKGNIAAAAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE71CA0)
#define OHKGNIAAAAM_GET_FUNRECORDS_OFFSET UNITYSDK_OFFSET(0xBE71150)
#define OHKGNIAAAAM_GET_LEVELTURN_OFFSET UNITYSDK_OFFSET(0xBE71120)
#define OHKGNIAAAAM_GET_ROUTEENDMAP_OFFSET UNITYSDK_OFFSET(0xBE71140)
#define OHKGNIAAAAM_KIGGBMBABJD_OFFSET UNITYSDK_OFFSET(0xBE71160)
#define OHKGNIAAAAM_PLGEBDDNCKC_OFFSET UNITYSDK_OFFSET(0xBE71210)
#define OHKGNIAAAAM_SET_LEVELTURN_OFFSET UNITYSDK_OFFSET(0xBE71130)

inline static constexpr unsigned int OHKGNIAAAAM_TypeDefinitionIndex = 63881;

	class OHKGNIAAAAM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FAPMPKICHBB*>* _FunRecords_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GNFKIEAGDHL*>* _RouteEndMap_k__BackingField; // 0x18
		::System::UInt32 _LevelTurn_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKGNIAAAAM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKGNIAAAAM_GET_LEVELTURN_OFFSET))(this);
		}

		::System::Void set_LevelTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHKGNIAAAAM_SET_LEVELTURN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GNFKIEAGDHL*>* get_RouteEndMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GNFKIEAGDHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKGNIAAAAM_GET_ROUTEENDMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FAPMPKICHBB*>* get_FunRecords()
		{
			return ((::System::Collections::Generic::List_1<::FAPMPKICHBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKGNIAAAAM_GET_FUNRECORDS_OFFSET))(this);
		}

		::GNFKIEAGDHL* KIGGBMBABJD(::System::UInt32 a1)
		{
			return ((::GNFKIEAGDHL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHKGNIAAAAM_KIGGBMBABJD_OFFSET))(this, a1);
		}

		::System::Void PLGEBDDNCKC(::AAOADDHLOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAOADDHLOJE*))((::PBYTE)hIl2Cpp + OHKGNIAAAAM_PLGEBDDNCKC_OFFSET))(this, a1);
		}

	};
