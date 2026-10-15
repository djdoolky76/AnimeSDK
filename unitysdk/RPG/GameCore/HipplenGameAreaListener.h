#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameAreaListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_HIPPLENGAMEAREALISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76B300)
#define RPG_GAMECORE_HIPPLENGAMEAREALISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76B310)
#define RPG_GAMECORE_HIPPLENGAMEAREALISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76B2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameAreaListener_TypeDefinitionIndex = 21301;

	class HipplenGameAreaListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoad; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnload; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEAREALISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameAreaListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameAreaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEAREALISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameAreaListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameAreaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEAREALISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
