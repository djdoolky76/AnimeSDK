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

#define IHAJEPBCCFP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD3CC30)
#define IHAJEPBCCFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3D0C0)
#define IHAJEPBCCFP_EMAMCEEHNAH_OFFSET UNITYSDK_OFFSET(0x1DD3D020)
#define IHAJEPBCCFP_FHCKGKJCMAA_OFFSET UNITYSDK_OFFSET(0x1DD3CF50)
#define IHAJEPBCCFP_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0x1DD3CD30)
#define IHAJEPBCCFP_MMNDFOADHLB_OFFSET UNITYSDK_OFFSET(0x1DD3CE90)
#define IHAJEPBCCFP_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DD3CB70)
#define IHAJEPBCCFP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DD3CBD0)

inline static constexpr unsigned int IHAJEPBCCFP_TypeDefinitionIndex = 44538;

	class IHAJEPBCCFP : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::SplineMoveEvent>* BBAAGLNGLAB; // 0x10
		::JHHIMNANJHP MMNBDLPBJAG; // 0x18
		::System::String* ODMGJKCAICF; // 0x40
		::OOKOJKPGDDP KOLJBCGKDJP; // 0x48
		::System::Single JEJEAABCFLB; // 0x68
		::System::Single LBHOAPLLECN; // 0x6C
		::RPG::Client::LittleGame::FiveDim::SplineMoveHideLineTraceReason BPJGFIHELIF; // 0x70
		::RPG::Client::LittleGame::FiveDim::SplineMoveState MEPFOEEGBEA; // 0x74
		::System::Boolean NOOJOFHAIAA; // 0x78
		::System::Byte _padding0[0x3];
		::System::Single HLIBNBMOCIC; // 0x7C
		::RPG::Client::LittleGame::FiveDim::SplineMoveState EOCKCIGOFMG; // 0x80
		::UnityEngine::Vector3 IPECNJCOCLC; // 0x84
		::RPG::GameCore::FiveDimSplineMoveDirection LJDHGFECMHJ; // 0x90
		::System::Single JBCFPAEELBL; // 0x94
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
