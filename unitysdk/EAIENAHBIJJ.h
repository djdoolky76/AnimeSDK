#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ItemList; }

#define EAIENAHBIJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x181D1840)
#define EAIENAHBIJJ_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x181D17A0)
#define EAIENAHBIJJ_GET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0x181D17C0)
#define EAIENAHBIJJ_GET_ISSHELFUNLOCK_OFFSET UNITYSDK_OFFSET(0x181D17E0)
#define EAIENAHBIJJ_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x181D1780)
#define EAIENAHBIJJ_GET_LOCALISVISIBLE_OFFSET UNITYSDK_OFFSET(0x181D1820)
#define EAIENAHBIJJ_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x181D1800)
#define EAIENAHBIJJ_SET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x181D17B0)
#define EAIENAHBIJJ_SET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0x181D17D0)
#define EAIENAHBIJJ_SET_ISSHELFUNLOCK_OFFSET UNITYSDK_OFFSET(0x181D17F0)
#define EAIENAHBIJJ_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x181D1790)
#define EAIENAHBIJJ_SET_LOCALISVISIBLE_OFFSET UNITYSDK_OFFSET(0x181D1830)
#define EAIENAHBIJJ_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x181D1810)

inline static constexpr unsigned int EAIENAHBIJJ_TypeDefinitionIndex = 84428;

	class EAIENAHBIJJ : public ::System::Object
	{
	public:
		::Proto::ItemList* _Rewards_k__BackingField; // 0x10
		::System::UInt32 _CurrentCnt_k__BackingField; // 0x18
		::System::Boolean _CanInteract_k__BackingField; // 0x1C
		::System::Boolean _IsVisible_k__BackingField; // 0x1D
		::System::Boolean _IsShelfUnlock_k__BackingField; // 0x1E
		::System::Boolean _LocalIsVisible_k__BackingField; // 0x1F
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_CanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_GET_CANINTERACT_OFFSET))(this);
		}

		::System::Void set_CanInteract(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_SET_CANINTERACT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_GET_CURRENTCNT_OFFSET))(this);
		}

		::System::Void set_CurrentCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_SET_CURRENTCNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShelfUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_GET_ISSHELFUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsShelfUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_SET_ISSHELFUNLOCK_OFFSET))(this, a1);
		}

		::Proto::ItemList* get_Rewards()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_GET_REWARDS_OFFSET))(this);
		}

		::System::Void set_Rewards(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_SET_REWARDS_OFFSET))(this, a1);
		}

		::System::Boolean get_LocalIsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_GET_LOCALISVISIBLE_OFFSET))(this);
		}

		::System::Void set_LocalIsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAIENAHBIJJ_SET_LOCALISVISIBLE_OFFSET))(this, a1);
		}

	};
