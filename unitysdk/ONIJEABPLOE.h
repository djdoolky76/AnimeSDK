#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBLEOHLLHNA.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
class DFHADNIAOAD;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define ONIJEABPLOE_CJHJAJBJOKO_OFFSET UNITYSDK_OFFSET(0xBF57690)
#define ONIJEABPLOE_CTOR_OFFSET UNITYSDK_OFFSET(0xBF575C0)
#define ONIJEABPLOE_OPNKJPKBMGH_OFFSET UNITYSDK_OFFSET(0xBF576A0)
#define ONIJEABPLOE_PAACMDEDAIN_OFFSET UNITYSDK_OFFSET(0xBF575D0)

inline static constexpr unsigned int ONIJEABPLOE_TypeDefinitionIndex = 75765;

	class ONIJEABPLOE : public ::GBLEOHLLHNA
	{
	public:
		::System::Void _ctor(::DFHADNIAOAD* a1, ::MFKLCJHKNBK* a2, ::KBLELMJDBEA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFHADNIAOAD*, ::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + ONIJEABPLOE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAACMDEDAIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJEABPLOE_PAACMDEDAIN_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTurnBasedStage CJHJAJBJOKO()
		{
			return ((::RPG::GameCore::ChimeraTurnBasedStage(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJEABPLOE_CJHJAJBJOKO_OFFSET))(this);
		}

		::System::Boolean OPNKJPKBMGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJEABPLOE_OPNKJPKBMGH_OFFSET))(this);
		}

	};
