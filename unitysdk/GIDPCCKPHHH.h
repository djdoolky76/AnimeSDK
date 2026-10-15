#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerConditionType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/JPCONPIKIEK.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }

#define GIDPCCKPHHH_BKCBMJJKPNK_OFFSET UNITYSDK_OFFSET(0x3C39470)
#define GIDPCCKPHHH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define GIDPCCKPHHH_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x3C396B0)
#define GIDPCCKPHHH_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define GIDPCCKPHHH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define GIDPCCKPHHH_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define GIDPCCKPHHH_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C39700)
#define GIDPCCKPHHH_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x3C39530)
#define GIDPCCKPHHH_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x3C39630)
#define GIDPCCKPHHH_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define GIDPCCKPHHH_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x3C39600)
#define GIDPCCKPHHH_KMLKDBPCDJF_OFFSET UNITYSDK_OFFSET(0x3C395B0)
#define GIDPCCKPHHH_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x3C394F0)
#define GIDPCCKPHHH_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x3C39680)
#define GIDPCCKPHHH_OGKOMNICMND_OFFSET UNITYSDK_OFFSET(0x3C39580)
#define GIDPCCKPHHH_OLBFNPEDPEE_OFFSET UNITYSDK_OFFSET(0x3C394A0)

inline static constexpr unsigned int GIDPCCKPHHH_TypeDefinitionIndex = 10730;

	struct alignas(8) GIDPCCKPHHH
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::CompareType BKCBMJJKPNK()
		{
			return ((::RPG::GameCore::CompareType(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_BKCBMJJKPNK_OFFSET))(this);
		}

		::System::Void OLBFNPEDPEE(::RPG::GameCore::CompareType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_OLBFNPEDPEE_OFFSET))(this, a1);
		}

		::JPCONPIKIEK MLMGEFIOION()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_HABCMACJEIN_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropState OGKOMNICMND()
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_OGKOMNICMND_OFFSET))(this);
		}

		::System::Void KMLKDBPCDJF(::RPG::GameCore::PropState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_KMLKDBPCDJF_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNavNodeInnerConditionType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::LevelNavNodeInnerConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::RPG::GameCore::LevelNavNodeInnerConditionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInnerConditionType))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Int32 MNLDMBGAJIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNavNodeConditionInfo* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::LevelNavNodeConditionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDPCCKPHHH_GFLKJLOFIPA_OFFSET))(this);
		}

	};
