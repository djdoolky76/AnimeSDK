#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JHCAHJLOHAG;

#define JHCAHJLOHAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D02D290)
#define JHCAHJLOHAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D02D190)

	class JHCAHJLOHAG : public ::System::Object
	{
	public:
		::System::UInt32 EAFFHGKLALP; // 0x10
		::RPG::GameCore::AvatarPropertyType FODBMMCKAEN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCAHJLOHAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JHCAHJLOHAG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JHCAHJLOHAG*))((::PBYTE)hIl2Cpp + JHCAHJLOHAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
