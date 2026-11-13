#pragma once
#include "unitysdk/unitysdk.h"
class LGBHONLHNPN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChangeV2; }

#define IJJKAMKENKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1805B6B0)
#define IJJKAMKENKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1805B8D0)
#define IJJKAMKENKD_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0x1805BE00)
#define IJJKAMKENKD_JPAIJHBHHJH_OFFSET UNITYSDK_OFFSET(0x1805BEC0)
#define IJJKAMKENKD_KLIKKBOKKMI_OFFSET UNITYSDK_OFFSET(0x1805BB30)
#define IJJKAMKENKD_TICK_OFFSET UNITYSDK_OFFSET(0x1805B920)
#define IJJKAMKENKD__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1805BA60)
#define IJJKAMKENKD__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1805BC30)
#define IJJKAMKENKD__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1805BD20)

inline static constexpr unsigned int IJJKAMKENKD_TypeDefinitionIndex = 60123;

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
