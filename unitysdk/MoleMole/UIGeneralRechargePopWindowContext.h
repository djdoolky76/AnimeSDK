#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHFDDIKCLEC_LIPOLLGKOBA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

class FNPCEMAGPIJ;
class FOLOGHLENFB;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_FROMRECHARGETYPEID_OFFSET UNITYSDK_OFFSET(0x18F110B0)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_FROMRECHARGETYPETEMPLATE_OFFSET UNITYSDK_OFFSET(0x18F110F0)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_TORECHARGETYPEID_OFFSET UNITYSDK_OFFSET(0x18F110D0)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_TORECHARGETYPETEMPLATE_OFFSET UNITYSDK_OFFSET(0x18F11110)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_FROMRECHARGETYPEID_OFFSET UNITYSDK_OFFSET(0x18F110C0)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_FROMRECHARGETYPETEMPLATE_OFFSET UNITYSDK_OFFSET(0x18F11100)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_TORECHARGETYPEID_OFFSET UNITYSDK_OFFSET(0x18F110E0)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_TORECHARGETYPETEMPLATE_OFFSET UNITYSDK_OFFSET(0x18F11120)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18F11240)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F11130)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRechargePopWindowContext_TypeDefinitionIndex = 83262;

	class UIGeneralRechargePopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FOLOGHLENFB* _fromRechargeTypeTemplate_k__BackingField; // 0x28
		::System::Action_1<::System::UInt32>* OnNotEnoughCallback; // 0x30
		::FOLOGHLENFB* _toRechargeTypeTemplate_k__BackingField; // 0x38
		::FNPCEMAGPIJ* RechargeHandler; // 0x40
		::System::UInt32 toRechargeItemCount; // 0x48
		::System::Int32 _fromRechargeTypeID_k__BackingField; // 0x4C
		::System::Int32 _toRechargeTypeID_k__BackingField; // 0x50
		::System::Nullable_1<::System::Int32> ExchangeRatio; // 0x54
		::GHFDDIKCLEC_LIPOLLGKOBA reason; // 0x5C

		::System::Void _ctor(::System::Int32 rechargeToItemID, ::GHFDDIKCLEC_LIPOLLGKOBA openReason, ::System::UInt32 rechargeToItemCount, ::System::Action_1<::System::UInt32>* OnNotEnoughCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::GHFDDIKCLEC_LIPOLLGKOBA, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT__CTOR_OFFSET))(this, rechargeToItemID, openReason, rechargeToItemCount, OnNotEnoughCB);
		}

		::System::Void _ctor_1(::System::Int32 rechargeFromItemID, ::System::Int32 rechargeToItemID, ::FNPCEMAGPIJ* RechargeHandler, ::System::UInt32 rechargeToItemCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::FNPCEMAGPIJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT__CTOR_1_OFFSET))(this, rechargeFromItemID, rechargeToItemID, RechargeHandler, rechargeToItemCount);
		}

		::System::Int32 get_fromRechargeTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_FROMRECHARGETYPEID_OFFSET))(this);
		}

		::System::Void set_fromRechargeTypeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_FROMRECHARGETYPEID_OFFSET))(this, value);
		}

		::System::Int32 get_toRechargeTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_TORECHARGETYPEID_OFFSET))(this);
		}

		::System::Void set_toRechargeTypeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_TORECHARGETYPEID_OFFSET))(this, value);
		}

		::FOLOGHLENFB* get_fromRechargeTypeTemplate()
		{
			return ((::FOLOGHLENFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_FROMRECHARGETYPETEMPLATE_OFFSET))(this);
		}

		::System::Void set_fromRechargeTypeTemplate(::FOLOGHLENFB* value)
		{
			return ((::System::Void(*)(::PVOID, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_FROMRECHARGETYPETEMPLATE_OFFSET))(this, value);
		}

		::FOLOGHLENFB* get_toRechargeTypeTemplate()
		{
			return ((::FOLOGHLENFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_TORECHARGETYPETEMPLATE_OFFSET))(this);
		}

		::System::Void set_toRechargeTypeTemplate(::FOLOGHLENFB* value)
		{
			return ((::System::Void(*)(::PVOID, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_TORECHARGETYPETEMPLATE_OFFSET))(this, value);
		}
	};
}
