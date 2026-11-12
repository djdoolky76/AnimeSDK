#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GHPLBJPHBED;

#define GHPLBJPHBED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E027860)
#define GHPLBJPHBED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E027870)
#define GHPLBJPHBED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E0277A0)

inline static constexpr unsigned int GHPLBJPHBED_TypeDefinitionIndex = 10203;

	class GHPLBJPHBED : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPLBJPHBED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GHPLBJPHBED* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHPLBJPHBED*))((::PBYTE)hIl2Cpp + GHPLBJPHBED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GHPLBJPHBED* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHPLBJPHBED*))((::PBYTE)hIl2Cpp + GHPLBJPHBED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
