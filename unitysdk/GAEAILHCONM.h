#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComicDessertDeviceAbilityKey.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GAEAILHCONM;

#define GAEAILHCONM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA422D0)
#define GAEAILHCONM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA42190)

inline static constexpr unsigned int GAEAILHCONM_TypeDefinitionIndex = 11219;

	class GAEAILHCONM : public ::System::Object
	{
	public:
		::System::Single MNDFOPKBHKP; // 0x10
		::RPG::GameCore::ComicDessertDeviceAbilityKey BFLIFKBEOPJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEAILHCONM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GAEAILHCONM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GAEAILHCONM*))((::PBYTE)hIl2Cpp + GAEAILHCONM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
