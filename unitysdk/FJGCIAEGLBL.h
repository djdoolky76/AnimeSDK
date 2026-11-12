#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OnHitAnimType.h"
#include "unitysdk/System/Object.h"

#define FJGCIAEGLBL_CTOR_OFFSET UNITYSDK_OFFSET(0x166EA430)

inline static constexpr unsigned int FJGCIAEGLBL_TypeDefinitionIndex = 57136;

	class FJGCIAEGLBL : public ::System::Object
	{
	public:
		::RPG::GameCore::OnHitAnimType GMPGDEINODK; // 0x10
		::System::Int32 JDILJDFJBMM; // 0x14
		::System::Single AHHLEOHHJLB; // 0x18
		::System::Int32 CJCCLNEDGKB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGCIAEGLBL_CTOR_OFFSET))(this);
		}

	};
