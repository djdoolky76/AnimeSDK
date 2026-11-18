#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

class GDCCBKJDPGE;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x190A2770)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x190A2760)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_RUN_OFFSET UNITYSDK_OFFSET(0x190A25D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH__CTOR_OFFSET UNITYSDK_OFFSET(0x190A27C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x190A28E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_Flash_TypeDefinitionIndex = 46333;

	class ConfigHollowChessboard_Flash : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::UnityEngine::AnimationCurve* flashCurve; // 0x20
		::System::Single time; // 0x28
		::UnityEngine::Vector2 startAndEnd; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PNJDGHBEMLK* chessPiece, ::System::Action_1<::System::Object*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::GDCCBKJDPGE* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Action_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::GDCCBKJDPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FLASH___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}
