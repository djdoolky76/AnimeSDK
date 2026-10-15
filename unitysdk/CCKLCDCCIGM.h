#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }
namespace RPG::GameCore { class FiveDimRTPCConfig; }
namespace System { class Action; }

#define CCKLCDCCIGM_ABAKIJHCHDN_OFFSET UNITYSDK_OFFSET(0xC74E000)
#define CCKLCDCCIGM_ADD_ONPLAYERENTERSTAGE_OFFSET UNITYSDK_OFFSET(0xC74C680)
#define CCKLCDCCIGM_ADD_ONPLAYEREXITSTAGE_OFFSET UNITYSDK_OFFSET(0xC74C740)
#define CCKLCDCCIGM_BPJAMAEDDPG_OFFSET UNITYSDK_OFFSET(0xC74CCE0)
#define CCKLCDCCIGM_CJNNJMOBDNN_OFFSET UNITYSDK_OFFSET(0xC74D460)
#define CCKLCDCCIGM_CNMOKKPLEKA_OFFSET UNITYSDK_OFFSET(0xC74E4C0)
#define CCKLCDCCIGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC74C800)
#define CCKLCDCCIGM_ENFEGJNKDFA_OFFSET UNITYSDK_OFFSET(0xC74D220)
#define CCKLCDCCIGM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC74D150)
#define CCKLCDCCIGM_HJJHINMLJCB_OFFSET UNITYSDK_OFFSET(0xC74DE80)
#define CCKLCDCCIGM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC74C850)
#define CCKLCDCCIGM_LMFBAHFKGHD_OFFSET UNITYSDK_OFFSET(0xC74D2A0)
#define CCKLCDCCIGM_OCKMMNCNINI_OFFSET UNITYSDK_OFFSET(0xC74E0C0)
#define CCKLCDCCIGM_OFMDCLFLLOO_OFFSET UNITYSDK_OFFSET(0xC74CF10)
#define CCKLCDCCIGM_OLALJJLBGMK_OFFSET UNITYSDK_OFFSET(0xC74E290)
#define CCKLCDCCIGM_REMOVE_ONPLAYERENTERSTAGE_OFFSET UNITYSDK_OFFSET(0xC74C6E0)
#define CCKLCDCCIGM_REMOVE_ONPLAYEREXITSTAGE_OFFSET UNITYSDK_OFFSET(0xC74C7A0)
#define CCKLCDCCIGM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC74CB70)

	class CCKLCDCCIGM : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimRTPCConfig* DAPCIJHBCBL; // 0x10
		::System::Action* OnPlayerExitStage; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::System::Action* OnPlayerEnterStage; // 0x28
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x30
		::System::Boolean FLIEEKHGGJM; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 FLFJIDBPHBN; // 0x3C
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void add_OnPlayerEnterStage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_ADD_ONPLAYERENTERSTAGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPlayerEnterStage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_REMOVE_ONPLAYERENTERSTAGE_OFFSET))(this, a1);
		}

		::System::Void add_OnPlayerExitStage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_ADD_ONPLAYEREXITSTAGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPlayerExitStage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_REMOVE_ONPLAYEREXITSTAGE_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_EXECUTE_OFFSET))(this);
		}

		::System::Void HJJHINMLJCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_HJJHINMLJCB_OFFSET))(this);
		}

		::System::Void OFMDCLFLLOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_OFMDCLFLLOO_OFFSET))(this);
		}

		::System::Boolean LMFBAHFKGHD(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_LMFBAHFKGHD_OFFSET))(this, a1);
		}

		::System::Boolean OCKMMNCNINI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_OCKMMNCNINI_OFFSET))(this);
		}

		::System::Void ENFEGJNKDFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_ENFEGJNKDFA_OFFSET))(this);
		}

		::System::Void CJNNJMOBDNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_CJNNJMOBDNN_OFFSET))(this);
		}

		::System::Void OLALJJLBGMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_OLALJJLBGMK_OFFSET))(this);
		}

		::System::Void BPJAMAEDDPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_BPJAMAEDDPG_OFFSET))(this);
		}

		::System::Void CNMOKKPLEKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_CNMOKKPLEKA_OFFSET))(this);
		}

		::Entitas::IGroup* ABAKIJHCHDN()
		{
			return ((::Entitas::IGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKLCDCCIGM_ABAKIJHCHDN_OFFSET))(this);
		}

	};
