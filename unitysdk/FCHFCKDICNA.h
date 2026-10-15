#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingStageWaveType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingStageWaveRow; }

#define FCHFCKDICNA_CTOR_OFFSET UNITYSDK_OFFSET(0x156B1610)
#define FCHFCKDICNA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x156B1620)
#define FCHFCKDICNA_GET_WAVEID_OFFSET UNITYSDK_OFFSET(0x156B1640)
#define FCHFCKDICNA_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x156B16D0)
#define FCHFCKDICNA_NDOOPLIKLBD_OFFSET UNITYSDK_OFFSET(0x156B1770)
#define FCHFCKDICNA_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0x156B1660)
#define FCHFCKDICNA_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x156B1630)
#define FCHFCKDICNA_SET_WAVEID_OFFSET UNITYSDK_OFFSET(0x156B1650)

inline static constexpr unsigned int FCHFCKDICNA_TypeDefinitionIndex = 61460;

	class FCHFCKDICNA : public ::System::Object
	{
	public:
		::System::UInt32 _WaveID_k__BackingField; // 0x10
		::System::UInt32 _StageID_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FCHFCKDICNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHFCKDICNA_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCHFCKDICNA_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_WaveID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHFCKDICNA_GET_WAVEID_OFFSET))(this);
		}

		::System::Void set_WaveID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCHFCKDICNA_SET_WAVEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingStageWaveRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::ChenLingStageWaveRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHFCKDICNA_PDAENODHFCM_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingStageWaveType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::ChenLingStageWaveType(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHFCKDICNA_JBIOGKPHKKC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* NDOOPLIKLBD()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHFCKDICNA_NDOOPLIKLBD_OFFSET))(this);
		}

	};
