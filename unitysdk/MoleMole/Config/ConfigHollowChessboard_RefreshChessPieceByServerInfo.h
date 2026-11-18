#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"

class GDCCBKJDPGE;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0xFAC6FF0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO_RUN_OFFSET UNITYSDK_OFFSET(0xFAC7000)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC7170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_RefreshChessPieceByServerInfo_TypeDefinitionIndex = 46344;

	class ConfigHollowChessboard_RefreshChessPieceByServerInfo : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO__CTOR_OFFSET))(this);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Void Run(::PNJDGHBEMLK* chessPiece, ::System::Action_1<::System::Object*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::GDCCBKJDPGE* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Action_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::GDCCBKJDPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}
	};
}
