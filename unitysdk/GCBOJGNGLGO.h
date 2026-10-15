#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGHPKFMNNHL;
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define GCBOJGNGLGO_CTOR_OFFSET UNITYSDK_OFFSET(0x15960150)
#define GCBOJGNGLGO_DHAMJHICKPM_OFFSET UNITYSDK_OFFSET(0x15960510)
#define GCBOJGNGLGO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15960350)
#define GCBOJGNGLGO_FEAOGEMGHAP_OFFSET UNITYSDK_OFFSET(0x15960240)
#define GCBOJGNGLGO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x159605F0)
#define GCBOJGNGLGO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x15960600)
#define GCBOJGNGLGO_GET_ISWAITINGADVPHASE_OFFSET UNITYSDK_OFFSET(0x15960630)
#define GCBOJGNGLGO_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0x15960610)
#define GCBOJGNGLGO_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x15960620)
#define GCBOJGNGLGO_GET__DATA_OFFSET UNITYSDK_OFFSET(0x15960660)
#define GCBOJGNGLGO_GET__ISRECONNECT_OFFSET UNITYSDK_OFFSET(0x15960650)
#define GCBOJGNGLGO_GET__PROTO_OFFSET UNITYSDK_OFFSET(0x15960670)
#define GCBOJGNGLGO_GMNBIIJHALP_OFFSET UNITYSDK_OFFSET(0x159603D0)
#define GCBOJGNGLGO_SET_ISWAITINGADVPHASE_OFFSET UNITYSDK_OFFSET(0x15960640)

	class GCBOJGNGLGO : public ::System::Object
	{
	public:
		::RPG::Client::ChessRogueData* __Data_k__BackingField; // 0x10
		::OGHPKFMNNHL* __Proto_k__BackingField; // 0x18
		::System::UInt32 _AreaID_k__BackingField; // 0x20
		::System::UInt32 _Difficulty_k__BackingField; // 0x24
		::System::UInt32 _LayerIndex_k__BackingField; // 0x28
		::System::Boolean _IsWaitingAdvPhase_k__BackingField; // 0x2C
		::System::Boolean __IsReconnect_k__BackingField; // 0x2D
		::System::Boolean GEMLLCNLHHM; // 0x2E
		::System::Byte _padding0[0x1];
		::System::UInt32 _LayerID_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::Client::ChessRogueData* a1, ::OGHPKFMNNHL* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueData*, ::OGHPKFMNNHL*, ::System::Boolean))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FEAOGEMGHAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_FEAOGEMGHAP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_DISPOSE_OFFSET))(this);
		}

		::System::Void GMNBIIJHALP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_GMNBIIJHALP_OFFSET))(this, a1);
		}

		::System::Func_1<::RPG::Client::Promises::Promise*>* DHAMJHICKPM(::System::Boolean a1)
		{
			return ((::System::Func_1<::RPG::Client::Promises::Promise*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_DHAMJHICKPM_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_GET_AREAID_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::UInt32 get_LayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_GET_LAYERID_OFFSET))(this);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsWaitingAdvPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_GET_ISWAITINGADVPHASE_OFFSET))(this);
		}

		::System::Void set_IsWaitingAdvPhase(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_SET_ISWAITINGADVPHASE_OFFSET))(this, a1);
		}

		::System::Boolean get__IsReconnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_GET__ISRECONNECT_OFFSET))(this);
		}

		::RPG::Client::ChessRogueData* get__Data()
		{
			return ((::RPG::Client::ChessRogueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_GET__DATA_OFFSET))(this);
		}

		::OGHPKFMNNHL* get__Proto()
		{
			return ((::OGHPKFMNNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOJGNGLGO_GET__PROTO_OFFSET))(this);
		}

	};
