#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LGBHONLHNPN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChange; }

#define CLPMNAOECLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1894B0)
#define CLPMNAOECLF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B189550)
#define CLPMNAOECLF_DNCFBGANPCD_OFFSET UNITYSDK_OFFSET(0x1B189AC0)
#define CLPMNAOECLF_EDHJNPEKFEK_OFFSET UNITYSDK_OFFSET(0x1B1895A0)
#define CLPMNAOECLF_HGOJNFKDIMA_OFFSET UNITYSDK_OFFSET(0x1B1899F0)
#define CLPMNAOECLF_NKMPPIDGFJF_OFFSET UNITYSDK_OFFSET(0x1B189860)
#define CLPMNAOECLF_NPGKJDHOJND_OFFSET UNITYSDK_OFFSET(0x1B189770)
#define CLPMNAOECLF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B189680)
#define CLPMNAOECLF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B189940)
#define CLPMNAOECLF_TICK_OFFSET UNITYSDK_OFFSET(0x1B189990)

inline static constexpr unsigned int CLPMNAOECLF_TypeDefinitionIndex = 60122;

	class CLPMNAOECLF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitAnimStateChange* OFKGLJOAMLD; // 0x20
		::LGBHONLHNPN* KJEGMDFNNNC; // 0x28
		::System::Int32 HFHILHOCPNL; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChange*))((::PBYTE)hIl2Cpp + CLPMNAOECLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPMNAOECLF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPMNAOECLF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPMNAOECLF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLPMNAOECLF_TICK_OFFSET))(this, a1);
		}

		::System::Void HGOJNFKDIMA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLPMNAOECLF_HGOJNFKDIMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DNCFBGANPCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPMNAOECLF_DNCFBGANPCD_OFFSET))(this);
		}

		::System::Void NKMPPIDGFJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPMNAOECLF_NKMPPIDGFJF_OFFSET))(this);
		}

		::System::Void EDHJNPEKFEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPMNAOECLF_EDHJNPEKFEK_OFFSET))(this);
		}

		::System::Void NPGKJDHOJND(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLPMNAOECLF_NPGKJDHOJND_OFFSET))(this, a1);
		}

	};
