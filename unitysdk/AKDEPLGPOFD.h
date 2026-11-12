#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AKDEPLGPOFD;
class FCOEMCEDLNL;

#define AKDEPLGPOFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7CEE0)
#define AKDEPLGPOFD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE7CEF0)
#define AKDEPLGPOFD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE7CE20)

inline static constexpr unsigned int AKDEPLGPOFD_TypeDefinitionIndex = 21906;

	class AKDEPLGPOFD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEPLGPOFD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AKDEPLGPOFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKDEPLGPOFD*))((::PBYTE)hIl2Cpp + AKDEPLGPOFD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AKDEPLGPOFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKDEPLGPOFD*))((::PBYTE)hIl2Cpp + AKDEPLGPOFD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
