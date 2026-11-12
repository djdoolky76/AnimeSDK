#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
class EJFAHBINDIN;
class GELIALJDFBL;
class JPEPPDMLPLG;
namespace RPG::GameCore { class AIDecisionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define OFNHLNAFMJM_CKOIHHKJPOB_OFFSET UNITYSDK_OFFSET(0xC702610)
#define OFNHLNAFMJM_CTOR_OFFSET UNITYSDK_OFFSET(0xC702590)
#define OFNHLNAFMJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC702760)
#define OFNHLNAFMJM_GMNIKPOBEKO_OFFSET UNITYSDK_OFFSET(0xC7030F0)
#define OFNHLNAFMJM_HHILMFCAJDA_OFFSET UNITYSDK_OFFSET(0xC702830)
#define OFNHLNAFMJM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC702ED0)
#define OFNHLNAFMJM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC7029A0)
#define OFNHLNAFMJM_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xC702980)
#define OFNHLNAFMJM_NDBEPLFCBCA_OFFSET UNITYSDK_OFFSET(0xC702680)
#define OFNHLNAFMJM_OOKFNPPHHEK_OFFSET UNITYSDK_OFFSET(0xC7028F0)
#define OFNHLNAFMJM_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xC702CF0)

inline static constexpr unsigned int OFNHLNAFMJM_TypeDefinitionIndex = 55491;

	class OFNHLNAFMJM : public ::System::Object
	{
	public:
		::RPG::GameCore::AIDecisionConfig* OFKGLJOAMLD; // 0x10
		::GELIALJDFBL* LGLDJFCHPML; // 0x18
		::JPEPPDMLPLG* DKJDBCFAHFI; // 0x20
		::RPG::GameCore::FixPoint PEADODAGAAE; // 0x28
		::System::Void _ctor(::RPG::GameCore::AIDecisionConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint HHILMFCAJDA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_HHILMFCAJDA_OFFSET))(this);
		}

		::EJFAHBINDIN* OOKFNPPHHEK(::System::String* a1)
		{
			return ((::EJFAHBINDIN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_OOKFNPPHHEK_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_OPCKNBHNBOA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void CKOIHHKJPOB(::RPG::GameCore::AIDecisionConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_CKOIHHKJPOB_OFFSET))(this, a1, a2);
		}

		::System::Void NDBEPLFCBCA(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_NDBEPLFCBCA_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_MLMGEFIOION_OFFSET))(this);
		}

		::RPG::GameCore::TaskState GMNIKPOBEKO()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNHLNAFMJM_GMNIKPOBEKO_OFFSET))(this);
		}

	};
