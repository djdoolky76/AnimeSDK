#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBPKHMAJLGK;
namespace System { class Action; }

#define EBHGKOEPPJI_LFENKFMEOFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3BE180)
#define EBHGKOEPPJI_LFENKFMEOFI_GET_CANCELHANDLER_OFFSET UNITYSDK_OFFSET(0x1C3BE1D0)
#define EBHGKOEPPJI_LFENKFMEOFI_GET_REMAININGTIME_OFFSET UNITYSDK_OFFSET(0x1C3BE1B0)
#define EBHGKOEPPJI_LFENKFMEOFI_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1C3BE190)
#define EBHGKOEPPJI_LFENKFMEOFI_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x1C3BD710)
#define EBHGKOEPPJI_LFENKFMEOFI_SET_CANCELHANDLER_OFFSET UNITYSDK_OFFSET(0x1C3BE1E0)
#define EBHGKOEPPJI_LFENKFMEOFI_SET_REMAININGTIME_OFFSET UNITYSDK_OFFSET(0x1C3BE1C0)
#define EBHGKOEPPJI_LFENKFMEOFI_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x1C3BE1A0)

inline static constexpr unsigned int EBHGKOEPPJI_LFENKFMEOFI_TypeDefinitionIndex = 82564;

	class EBHGKOEPPJI_LFENKFMEOFI : public ::System::Object
	{
	public:
		::MBPKHMAJLGK* _Unit_k__BackingField; // 0x10
		::System::Action* _CancelHandler_k__BackingField; // 0x18
		::System::Single _RemainingTime_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_LFENKFMEOFI_CTOR_OFFSET))(this);
		}

		::MBPKHMAJLGK* get_Unit()
		{
			return ((::MBPKHMAJLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_LFENKFMEOFI_GET_UNIT_OFFSET))(this);
		}

		::System::Void set_Unit(::MBPKHMAJLGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBPKHMAJLGK*))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_LFENKFMEOFI_SET_UNIT_OFFSET))(this, a1);
		}

		::System::Single get_RemainingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_LFENKFMEOFI_GET_REMAININGTIME_OFFSET))(this);
		}

		::System::Void set_RemainingTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_LFENKFMEOFI_SET_REMAININGTIME_OFFSET))(this, a1);
		}

		::System::Action* get_CancelHandler()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_LFENKFMEOFI_GET_CANCELHANDLER_OFFSET))(this);
		}

		::System::Void set_CancelHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_LFENKFMEOFI_SET_CANCELHANDLER_OFFSET))(this, a1);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_LFENKFMEOFI_KAOLPGACCID_OFFSET))(this);
		}

	};
