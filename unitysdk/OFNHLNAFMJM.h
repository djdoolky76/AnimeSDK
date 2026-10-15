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

#define OFNHLNAFMJM_CKOIHHKJPOB_OFFSET UNITYSDK_OFFSET(0xBE41CB0)
#define OFNHLNAFMJM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE41C30)
#define OFNHLNAFMJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE41E00)
#define OFNHLNAFMJM_GMNIKPOBEKO_OFFSET UNITYSDK_OFFSET(0xBE429A0)
#define OFNHLNAFMJM_HHILMFCAJDA_OFFSET UNITYSDK_OFFSET(0xBE41ED0)
#define OFNHLNAFMJM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBE42700)
#define OFNHLNAFMJM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBE42040)
#define OFNHLNAFMJM_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xBE42020)
#define OFNHLNAFMJM_NDBEPLFCBCA_OFFSET UNITYSDK_OFFSET(0xBE41D20)
#define OFNHLNAFMJM_OOKFNPPHHEK_OFFSET UNITYSDK_OFFSET(0xBE41F90)
#define OFNHLNAFMJM_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xBE424A0)

inline static constexpr unsigned int OFNHLNAFMJM_TypeDefinitionIndex = 54327;

	class OFNHLNAFMJM : public ::System::Object
	{
	public:
		::RPG::GameCore::AIDecisionConfig* OFKGLJOAMLD; // 0x10
		::JPEPPDMLPLG* DKJDBCFAHFI; // 0x18
		::GELIALJDFBL* LGLDJFCHPML; // 0x20
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
