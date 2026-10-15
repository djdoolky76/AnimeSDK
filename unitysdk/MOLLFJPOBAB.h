#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class LockBattleOperation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MOLLFJPOBAB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2DB30)
#define MOLLFJPOBAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA2DC10)
#define MOLLFJPOBAB_MGNDCENGDFO_OFFSET UNITYSDK_OFFSET(0xBA2E020)
#define MOLLFJPOBAB_NEFJEODEMPP_OFFSET UNITYSDK_OFFSET(0xBA2E0C0)
#define MOLLFJPOBAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA2DD00)
#define MOLLFJPOBAB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA2DF70)
#define MOLLFJPOBAB_TICK_OFFSET UNITYSDK_OFFSET(0xBA2DFC0)

inline static constexpr unsigned int MOLLFJPOBAB_TypeDefinitionIndex = 58201;

	class MOLLFJPOBAB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LockBattleOperation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KDJNAAOFMMJ* NNFJKIPMAAI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockBattleOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockBattleOperation*))((::PBYTE)hIl2Cpp + MOLLFJPOBAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLLFJPOBAB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLLFJPOBAB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLLFJPOBAB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLLFJPOBAB_TICK_OFFSET))(this, a1);
		}

		::System::Void MGNDCENGDFO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLLFJPOBAB_MGNDCENGDFO_OFFSET))(this, a1);
		}

		::System::Void NEFJEODEMPP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLLFJPOBAB_NEFJEODEMPP_OFFSET))(this, a1);
		}

	};
