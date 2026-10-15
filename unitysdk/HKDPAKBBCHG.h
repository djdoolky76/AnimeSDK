#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AlleyDeskTalkRow; }
namespace System { class String; }

#define HKDPAKBBCHG_ABONHPHIEIF_OFFSET UNITYSDK_OFFSET(0x15D40110)
#define HKDPAKBBCHG_AEPEMCLCJOC_OFFSET UNITYSDK_OFFSET(0x15D405C0)
#define HKDPAKBBCHG_DPHJGNFIJLD_OFFSET UNITYSDK_OFFSET(0x15D3FE10)
#define HKDPAKBBCHG_EMCOKPMLKBC_OFFSET UNITYSDK_OFFSET(0x15D401D0)
#define HKDPAKBBCHG_FBKBJBCIIBA_OFFSET UNITYSDK_OFFSET(0x15D3FF90)
#define HKDPAKBBCHG_FEDELADGGLK_OFFSET UNITYSDK_OFFSET(0x15D40190)
#define HKDPAKBBCHG_IDOOOMEEONE_OFFSET UNITYSDK_OFFSET(0x15D40150)
#define HKDPAKBBCHG_IFLNIIIFBFB_OFFSET UNITYSDK_OFFSET(0x15D404A0)
#define HKDPAKBBCHG_JLLDNBNAGEA_OFFSET UNITYSDK_OFFSET(0x15D3FCF0)

	class HKDPAKBBCHG : public ::System::Object
	{
	public:
		static ::System::Boolean JLLDNBNAGEA(::RPG::GameCore::AlleyDeskTalkRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AlleyDeskTalkRow*))((::PBYTE)hIl2Cpp + HKDPAKBBCHG_JLLDNBNAGEA_OFFSET))(a1);
		}

		static ::System::Boolean DPHJGNFIJLD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HKDPAKBBCHG_DPHJGNFIJLD_OFFSET))(a1);
		}

		static ::System::Boolean FBKBJBCIIBA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HKDPAKBBCHG_FBKBJBCIIBA_OFFSET))(a1);
		}

		static ::System::Boolean ABONHPHIEIF()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKDPAKBBCHG_ABONHPHIEIF_OFFSET))();
		}

		static ::System::Boolean IDOOOMEEONE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKDPAKBBCHG_IDOOOMEEONE_OFFSET))();
		}

		static ::System::Boolean FEDELADGGLK()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKDPAKBBCHG_FEDELADGGLK_OFFSET))();
		}

		static ::System::Boolean AEPEMCLCJOC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKDPAKBBCHG_AEPEMCLCJOC_OFFSET))();
		}

		static ::System::Boolean EMCOKPMLKBC(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HKDPAKBBCHG_EMCOKPMLKBC_OFFSET))(a1);
		}

		static ::System::Boolean IFLNIIIFBFB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKDPAKBBCHG_IFLNIIIFBFB_OFFSET))();
		}

	};
