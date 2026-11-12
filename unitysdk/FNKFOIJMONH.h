#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/SingleCardRefreshReason.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class FNKFOIJMONH;
class OOCCBMLAELL;

#define FNKFOIJMONH_CLEAR_OFFSET UNITYSDK_OFFSET(0x167E7F20)
#define FNKFOIJMONH_CTOR_OFFSET UNITYSDK_OFFSET(0x167E7FD0)
#define FNKFOIJMONH_GET_CARD_OFFSET UNITYSDK_OFFSET(0x167E7F90)
#define FNKFOIJMONH_GET_REASON_OFFSET UNITYSDK_OFFSET(0x167E7FB0)
#define FNKFOIJMONH_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x167E7F70)
#define FNKFOIJMONH_GMFKAFLHKPG_OFFSET UNITYSDK_OFFSET(0x167E7DE0)
#define FNKFOIJMONH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x167E7EC0)
#define FNKFOIJMONH_SET_CARD_OFFSET UNITYSDK_OFFSET(0x167E7FA0)
#define FNKFOIJMONH_SET_REASON_OFFSET UNITYSDK_OFFSET(0x167E7FC0)
#define FNKFOIJMONH_SET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x167E7F80)

inline static constexpr unsigned int FNKFOIJMONH_TypeDefinitionIndex = 83383;

	class FNKFOIJMONH : public ::System::Object
	{
	public:
		::BJHMBGLPOLB* _Card_k__BackingField; // 0x10
		::OOCCBMLAELL* _SubMode_k__BackingField; // 0x18
		::RPG::Client::FateRin::SingleCardRefreshReason _Reason_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFOIJMONH_CTOR_OFFSET))(this);
		}

		static ::FNKFOIJMONH* GMFKAFLHKPG(::OOCCBMLAELL* a1, ::BJHMBGLPOLB* a2, ::RPG::Client::FateRin::SingleCardRefreshReason a3)
		{
			return ((::FNKFOIJMONH*(*)(::OOCCBMLAELL*, ::BJHMBGLPOLB*, ::RPG::Client::FateRin::SingleCardRefreshReason))((::PBYTE)hIl2Cpp + FNKFOIJMONH_GMFKAFLHKPG_OFFSET))(a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFOIJMONH_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::OOCCBMLAELL* a1, ::BJHMBGLPOLB* a2, ::RPG::Client::FateRin::SingleCardRefreshReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::BJHMBGLPOLB*, ::RPG::Client::FateRin::SingleCardRefreshReason))((::PBYTE)hIl2Cpp + FNKFOIJMONH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::OOCCBMLAELL* get_SubMode()
		{
			return ((::OOCCBMLAELL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFOIJMONH_GET_SUBMODE_OFFSET))(this);
		}

		::System::Void set_SubMode(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + FNKFOIJMONH_SET_SUBMODE_OFFSET))(this, a1);
		}

		::BJHMBGLPOLB* get_Card()
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFOIJMONH_GET_CARD_OFFSET))(this);
		}

		::System::Void set_Card(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + FNKFOIJMONH_SET_CARD_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::SingleCardRefreshReason get_Reason()
		{
			return ((::RPG::Client::FateRin::SingleCardRefreshReason(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFOIJMONH_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::RPG::Client::FateRin::SingleCardRefreshReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::SingleCardRefreshReason))((::PBYTE)hIl2Cpp + FNKFOIJMONH_SET_REASON_OFFSET))(this, a1);
		}

	};
