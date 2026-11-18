#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_PieceChangeStructType.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"

class GDCCBKJDPGE;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x11E93CE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x11E93CD0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_RUN_OFFSET UNITYSDK_OFFSET(0x11E93B50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK__CTOR_OFFSET UNITYSDK_OFFSET(0x11E93D80)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x11E93D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_RiseOrSink_TypeDefinitionIndex = 46366;

	class ConfigHollowChessboard_RiseOrSink : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::MoleMole::PieceModelAnimType animType; // 0x20
		::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructType structConfigType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PNJDGHBEMLK* chessPiece, ::System::Action_1<::System::Object*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::GDCCBKJDPGE* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Action_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::GDCCBKJDPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_RISEORSINK___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}
