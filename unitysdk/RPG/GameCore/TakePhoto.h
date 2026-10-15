#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TakePhoto; }

#define RPG_GAMECORE_TAKEPHOTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB269C0)
#define RPG_GAMECORE_TAKEPHOTO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB269D0)
#define RPG_GAMECORE_TAKEPHOTO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB26900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TakePhoto_TypeDefinitionIndex = 22174;

	class TakePhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEPHOTO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TakePhoto* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TakePhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEPHOTO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TakePhoto* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TakePhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEPHOTO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
