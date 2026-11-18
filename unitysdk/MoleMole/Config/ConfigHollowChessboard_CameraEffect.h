#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"

class GDCCBKJDPGE;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B9202A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x1B920290)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x1B920190)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9202F0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B920300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_CameraEffect_TypeDefinitionIndex = 46356;

	class ConfigHollowChessboard_CameraEffect : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::String* prefab; // 0x20
		::System::String* fadeOutAnimName; // 0x28
		::System::String* fadeInAnimName; // 0x30
		::System::Single duration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PNJDGHBEMLK* chessPiece, ::System::Action_1<::System::Object*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::GDCCBKJDPGE* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Action_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::GDCCBKJDPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}
