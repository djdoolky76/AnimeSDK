#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAPDJIPNIPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD7EF0)

inline static constexpr unsigned int PAPDJIPNIPJ_TypeDefinitionIndex = 52784;

	class PAPDJIPNIPJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GKHDCODGAMF; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPDJIPNIPJ_CTOR_OFFSET))(this);
		}

	};
