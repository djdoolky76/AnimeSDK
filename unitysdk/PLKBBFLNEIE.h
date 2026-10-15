#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLKBBFLNEIE_CTOR_OFFSET UNITYSDK_OFFSET(0xC308A60)

inline static constexpr unsigned int PLKBBFLNEIE_TypeDefinitionIndex = 54233;

	class PLKBBFLNEIE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CGNJAJMEKOI; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NKCKAJPAJCJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKBBFLNEIE_CTOR_OFFSET))(this);
		}

	};
