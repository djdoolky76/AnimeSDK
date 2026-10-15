#pragma once
#include "unitysdk/unitysdk.h"
class LGBHONLHNPN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChangeV2; }

#define IJJKAMKENKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1645D370)
#define IJJKAMKENKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1645D590)
#define IJJKAMKENKD_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0x1645DAC0)
#define IJJKAMKENKD_JPAIJHBHHJH_OFFSET UNITYSDK_OFFSET(0x1645DB80)
#define IJJKAMKENKD_KLIKKBOKKMI_OFFSET UNITYSDK_OFFSET(0x1645D7F0)
#define IJJKAMKENKD_TICK_OFFSET UNITYSDK_OFFSET(0x1645D5E0)
#define IJJKAMKENKD__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1645D720)
#define IJJKAMKENKD__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1645D8F0)
#define IJJKAMKENKD__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1645D9E0)

inline static constexpr unsigned int IJJKAMKENKD_TypeDefinitionIndex = 58851;

	class IJJKAMKENKD
	{
	public:
		::LGBHONLHNPN* KJEGMDFNNNC; // 0x68
		::System::Int32 HFHILHOCPNL; // 0x70
		::System::Int32 PNBLLILCHAG; // 0x74
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChangeV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChangeV2*))((::PBYTE)hIl2Cpp + IJJKAMKENKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKAMKENKD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJJKAMKENKD_TICK_OFFSET))(this, a1);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKAMKENKD__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKAMKENKD__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKAMKENKD__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void JLNIGEMKDJH(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IJJKAMKENKD_JLNIGEMKDJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JPAIJHBHHJH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJJKAMKENKD_JPAIJHBHHJH_OFFSET))(this, a1);
		}

		::System::Boolean KLIKKBOKKMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IJJKAMKENKD_KLIKKBOKKMI_OFFSET))(this, a1);
		}

	};
