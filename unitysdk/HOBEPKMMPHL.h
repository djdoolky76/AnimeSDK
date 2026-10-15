#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class ByCheckColonyMirrorTakenDiff; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOBEPKMMPHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DAF230)
#define HOBEPKMMPHL_EILJDOKJADD_OFFSET UNITYSDK_OFFSET(0x15DAF720)
#define HOBEPKMMPHL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DAF260)
#define HOBEPKMMPHL_IEDEPMNGMJP_OFFSET UNITYSDK_OFFSET(0x15DAF8C0)
#define HOBEPKMMPHL_LGOJDJBABID_OFFSET UNITYSDK_OFFSET(0x15DAF860)
#define HOBEPKMMPHL_LMNCCLONKAA_OFFSET UNITYSDK_OFFSET(0x15DAF950)

	class HOBEPKMMPHL
	{
	public:
		::RPG::GameCore::MazePuzzleOrigamiColonyRow* OPEGEBLMMII; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* IHPLGIBHEPE; // 0x30
		::System::UInt32 FMJAHJGAKNE; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + HOBEPKMMPHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBEPKMMPHL_EVALUATE_OFFSET))(this);
		}

		::System::Boolean EILJDOKJADD(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + HOBEPKMMPHL_EILJDOKJADD_OFFSET))(this, a1, a2);
		}

		::System::Boolean LGOJDJBABID(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + HOBEPKMMPHL_LGOJDJBABID_OFFSET))(this, a1);
		}

		::System::Boolean IEDEPMNGMJP(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + HOBEPKMMPHL_IEDEPMNGMJP_OFFSET))(this, a1, a2);
		}

		::System::Boolean LMNCCLONKAA(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + HOBEPKMMPHL_LMNCCLONKAA_OFFSET))(this, a1);
		}

	};
