#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class ByCheckColonyMirrorTakenDiff; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOBEPKMMPHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA2980)
#define HOBEPKMMPHL_EILJDOKJADD_OFFSET UNITYSDK_OFFSET(0x15DA2E70)
#define HOBEPKMMPHL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DA29B0)
#define HOBEPKMMPHL_IEDEPMNGMJP_OFFSET UNITYSDK_OFFSET(0x15DA3010)
#define HOBEPKMMPHL_LGOJDJBABID_OFFSET UNITYSDK_OFFSET(0x15DA2FB0)
#define HOBEPKMMPHL_LMNCCLONKAA_OFFSET UNITYSDK_OFFSET(0x15DA30A0)

inline static constexpr unsigned int HOBEPKMMPHL_TypeDefinitionIndex = 53128;

	class HOBEPKMMPHL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* IHPLGIBHEPE; // 0x28
		::RPG::GameCore::MazePuzzleOrigamiColonyRow* OPEGEBLMMII; // 0x30
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
