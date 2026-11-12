#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class FormationMoveGroupCallback; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DNDCGNIJEBN_CTOR_OFFSET UNITYSDK_OFFSET(0x126D6780)
#define DNDCGNIJEBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x126D69D0)
#define DNDCGNIJEBN_JDFGKPMJMBH_OFFSET UNITYSDK_OFFSET(0x126D6DA0)
#define DNDCGNIJEBN_JOKCAAMFCIB_OFFSET UNITYSDK_OFFSET(0x126D6C00)
#define DNDCGNIJEBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x126D6870)
#define DNDCGNIJEBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x126D6980)
#define DNDCGNIJEBN_TICK_OFFSET UNITYSDK_OFFSET(0x126D6F40)

inline static constexpr unsigned int DNDCGNIJEBN_TypeDefinitionIndex = 59369;

	class DNDCGNIJEBN : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* FINPCOMDHCN; // 0x18
		::RPG::GameCore::FormationMoveGroupCallback* IGHAHBNLIJA; // 0x20
		::KFELGAIGHAP* JBHHMGFJJJN; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveGroupCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveGroupCallback*))((::PBYTE)hIl2Cpp + DNDCGNIJEBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDCGNIJEBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDCGNIJEBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDCGNIJEBN_DISPOSE_OFFSET))(this);
		}

		::System::Void JOKCAAMFCIB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNDCGNIJEBN_JOKCAAMFCIB_OFFSET))(this, a1);
		}

		::System::Void JDFGKPMJMBH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNDCGNIJEBN_JDFGKPMJMBH_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNDCGNIJEBN_TICK_OFFSET))(this, a1);
		}

	};
