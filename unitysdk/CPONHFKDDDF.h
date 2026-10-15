#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"
class CPONHFKDDDF;
class FCOEMCEDLNL;

#define CPONHFKDDDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC97720)
#define CPONHFKDDDF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC97620)

inline static constexpr unsigned int CPONHFKDDDF_TypeDefinitionIndex = 13717;

	class CPONHFKDDDF : public ::System::Object
	{
	public:
		::RPG::GameCore::HeartDialEmoType BNFEAFPEOIE; // 0x10
		::System::UInt32 POAIHJCEKCF; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPONHFKDDDF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CPONHFKDDDF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPONHFKDDDF*))((::PBYTE)hIl2Cpp + CPONHFKDDDF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
