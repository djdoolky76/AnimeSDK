#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NOCGHCNMOKB;

#define NOCGHCNMOKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2129C0)
#define NOCGHCNMOKB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D212870)

inline static constexpr unsigned int NOCGHCNMOKB_TypeDefinitionIndex = 14637;

	class NOCGHCNMOKB : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType FODBMMCKAEN; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCGHCNMOKB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NOCGHCNMOKB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOCGHCNMOKB*))((::PBYTE)hIl2Cpp + NOCGHCNMOKB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
