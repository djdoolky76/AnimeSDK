#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"

class GDCCBKJDPGE;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x12773EA0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x12773E90)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_RUN_OFFSET UNITYSDK_OFFSET(0x12773D10)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12773F40)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET UNITYSDK_OFFSET(0x12773FA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_Rotate_TypeDefinitionIndex = 46359;

	class ConfigHollowChessboard_Rotate : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::UnityEngine::AnimationCurve* xRotationCurve; // 0x20
		::UnityEngine::AnimationCurve* zRotationCurve; // 0x28
		::UnityEngine::AnimationCurve* yRotationCurve; // 0x30
		::System::Single time; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PNJDGHBEMLK* chessPiece, ::System::Action_1<::System::Object*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::GDCCBKJDPGE* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Action_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::GDCCBKJDPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* __base_GetSupportedDurationType()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_ROTATE___BASE_GETSUPPORTEDDURATIONTYPE_OFFSET))(this);
		}
	};
}
