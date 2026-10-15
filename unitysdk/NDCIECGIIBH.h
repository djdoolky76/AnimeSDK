#pragma once
#include "unitysdk/unitysdk.h"
class CEGJADNLKED;
namespace RPG::GameCore { class ST_ByHasBornSmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define NDCIECGIIBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB20220)
#define NDCIECGIIBH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB202E0)

inline static constexpr unsigned int NDCIECGIIBH_TypeDefinitionIndex = 52195;

	class NDCIECGIIBH
	{
	public:
		::CEGJADNLKED* DFMOOFNKPOG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + NDCIECGIIBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCIECGIIBH_EVALUATE_OFFSET))(this);
		}

	};
