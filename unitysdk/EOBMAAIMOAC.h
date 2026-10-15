#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIOnTop; }
namespace System { class Object; }

#define EOBMAAIMOAC_AIJLDADIBNM_OFFSET UNITYSDK_OFFSET(0x155B92B0)
#define EOBMAAIMOAC_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x155B99E0)
#define EOBMAAIMOAC_CTOR_OFFSET UNITYSDK_OFFSET(0x155B9250)
#define EOBMAAIMOAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155B9260)
#define EOBMAAIMOAC_EHGDDIOILDD_OFFSET UNITYSDK_OFFSET(0x155B97E0)
#define EOBMAAIMOAC_FBGHGOFHLAA_OFFSET UNITYSDK_OFFSET(0x155B93D0)
#define EOBMAAIMOAC_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0x155B9610)
#define EOBMAAIMOAC_MGNJPPKOKMG_OFFSET UNITYSDK_OFFSET(0x155B9830)
#define EOBMAAIMOAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155B9360)
#define EOBMAAIMOAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155B96D0)
#define EOBMAAIMOAC_TICK_OFFSET UNITYSDK_OFFSET(0x155B9720)

inline static constexpr unsigned int EOBMAAIMOAC_TypeDefinitionIndex = 58945;

	class EOBMAAIMOAC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitUIOnTop* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::GELIALJDFBL* JLMAKNFAEBH; // 0x28
		::System::Boolean DPHJKLIOLEL; // 0x30
		::System::Boolean JMEFAHHJJCM; // 0x31
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUIOnTop* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUIOnTop*))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean FBGHGOFHLAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_FBGHGOFHLAA_OFFSET))(this);
		}

		::System::Void IEOGLIENPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_IEOGLIENPMN_OFFSET))(this);
		}

		::System::Void AIJLDADIBNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_AIJLDADIBNM_OFFSET))(this);
		}

		::System::Void MGNJPPKOKMG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_MGNJPPKOKMG_OFFSET))(this, a1);
		}

		::System::Void EHGDDIOILDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_EHGDDIOILDD_OFFSET))(this);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + EOBMAAIMOAC_BKPGNCBNMGP_OFFSET))(this, a1);
		}

	};
