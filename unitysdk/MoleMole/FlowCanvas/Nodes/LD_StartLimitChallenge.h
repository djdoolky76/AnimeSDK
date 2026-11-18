#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class DKEHFMFJLDE;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class ChallengeSubTypeItem; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1041F2A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFORCESUCCESSFINISH_OFFSET UNITYSDK_OFFSET(0x1041F370)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1041F440)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONRESUME_OFFSET UNITYSDK_OFFSET(0x1041F4C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSETSUBITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x1041F540)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1041EC80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1041E7D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1041F6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1041F7D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_1_OFFSET UNITYSDK_OFFSET(0x1041F7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_2_OFFSET UNITYSDK_OFFSET(0x1041F7F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_3_OFFSET UNITYSDK_OFFSET(0x1041F8A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartLimitChallenge_TypeDefinitionIndex = 50737;

	class LD_StartLimitChallenge : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* FinishOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* ReadFromServer; // 0xB0
		::MoleMole::Battle::ChallengeSubTypeItem* _challengeSubTypeItem; // 0xB8
		::FlowCanvas::FlowOutput* StartOutput; // 0xC0
		::FlowCanvas::FlowInput* Resume; // 0xC8
		::FlowCanvas::FlowOutput* UpdateOutput; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsUseItem; // 0xD8
		::MoleMole::Battle::ChallengeSubTypeItem* _lastSuccessChallengeSubTypeItem; // 0xE0
		::FlowCanvas::FlowOutput* SubSuccessOutput; // 0xE8
		::FlowCanvas::FlowInput* DoFinish; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Int32>* ChallengeID; // 0xF8
		::DKEHFMFJLDE* challengeItem; // 0x100
		::FlowCanvas::ValueInput_1<::System::Boolean>* DisableTaimeScale; // 0x108
		::FlowCanvas::ValueOutput_1<::System::Single>* TimeLeft; // 0x110
		::FlowCanvas::FlowOutput* Out; // 0x118
		::FlowCanvas::ValueOutput_1<::System::Single>* NormalizedTime; // 0x120
		::FlowCanvas::FlowOutput* FailOutput; // 0x128
		::FlowCanvas::ValueInput_1<::System::Single>* TotalTime; // 0x130
		::FlowCanvas::FlowInput* DoSetSubItemProgress; // 0x138
		::FlowCanvas::FlowInput* Pause; // 0x140
		::System::Collections::Generic::HashSet_1<::MoleMole::Battle::ChallengeSubTypeItem*>* _sucessSubTypeItems; // 0x148
		::FlowCanvas::ValueInput_1<::System::Int32>* inputSubItemOffsetProgress; // 0x150
		::FlowCanvas::ValueInput_1<::System::Boolean>* SubSuccessTriggerSelfSuccess; // 0x158
		::FlowCanvas::FlowInput* Start; // 0x160
		::FlowCanvas::FlowInput* ForceSuccessFinish; // 0x168
		::System::Int32 _challengeIDVar; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnStart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSTART_OFFSET))(this, f);
		}

		::System::Void OnFinish(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFINISH_OFFSET))(this, f);
		}

		::System::Void OnForceSuccessFinish(::FlowCanvas::Flow ff)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONFORCESUCCESSFINISH_OFFSET))(this, ff);
		}

		::System::Void OnPause(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONPAUSE_OFFSET))(this, f);
		}

		::System::Void OnResume(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONRESUME_OFFSET))(this, f);
		}

		::System::Void OnSetSubItemProgress(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE_ONSETSUBITEMPROGRESS_OFFSET))(this, f);
		}

		::MoleMole::Battle::ChallengeSubTypeItem* _RegisterPorts_b__25_0()
		{
			return ((::MoleMole::Battle::ChallengeSubTypeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_0_OFFSET))(this);
		}

		::MoleMole::Battle::ChallengeSubTypeItem* _RegisterPorts_b__25_1()
		{
			return ((::MoleMole::Battle::ChallengeSubTypeItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__25_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_2_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__25_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTLIMITCHALLENGE__REGISTERPORTS_B__25_3_OFFSET))(this);
		}
	};
}
