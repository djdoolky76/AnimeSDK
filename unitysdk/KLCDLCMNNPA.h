#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDamageChunkTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLCDLCMNNPA_CTOR_OFFSET UNITYSDK_OFFSET(0xB4DA150)
#define KLCDLCMNNPA_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB4DA170)

inline static constexpr unsigned int KLCDLCMNNPA_TypeDefinitionIndex = 59139;

	class KLCDLCMNNPA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapDamageChunkTargetList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + KLCDLCMNNPA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KLCDLCMNNPA_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
