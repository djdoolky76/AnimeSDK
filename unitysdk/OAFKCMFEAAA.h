#pragma once
#include "unitysdk/unitysdk.h"
class LGBHONLHNPN;
class PHPFBBDLPNL_GDPCFEDMCHC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTargetAnimStateChange; }

#define OAFKCMFEAAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1F5E0)
#define OAFKCMFEAAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD1F9F0)
#define OAFKCMFEAAA_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0xBD1FFA0)
#define OAFKCMFEAAA_JPAIJHBHHJH_OFFSET UNITYSDK_OFFSET(0xBD200D0)
#define OAFKCMFEAAA_KLIKKBOKKMI_OFFSET UNITYSDK_OFFSET(0xBD1FCB0)
#define OAFKCMFEAAA_TICK_OFFSET UNITYSDK_OFFSET(0xBD1FA50)
#define OAFKCMFEAAA__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBD1FBA0)
#define OAFKCMFEAAA__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBD1FDB0)
#define OAFKCMFEAAA__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBD1FEB0)

	class OAFKCMFEAAA
	{
	public:
		::Il2CppArray<::System::Int32>* LKIHOLGNJNF; // 0x68
		::Il2CppArray<::System::Int32>* EKINBDOHPFH; // 0x70
		::PHPFBBDLPNL_GDPCFEDMCHC* MDKANMOOKBF; // 0x78
		::LGBHONLHNPN* KJEGMDFNNNC; // 0x80
		::System::Int32 PNBLLILCHAG; // 0x88
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTargetAnimStateChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTargetAnimStateChange*))((::PBYTE)hIl2Cpp + OAFKCMFEAAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFKCMFEAAA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OAFKCMFEAAA_TICK_OFFSET))(this, a1);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFKCMFEAAA__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFKCMFEAAA__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFKCMFEAAA__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void JLNIGEMKDJH(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OAFKCMFEAAA_JLNIGEMKDJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JPAIJHBHHJH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAFKCMFEAAA_JPAIJHBHHJH_OFFSET))(this, a1);
		}

		::System::Boolean KLIKKBOKKMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OAFKCMFEAAA_KLIKKBOKKMI_OFFSET))(this, a1);
		}

	};
