#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class APMIBDHBPBI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGFAJMPHOAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB89DE0)

inline static constexpr unsigned int KGFAJMPHOAK_TypeDefinitionIndex = 43759;

	class KGFAJMPHOAK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::APMIBDHBPBI*>* AILEOOELLHF; // 0x10
		::RPG::GameCore::FixPoint PGDKIGEIBAA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFAJMPHOAK_CTOR_OFFSET))(this);
		}

	};
