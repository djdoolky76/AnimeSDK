#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class HueAndSaturationGroup;
class MonoHollowResultPageConfig;
class MonoHollowResultPageConfig_BlinkConfigInfo;
class NumberBlinkConfig;
namespace MoleMole { class UIHollowChessboardResult3DModelController_RandomNumberSwitcher; }

#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_DONUMBERBLINKASYNC_OFFSET UNITYSDK_OFFSET(0x1A400A00)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_GETBLINKMATRIXCONFIG_OFFSET UNITYSDK_OFFSET(0x1A4013B0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_NUMBERBLINK_OFFSET UNITYSDK_OFFSET(0x1A400AD0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_SHOWNUMBER_OFFSET UNITYSDK_OFFSET(0x1A400D80)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_SWITCHANDSHOWNUMBER_OFFSET UNITYSDK_OFFSET(0x1A400BD0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A400910)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboardResult3DModelController_NumberBlinker_TypeDefinitionIndex = 72983;

	class UIHollowChessboardResult3DModelController_NumberBlinker : public ::System::Object
	{
	public:
		::MoleMole::UIHollowChessboardResult3DModelController_RandomNumberSwitcher* _numberSwitcher; // 0x10
		::MonoHollowResultPageConfig* _config; // 0x18
		::System::Object* _chessPieceCtrlGrid; // 0x20
		::System::Int32 _configCol; // 0x28
		::System::Int32 _configRow; // 0x2C

		::System::Void _ctor(::MonoHollowResultPageConfig* config, ::System::Int32 configRow, ::System::Int32 configCol, ::System::Object* chessPieceCtrlGrid)
		{
			return ((::System::Void(*)(::PVOID, ::MonoHollowResultPageConfig*, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER__CTOR_OFFSET))(this, config, configRow, configCol, chessPieceCtrlGrid);
		}

		::Cysharp::Threading::Tasks::UniTask DoNumberBlinkAsync(::System::Int32 leftNumber, ::System::Int32 rightNumber, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_DONUMBERBLINKASYNC_OFFSET))(this, leftNumber, rightNumber, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask NumberBlink(::System::Int32 leftNumber, ::System::Int32 rightNumber, ::NumberBlinkConfig* configNumberBlinkConfig, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Int32, ::NumberBlinkConfig*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_NUMBERBLINK_OFFSET))(this, leftNumber, rightNumber, configNumberBlinkConfig, cancellationToken);
		}

		::System::Void SwitchAndShowNumber(::System::Int32& lastLeftCache, ::System::Int32& lastRightCache, ::System::Int32& lastChangeHueCount, ::System::Int32 changeNumberColorCount, ::HueAndSaturationGroup*& leftGroup, ::HueAndSaturationGroup*& rightGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32, ::HueAndSaturationGroup*&, ::HueAndSaturationGroup*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_SWITCHANDSHOWNUMBER_OFFSET))(this, lastLeftCache, lastRightCache, lastChangeHueCount, changeNumberColorCount, leftGroup, rightGroup);
		}

		::MonoHollowResultPageConfig_BlinkConfigInfo* GetBlinkMatrixConfig(::System::Int32 index)
		{
			return ((::MonoHollowResultPageConfig_BlinkConfigInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_GETBLINKMATRIXCONFIG_OFFSET))(this, index);
		}

		::System::Void ShowNumber(::System::Int32 leftNumber, ::System::Int32 rightNumber, ::HueAndSaturationGroup* leftInfo, ::HueAndSaturationGroup* rightInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::HueAndSaturationGroup*, ::HueAndSaturationGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_NUMBERBLINKER_SHOWNUMBER_OFFSET))(this, leftNumber, rightNumber, leftInfo, rightInfo);
		}
	};
}
