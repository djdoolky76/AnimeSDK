#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GHFDKAAGDJJ;

#define GHFDKAAGDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE46590)
#define GHFDKAAGDJJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE46440)

inline static constexpr unsigned int GHFDKAAGDJJ_TypeDefinitionIndex = 13885;

	class GHFDKAAGDJJ : public ::System::Object
	{
	public:
		::RPG::GameCore::ItemSubType FIPANNNNKLH; // 0x10
		::RPG::GameCore::ItemRarity LBOADDIBILJ; // 0x14
		::System::UInt32 NNFLNBDIBOM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFDKAAGDJJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GHFDKAAGDJJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHFDKAAGDJJ*))((::PBYTE)hIl2Cpp + GHFDKAAGDJJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
