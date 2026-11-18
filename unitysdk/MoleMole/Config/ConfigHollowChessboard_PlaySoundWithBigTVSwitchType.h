#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"

class GDCCBKJDPGE;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUNDWITHBIGTVSWITCHTYPE_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x1A0300E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUNDWITHBIGTVSWITCHTYPE_RUN_OFFSET UNITYSDK_OFFSET(0x1A02FF40)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUNDWITHBIGTVSWITCHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0300F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PlaySoundWithBigTVSwitchType_TypeDefinitionIndex = 46309;

	class ConfigHollowChessboard_PlaySoundWithBigTVSwitchType : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* KeyMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUNDWITHBIGTVSWITCHTYPE__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PNJDGHBEMLK* chessPiece, ::System::Action_1<::System::Object*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::GDCCBKJDPGE* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Action_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::GDCCBKJDPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUNDWITHBIGTVSWITCHTYPE_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PLAYSOUNDWITHBIGTVSWITCHTYPE_GET_TOTALDURATION_OFFSET))(this);
		}
	};
}
