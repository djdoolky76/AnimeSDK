#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetReverse; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EAHKEIGLMAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1267A340)
#define EAHKEIGLMAA_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1267A360)

inline static constexpr unsigned int EAHKEIGLMAA_TypeDefinitionIndex = 59206;

	class EAHKEIGLMAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetReverse* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + EAHKEIGLMAA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EAHKEIGLMAA_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
