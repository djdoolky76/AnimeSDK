#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindLoopControlStateChangeListener; }
namespace System { class Object; }

#define BBGILAFGLGL_CTOR_OFFSET UNITYSDK_OFFSET(0x16D0E3B0)
#define BBGILAFGLGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D0E7E0)
#define BBGILAFGLGL_FEKHNFNGLNO_OFFSET UNITYSDK_OFFSET(0x16D0E9B0)
#define BBGILAFGLGL_FKEHGKBJHCC_OFFSET UNITYSDK_OFFSET(0x16D0EB90)
#define BBGILAFGLGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D0E440)
#define BBGILAFGLGL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16D0E640)
#define BBGILAFGLGL_TICK_OFFSET UNITYSDK_OFFSET(0x16D0E780)

inline static constexpr unsigned int BBGILAFGLGL_TypeDefinitionIndex = 54563;

	class BBGILAFGLGL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::EntityTimeRewindComponent* GLBECKBELNK; // 0x18
		::KFELGAIGHAP* PKIGFJMEKNJ; // 0x20
		::RPG::GameCore::TimeRewindLoopControlStateChangeListener* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::GameEntity* LOBKOPJPFIB; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::UInt32 PIBNIOEBKJI; // 0x40
		::System::Int32 CFMADNLMFGL; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener*))((::PBYTE)hIl2Cpp + BBGILAFGLGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGILAFGLGL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGILAFGLGL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBGILAFGLGL_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGILAFGLGL_DISPOSE_OFFSET))(this);
		}

		::System::Void FEKHNFNGLNO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BBGILAFGLGL_FEKHNFNGLNO_OFFSET))(this, a1);
		}

		::System::Void FKEHGKBJHCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBGILAFGLGL_FKEHGKBJHCC_OFFSET))(this, a1);
		}

	};
