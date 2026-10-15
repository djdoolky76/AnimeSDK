#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSummoner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBKJPFGFGJC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CFB9E0)
#define EBKJPFGFGJC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x12CFBA00)

inline static constexpr unsigned int EBKJPFGFGJC_TypeDefinitionIndex = 59246;

	class EBKJPFGFGJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapSummoner* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + EBKJPFGFGJC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EBKJPFGFGJC_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
