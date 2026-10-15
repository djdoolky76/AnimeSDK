#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameFetchProxyByID; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOPNKAFHBAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15909BD0)
#define FOPNKAFHBAC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15909C40)

inline static constexpr unsigned int FOPNKAFHBAC_TypeDefinitionIndex = 59108;

	class FOPNKAFHBAC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::LittleGameFetchProxyByID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + FOPNKAFHBAC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FOPNKAFHBAC_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
