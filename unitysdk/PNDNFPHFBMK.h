#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAFCOIPLJAH;
class PNDNFPHFBMK;

#define PNDNFPHFBMK_CTOR_OFFSET UNITYSDK_OFFSET(0xCC67570)
#define PNDNFPHFBMK_GET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0xCC672D0)
#define PNDNFPHFBMK_GET_GLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xCC672F0)
#define PNDNFPHFBMK_OOBADKHILIH_OFFSET UNITYSDK_OFFSET(0xCC67310)
#define PNDNFPHFBMK_SET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0xCC672E0)
#define PNDNFPHFBMK_SET_GLOBALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xCC67300)

inline static constexpr unsigned int PNDNFPHFBMK_TypeDefinitionIndex = 69116;

	class PNDNFPHFBMK : public ::System::Object
	{
	public:
		::OAFCOIPLJAH* _Blackboard_k__BackingField; // 0x10
		::OAFCOIPLJAH* _GlobalBlackboard_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDNFPHFBMK_CTOR_OFFSET))(this);
		}

		::OAFCOIPLJAH* get_Blackboard()
		{
			return ((::OAFCOIPLJAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDNFPHFBMK_GET_BLACKBOARD_OFFSET))(this);
		}

		::System::Void set_Blackboard(::OAFCOIPLJAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAFCOIPLJAH*))((::PBYTE)hIl2Cpp + PNDNFPHFBMK_SET_BLACKBOARD_OFFSET))(this, a1);
		}

		::OAFCOIPLJAH* get_GlobalBlackboard()
		{
			return ((::OAFCOIPLJAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDNFPHFBMK_GET_GLOBALBLACKBOARD_OFFSET))(this);
		}

		::System::Void set_GlobalBlackboard(::OAFCOIPLJAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAFCOIPLJAH*))((::PBYTE)hIl2Cpp + PNDNFPHFBMK_SET_GLOBALBLACKBOARD_OFFSET))(this, a1);
		}

		::PNDNFPHFBMK* OOBADKHILIH()
		{
			return ((::PNDNFPHFBMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDNFPHFBMK_OOBADKHILIH_OFFSET))(this);
		}

	};
