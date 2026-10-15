#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHHIMNANJHP.h"
#include "unitysdk/OOKOJKPGDDP.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveEvent.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveHideLineTraceReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveState.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define IHAJEPBCCFP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB76640)
#define IHAJEPBCCFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB76AC0)
#define IHAJEPBCCFP_EMAMCEEHNAH_OFFSET UNITYSDK_OFFSET(0x1CB76A20)
#define IHAJEPBCCFP_FHCKGKJCMAA_OFFSET UNITYSDK_OFFSET(0x1CB76950)
#define IHAJEPBCCFP_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0x1CB76730)
#define IHAJEPBCCFP_MMNDFOADHLB_OFFSET UNITYSDK_OFFSET(0x1CB76890)
#define IHAJEPBCCFP_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CB76580)
#define IHAJEPBCCFP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CB765E0)

	class IHAJEPBCCFP : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::SplineMoveEvent>* BBAAGLNGLAB; // 0x10
		::JHHIMNANJHP MMNBDLPBJAG; // 0x18
		::System::String* ODMGJKCAICF; // 0x40
		::OOKOJKPGDDP KOLJBCGKDJP; // 0x48
		::UnityEngine::Vector3 IPECNJCOCLC; // 0x68
		::System::Boolean NOOJOFHAIAA; // 0x74
		::System::Byte _padding0[0x3];
		::System::Single LBHOAPLLECN; // 0x78
		::RPG::Client::LittleGame::FiveDim::SplineMoveState EOCKCIGOFMG; // 0x7C
		::RPG::GameCore::FiveDimSplineMoveDirection LJDHGFECMHJ; // 0x80
		::System::Single JBCFPAEELBL; // 0x84
		::System::Single HLIBNBMOCIC; // 0x88
		::System::Single JEJEAABCFLB; // 0x8C
		::RPG::Client::LittleGame::FiveDim::SplineMoveState MEPFOEEGBEA; // 0x90
		::RPG::Client::LittleGame::FiveDim::SplineMoveHideLineTraceReason BPJGFIHELIF; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJEPBCCFP_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJEPBCCFP_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJEPBCCFP_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJEPBCCFP_CLEAR_OFFSET))(this);
		}

		::System::Void JIFPPKNBGMH(::RPG::Client::LittleGame::FiveDim::SplineMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::SplineMoveState))((::PBYTE)hIl2Cpp + IHAJEPBCCFP_JIFPPKNBGMH_OFFSET))(this, a1);
		}

		::System::Void MMNDFOADHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJEPBCCFP_MMNDFOADHLB_OFFSET))(this);
		}

		::System::Void FHCKGKJCMAA(::RPG::GameCore::FiveDimSplineMoveDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSplineMoveDirection))((::PBYTE)hIl2Cpp + IHAJEPBCCFP_FHCKGKJCMAA_OFFSET))(this, a1);
		}

		::System::Void EMAMCEEHNAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHAJEPBCCFP_EMAMCEEHNAH_OFFSET))(this);
		}

	};
