#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHCOMKMKFAM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBB760)

	class HHCOMKMKFAM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnState>* OFAKIFNIDPO; // 0x10
		::System::Boolean GEOPPFCKACN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCOMKMKFAM_CTOR_OFFSET))(this);
		}

	};
