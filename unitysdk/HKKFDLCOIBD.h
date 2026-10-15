#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKKFDLCOIBD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D4AD10)

	class HKKFDLCOIBD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GEGKCAOLMOH; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKFDLCOIBD_CTOR_OFFSET))(this);
		}

	};
