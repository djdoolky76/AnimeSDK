#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJGGGLCOJIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C903230)

	class KJGGGLCOJIA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusType>* GFKMCNCDMIE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGGGLCOJIA_CTOR_OFFSET))(this);
		}

	};
