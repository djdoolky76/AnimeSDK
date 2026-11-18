#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG_GETANIMLISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x19B188E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B18960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructConfig_TypeDefinitionIndex = 46313;

	class ConfigHollowChessboard_PieceChangeStructConfig : public ::System::Object
	{
	public:
		::System::String* RefreshTextureSheetConfigKey; // 0x10
		::MoleMole::ConfigAnimationCurveGroup* TVAnim; // 0x18
		::UnityEngine::AnimationCurve* FlushWriteAlphaCurve; // 0x20
		::System::Boolean isWrite; // 0x28
		::System::Boolean useOldConfig; // 0x29
		::System::Boolean hidePieceInPath; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Single MaxFlushWriteValue; // 0x2C
		::System::Single refreshViewDelayTime; // 0x30
		::System::Single FlushWriteDuration; // 0x34
		::System::Single protectTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* GetAnimListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG_GETANIMLISTVALUEDROPDOWN_OFFSET))();
		}
	};
}
