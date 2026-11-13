#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EFHJJIGLPDL;
class FOOIINCDBFA;
class GELIALJDFBL;
class HJCOLAEIJFM;
class KNKPLOGICFO;
namespace RPG::GameCore { class AdvNPCChase; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define MFJMBIACNKJ_CIIONHJOEPE_OFFSET UNITYSDK_OFFSET(0x17C8DA90)
#define MFJMBIACNKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x17C8C4E0)
#define MFJMBIACNKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C8CFB0)
#define MFJMBIACNKJ_IOJFGGFIKMH_OFFSET UNITYSDK_OFFSET(0x17C8DE40)
#define MFJMBIACNKJ_LOELLLLLOIM_OFFSET UNITYSDK_OFFSET(0x17C8D970)
#define MFJMBIACNKJ_ODDLOFBPEEP_OFFSET UNITYSDK_OFFSET(0x17C8DFF0)
#define MFJMBIACNKJ_OICNIIBMFLK_OFFSET UNITYSDK_OFFSET(0x17C8D400)
#define MFJMBIACNKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C8D2E0)
#define MFJMBIACNKJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C8D610)
#define MFJMBIACNKJ_TICK_OFFSET UNITYSDK_OFFSET(0x17C8DD50)

inline static constexpr unsigned int MFJMBIACNKJ_TypeDefinitionIndex = 53507;

	class MFJMBIACNKJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x18
		::EFHJJIGLPDL* LKNDEOKIEAK; // 0x20
		::GELIALJDFBL* KGHMPFOLEHH; // 0x28
		::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x30
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x38
		::RPG::GameCore::AdvNPCChase* IGHAHBNLIJA; // 0x40
		::GELIALJDFBL* EMCMCEEOIOI; // 0x48
		::RPG::GameCore::AdventureCharacterDataComponent* IIOGGGKBBPA; // 0x50
		::KNKPLOGICFO* CPPMELMICIG; // 0x58
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x60
		::GELIALJDFBL* CHJAMLNAIOK; // 0x68
		::GELIALJDFBL* JLODFHKOJEE; // 0x70
		::FOOIINCDBFA* AGJDABDMMEH; // 0x78
		::GELIALJDFBL* BCBFMMBINNM; // 0x80
		::HJCOLAEIJFM* JABCHFIIFIC; // 0x88
		::UnityEngine::Vector3 PBFOFLKCMKL; // 0x90
		::System::Boolean GDHFPLIEMAK; // 0x9C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCChase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCChase*))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void LOELLLLLOIM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_LOELLLLLOIM_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ODDLOFBPEEP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_ODDLOFBPEEP_OFFSET))(this);
		}

		::System::Void OICNIIBMFLK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_OICNIIBMFLK_OFFSET))(this, a1);
		}

		::System::Boolean IOJFGGFIKMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_IOJFGGFIKMH_OFFSET))(this);
		}

		::System::Void CIIONHJOEPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJMBIACNKJ_CIIONHJOEPE_OFFSET))(this);
		}

	};
