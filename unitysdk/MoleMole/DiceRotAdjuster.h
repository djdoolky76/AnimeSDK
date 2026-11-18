#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DiceInfo.h"
#include "unitysdk/MoleMole/TriDiceLuckPerformType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DICEROTADJUSTER_GAAIJEHMMLJ_OFFSET UNITYSDK_OFFSET(0x180CB870)
#define MOLEMOLE_DICEROTADJUSTER_JCPINPOIPKM_OFFSET UNITYSDK_OFFSET(0x180CBB50)
#define MOLEMOLE_DICEROTADJUSTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x180CB590)
#define MOLEMOLE_DICEROTADJUSTER_SETCTRLDICERESULT_OFFSET UNITYSDK_OFFSET(0x180CB7C0)
#define MOLEMOLE_DICEROTADJUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x180CC100)

namespace MoleMole
{
	inline static constexpr unsigned int DiceRotAdjuster_TypeDefinitionIndex = 85455;

	class DiceRotAdjuster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::DiceInfo>* Dices; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DiceInfo>* JILFKJEGHIK; // 0x20
		::MoleMole::Config::ConfigUITriDiceOracle* DPNPDJFOAJP; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER_ONENABLE_OFFSET))(this);
		}

		::System::Void SetCtrlDiceResult(::MoleMole::TriDiceLuckPerformType OFKFPDCEGCE, ::System::Collections::Generic::List_1<::System::Int32>* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TriDiceLuckPerformType, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER_SETCTRLDICERESULT_OFFSET))(this, OFKFPDCEGCE, IGAAKDOIPNN);
		}

		::System::Void GAAIJEHMMLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER_GAAIJEHMMLJ_OFFSET))(this);
		}

		::System::Void JCPINPOIPKM(::System::String* BKOLCDPOJAL, ::System::Collections::Generic::List_1<::System::Int32>* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER_JCPINPOIPKM_OFFSET))(this, BKOLCDPOJAL, IGAAKDOIPNN);
		}
	};
}
