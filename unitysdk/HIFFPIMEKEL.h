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

#define HIFFPIMEKEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1902ED50)
#define HIFFPIMEKEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1902EF20)
#define HIFFPIMEKEL_EBBOAEIDCGM_OFFSET UNITYSDK_OFFSET(0x1902F3C0)
#define HIFFPIMEKEL_GMNIKPOBEKO_OFFSET UNITYSDK_OFFSET(0x1902FEC0)
#define HIFFPIMEKEL_HHILMFCAJDA_OFFSET UNITYSDK_OFFSET(0x1902F1C0)
#define HIFFPIMEKEL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1902FD80)
#define HIFFPIMEKEL_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1902FB10)
#define HIFFPIMEKEL_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1902FA90)
#define HIFFPIMEKEL_OOKFNPPHHEK_OFFSET UNITYSDK_OFFSET(0x1902F720)
#define HIFFPIMEKEL_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x1902FC40)

inline static constexpr unsigned int HIFFPIMEKEL_TypeDefinitionIndex = 55552;

	class HIFFPIMEKEL : public ::System::Object
	{
	public:
		::EJFAHBINDIN* CBBDAGKBOON; // 0x10
		::EJFAHBINDIN* IDGEPAJPFIN; // 0x18
		::EJFAHBINDIN* KODLMNMPGNN; // 0x20
		::JPEPPDMLPLG* DKJDBCFAHFI; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::Il2CppArray<::EJFAHBINDIN*>* LKEHFPKALJD; // 0x38
		::RPG::GameCore::AISwitchDecisionGroupConfig* OFKGLJOAMLD; // 0x40
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
