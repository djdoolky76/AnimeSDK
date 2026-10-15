#pragma once
#include "unitysdk/unitysdk.h"
class BMICACAAOGP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapEmptyGridNearby; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNAAFFOBOJE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3E800)
#define CNAAFFOBOJE_EBIDFEGMEAO_OFFSET UNITYSDK_OFFSET(0xDA3F2A0)
#define CNAAFFOBOJE_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xDA3E820)

inline static constexpr unsigned int CNAAFFOBOJE_TypeDefinitionIndex = 53811;

	class CNAAFFOBOJE
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* DDKPMIIJMPB; // 0x18
		::System::Void _ctor(::RPG::GameCore::RtTargetMapEmptyGridNearby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + CNAAFFOBOJE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CNAAFFOBOJE_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Boolean EBIDFEGMEAO(::BMICACAAOGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMICACAAOGP*))((::PBYTE)hIl2Cpp + CNAAFFOBOJE_EBIDFEGMEAO_OFFSET))(this, a1);
		}

	};
