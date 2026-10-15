#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define KHHBDDFHACN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB81E0)

inline static constexpr unsigned int KHHBDDFHACN_TypeDefinitionIndex = 42245;

	class KHHBDDFHACN : public ::System::Object
	{
	public:
		::System::ValueTuple LBMFPCIBMAC; // 0x10
		::RPG::GameCore::Match3::GridTag BKFKAGDNGNN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBDDFHACN_CTOR_OFFSET))(this);
		}

	};
