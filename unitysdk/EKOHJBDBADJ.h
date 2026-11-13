#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ECCKLFIHNOH;
class ICKCNNLHLNF;
class KKIJDPKIIKL;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerAction; }
namespace System { class Action; }
namespace System { class String; }

#define EKOHJBDBADJ_ACIIMIGDBJJ_OFFSET UNITYSDK_OFFSET(0x199A1010)
#define EKOHJBDBADJ_BNHOEGMIPDL_OFFSET UNITYSDK_OFFSET(0x199A1930)
#define EKOHJBDBADJ_CTOR_OFFSET UNITYSDK_OFFSET(0x199A0A30)
#define EKOHJBDBADJ_DGHLNADMEJP_OFFSET UNITYSDK_OFFSET(0x199A1170)
#define EKOHJBDBADJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x199A0A40)
#define EKOHJBDBADJ_EHGDDIOILDD_OFFSET UNITYSDK_OFFSET(0x199A1BD0)
#define EKOHJBDBADJ_FDEFNMJBGML_OFFSET UNITYSDK_OFFSET(0x199A0AC0)
#define EKOHJBDBADJ_IOCEIPGJLED_OFFSET UNITYSDK_OFFSET(0x199A0F00)
#define EKOHJBDBADJ_LNAKIELNMCK_OFFSET UNITYSDK_OFFSET(0x199A0CF0)
#define EKOHJBDBADJ_OAJKCEMGELC_OFFSET UNITYSDK_OFFSET(0x199A18E0)
#define EKOHJBDBADJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x199A0B10)
#define EKOHJBDBADJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x199A0B80)
#define EKOHJBDBADJ_TICK_OFFSET UNITYSDK_OFFSET(0x199A0C00)

inline static constexpr unsigned int EKOHJBDBADJ_TypeDefinitionIndex = 60185;

	class EKOHJBDBADJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitPlayerAction* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KKIJDPKIIKL* EMCDEOIEFEA; // 0x28
		::System::Action* FBFAFHIINLI; // 0x30
		::ICKCNNLHLNF* EIFGEIFAGNM; // 0x38
		::InControl::PlayerAction* CAFNPBJBOEG; // 0x40
		::System::Single GLHFPIGMBLN; // 0x48
		::System::Boolean HCEDHPFKPAH; // 0x4C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerAction*))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OAJKCEMGELC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_OAJKCEMGELC_OFFSET))(this, a1);
		}

		::System::Void LNAKIELNMCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_LNAKIELNMCK_OFFSET))(this);
		}

		::System::Void IOCEIPGJLED(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_IOCEIPGJLED_OFFSET))(this, a1);
		}

		::System::Void ACIIMIGDBJJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_ACIIMIGDBJJ_OFFSET))(this, a1);
		}

		::System::Void DGHLNADMEJP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_DGHLNADMEJP_OFFSET))(this, a1);
		}

		::System::Void EHGDDIOILDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_EHGDDIOILDD_OFFSET))(this);
		}

		::System::Void BNHOEGMIPDL(::ECCKLFIHNOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECCKLFIHNOH*))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_BNHOEGMIPDL_OFFSET))(this, a1);
		}

		::System::Void FDEFNMJBGML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOHJBDBADJ_FDEFNMJBGML_OFFSET))(this);
		}

	};
