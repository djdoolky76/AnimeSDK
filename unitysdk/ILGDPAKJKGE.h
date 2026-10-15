#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class ILGDPAKJKGE;

#define ILGDPAKJKGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF20080)
#define ILGDPAKJKGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF1FF80)

inline static constexpr unsigned int ILGDPAKJKGE_TypeDefinitionIndex = 12605;

	class ILGDPAKJKGE : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleyConditionType GMPGDEINODK; // 0x10
		::System::UInt32 NNACKOBKFGE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDPAKJKGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ILGDPAKJKGE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ILGDPAKJKGE*))((::PBYTE)hIl2Cpp + ILGDPAKJKGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
