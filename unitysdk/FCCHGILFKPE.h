#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayCaseData; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayRawExportCheck; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayResultData; }
namespace System { class Action; }
namespace System { class String; }

#define FCCHGILFKPE_EDLFNIBCCAI_OFFSET UNITYSDK_OFFSET(0x156B10B0)
#define FCCHGILFKPE_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x156B09F0)
#define FCCHGILFKPE_GET_ACTIVECASE_OFFSET UNITYSDK_OFFSET(0x156B0950)
#define FCCHGILFKPE_GET_ACTIVERESULT_OFFSET UNITYSDK_OFFSET(0x156B0970)
#define FCCHGILFKPE_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x156B0990)
#define FCCHGILFKPE_PBNODIGLHFB_OFFSET UNITYSDK_OFFSET(0x156B0D10)
#define FCCHGILFKPE_PEKHJMGAMKM_OFFSET UNITYSDK_OFFSET(0x156B0DE0)
#define FCCHGILFKPE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x156B0CC0)
#define FCCHGILFKPE_SET_ACTIVECASE_OFFSET UNITYSDK_OFFSET(0x156B0960)
#define FCCHGILFKPE_SET_ACTIVERESULT_OFFSET UNITYSDK_OFFSET(0x156B0980)

	class FCCHGILFKPE : public ::System::Object
	{
	public:
		static ::RPG::Client::OpenWorld::PVSRuntimeReplayResultData** StaticGet__ActiveResult_k__BackingField()
		{
			return (::RPG::Client::OpenWorld::PVSRuntimeReplayResultData**)UnitySDK::FromName("", "FCCHGILFKPE")->GetStaticField(0x5EAB0);
		}

		static ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData** StaticGet__ActiveCase_k__BackingField()
		{
			return (::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData**)UnitySDK::FromName("", "FCCHGILFKPE")->GetStaticField(0x5EAB8);
		}

		static ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* get_ActiveCase()
		{
			return ((::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*(*)())((::PBYTE)hIl2Cpp + FCCHGILFKPE_GET_ACTIVECASE_OFFSET))();
		}

		static ::System::Void set_ActiveCase(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*))((::PBYTE)hIl2Cpp + FCCHGILFKPE_SET_ACTIVECASE_OFFSET))(a1);
		}

		static ::RPG::Client::OpenWorld::PVSRuntimeReplayResultData* get_ActiveResult()
		{
			return ((::RPG::Client::OpenWorld::PVSRuntimeReplayResultData*(*)())((::PBYTE)hIl2Cpp + FCCHGILFKPE_GET_ACTIVERESULT_OFFSET))();
		}

		static ::System::Void set_ActiveResult(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData*))((::PBYTE)hIl2Cpp + FCCHGILFKPE_SET_ACTIVERESULT_OFFSET))(a1);
		}

		static ::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCCHGILFKPE_JKEONEEPIHH_OFFSET))();
		}

		static ::System::Void FHLALJENMHB(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*))((::PBYTE)hIl2Cpp + FCCHGILFKPE_FHLALJENMHB_OFFSET))(a1);
		}

		static ::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCHGILFKPE_PJPFIHFAHGO_OFFSET))();
		}

		static ::System::Boolean PBNODIGLHFB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FCCHGILFKPE_PBNODIGLHFB_OFFSET))(a1);
		}

		static ::System::Void PEKHJMGAMKM(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + FCCHGILFKPE_PEKHJMGAMKM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EDLFNIBCCAI(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FCCHGILFKPE_EDLFNIBCCAI_OFFSET))(a1);
		}

	};
