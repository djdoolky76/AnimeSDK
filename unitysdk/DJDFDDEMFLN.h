#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KKIJDPKIIKL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerTutorial; }
namespace System { class Object; }

#define DJDFDDEMFLN_CLAHHFDEOCO_OFFSET UNITYSDK_OFFSET(0xF228B20)
#define DJDFDDEMFLN_CLIPLDCFECE_OFFSET UNITYSDK_OFFSET(0xF228A00)
#define DJDFDDEMFLN_CTOR_OFFSET UNITYSDK_OFFSET(0xF2282A0)
#define DJDFDDEMFLN_DFMMCLPHDAN_OFFSET UNITYSDK_OFFSET(0xF228820)
#define DJDFDDEMFLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2282B0)
#define DJDFDDEMFLN_INJBACFLODG_OFFSET UNITYSDK_OFFSET(0xF228540)
#define DJDFDDEMFLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF228350)
#define DJDFDDEMFLN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF228770)
#define DJDFDDEMFLN_TICK_OFFSET UNITYSDK_OFFSET(0xF2287C0)

inline static constexpr unsigned int DJDFDDEMFLN_TypeDefinitionIndex = 58802;

	class DJDFDDEMFLN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerTutorial* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KKIJDPKIIKL* FNHMLOHFJMP; // 0x28
		::System::Boolean PPIGLCIEIIM; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerTutorial* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerTutorial*))((::PBYTE)hIl2Cpp + DJDFDDEMFLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDFDDEMFLN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDFDDEMFLN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDFDDEMFLN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJDFDDEMFLN_TICK_OFFSET))(this, a1);
		}

		::System::Void DFMMCLPHDAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDFDDEMFLN_DFMMCLPHDAN_OFFSET))(this);
		}

		::System::Void CLIPLDCFECE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJDFDDEMFLN_CLIPLDCFECE_OFFSET))(this, a1);
		}

		::System::Boolean INJBACFLODG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDFDDEMFLN_INJBACFLODG_OFFSET))(this);
		}

		::System::Void CLAHHFDEOCO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJDFDDEMFLN_CLAHHFDEOCO_OFFSET))(this, a1);
		}

	};
