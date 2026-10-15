#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EJFAHBINDIN;
class JPEPPDMLPLG;
namespace RPG::GameCore { class AISwitchDecisionGroupConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define HIFFPIMEKEL_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD6610)
#define HIFFPIMEKEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CD67E0)
#define HIFFPIMEKEL_EBBOAEIDCGM_OFFSET UNITYSDK_OFFSET(0x15CD6C80)
#define HIFFPIMEKEL_GMNIKPOBEKO_OFFSET UNITYSDK_OFFSET(0x15CD7780)
#define HIFFPIMEKEL_HHILMFCAJDA_OFFSET UNITYSDK_OFFSET(0x15CD6A80)
#define HIFFPIMEKEL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15CD7640)
#define HIFFPIMEKEL_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15CD73D0)
#define HIFFPIMEKEL_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15CD7350)
#define HIFFPIMEKEL_OOKFNPPHHEK_OFFSET UNITYSDK_OFFSET(0x15CD6FE0)
#define HIFFPIMEKEL_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x15CD7500)

inline static constexpr unsigned int HIFFPIMEKEL_TypeDefinitionIndex = 54388;

	class HIFFPIMEKEL : public ::System::Object
	{
	public:
		::EJFAHBINDIN* CBBDAGKBOON; // 0x10
		::RPG::GameCore::AISwitchDecisionGroupConfig* OFKGLJOAMLD; // 0x18
		::EJFAHBINDIN* IDGEPAJPFIN; // 0x20
		::EJFAHBINDIN* KODLMNMPGNN; // 0x28
		::Il2CppArray<::EJFAHBINDIN*>* LKEHFPKALJD; // 0x30
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
		::JPEPPDMLPLG* DKJDBCFAHFI; // 0x40
		::System::Void _ctor(::RPG::GameCore::AISwitchDecisionGroupConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AISwitchDecisionGroupConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint HHILMFCAJDA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_HHILMFCAJDA_OFFSET))(this);
		}

		::EJFAHBINDIN* OOKFNPPHHEK(::System::String* a1)
		{
			return ((::EJFAHBINDIN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_OOKFNPPHHEK_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_OPCKNBHNBOA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void EBBOAEIDCGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_EBBOAEIDCGM_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_MLMGEFIOION_OFFSET))(this);
		}

		::RPG::GameCore::TaskState GMNIKPOBEKO()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFPIMEKEL_GMNIKPOBEKO_OFFSET))(this);
		}

	};
