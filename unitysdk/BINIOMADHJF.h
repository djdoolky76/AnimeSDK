#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANDHCEBLPON.h"
class EDINPKOJMLB;
class FECDLDCCHPN;
namespace RPG::GameCore { class StageVolumeComponentData; }

#define BINIOMADHJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB78F280)
#define BINIOMADHJF_KGJNPNLKCBF_OFFSET UNITYSDK_OFFSET(0xB78F3E0)
#define BINIOMADHJF_MIJGMJAHHDO_OFFSET UNITYSDK_OFFSET(0xB78F300)
#define BINIOMADHJF_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0xB78F430)

inline static constexpr unsigned int BINIOMADHJF_TypeDefinitionIndex = 73987;

	class BINIOMADHJF : public ::ANDHCEBLPON
	{
	public:
		::EDINPKOJMLB* GLOIPPFKHPL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINIOMADHJF_CTOR_OFFSET))(this);
		}

		::System::Void MIJGMJAHHDO(::RPG::GameCore::StageVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + BINIOMADHJF_MIJGMJAHHDO_OFFSET))(this, a1);
		}

		::System::Void KGJNPNLKCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINIOMADHJF_KGJNPNLKCBF_OFFSET))(this);
		}

		::System::Void NDGDDODNDMP(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + BINIOMADHJF_NDGDDODNDMP_OFFSET))(this, a1);
		}

	};
