#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define KHHBDDFHACN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB89EE0)

inline static constexpr unsigned int KHHBDDFHACN_TypeDefinitionIndex = 42245;

	class KHHBDDFHACN : public ::System::Object
	{
	public:
		::RPG::GameCore::Match3::GridTag BKFKAGDNGNN; // 0x10
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> LBMFPCIBMAC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBDDFHACN_CTOR_OFFSET))(this);
		}

	};
