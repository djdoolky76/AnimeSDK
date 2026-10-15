#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KKDDAKCGPLO;

#define KKDDAKCGPLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D06D1E0)
#define KKDDAKCGPLO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D06D1F0)
#define KKDDAKCGPLO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D06D1B0)

inline static constexpr unsigned int KKDDAKCGPLO_TypeDefinitionIndex = 21152;

	class KKDDAKCGPLO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 DOBKKDIECDO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDDAKCGPLO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KKDDAKCGPLO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KKDDAKCGPLO*))((::PBYTE)hIl2Cpp + KKDDAKCGPLO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KKDDAKCGPLO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KKDDAKCGPLO*))((::PBYTE)hIl2Cpp + KKDDAKCGPLO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
