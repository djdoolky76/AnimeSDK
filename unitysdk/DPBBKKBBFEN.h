#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapPosWithMaxTargetCount; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPBBKKBBFEN_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF8750)
#define DPBBKKBBFEN_LEMEKFPJJFL_OFFSET UNITYSDK_OFFSET(0x11FF8A40)
#define DPBBKKBBFEN_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x11FF8770)

inline static constexpr unsigned int DPBBKKBBFEN_TypeDefinitionIndex = 53815;

	class DPBBKKBBFEN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapPosWithMaxTargetCount* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + DPBBKKBBFEN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DPBBKKBBFEN_TRANSFORM_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::FixVec3 LEMEKFPJJFL(::RPG::GameCore::FixPoint a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixPoint, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DPBBKKBBFEN_LEMEKFPJJFL_OFFSET))(a1, a2, a3);
		}

	};
