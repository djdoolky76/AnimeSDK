#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EngineCurves.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEBAJLJMMK;

#define NAJMEPONCEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C26BA70)

inline static constexpr unsigned int NAJMEPONCEL_TypeDefinitionIndex = 43889;

	class NAJMEPONCEL : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::RoadRash::EngineCurves GMBLBAGHHNB; // 0x10
		::AFEBAJLJMMK* DLNBJJAIMDE; // 0x38
		::AFEBAJLJMMK* CNEJNFEFIMJ; // 0x40
		::RPG::Client::LittleGame::RoadRash::EEngineState MEPFOEEGBEA; // 0x48
		::System::Single KJHIMFEHNBA; // 0x4C
		::System::Single FLGJKCKELEH; // 0x50
		::UnityEngine::Vector3 CNCEDLKOHFL; // 0x54
		::System::Single GDFILJJIODH; // 0x60
		::System::Single BPFNNMDGCBE; // 0x64
		::System::Single NNPAIABECIB; // 0x68
		::System::Single FPJLLPNHNOH; // 0x6C
		::System::Single JBICDNGFDLB; // 0x70
		::System::Single OKDFGCFMBBK; // 0x74
		::System::Single NLHBIIMLAOK; // 0x78
		::System::Single CCNGPBEJHLA; // 0x7C
		::System::Single ICIMHIMDDAF; // 0x80
		::System::Single MLHFGGCCNCG; // 0x84
		::System::Single LFALOCOLNHC; // 0x88
		::System::Single POMKFKDHGJA; // 0x8C
		::System::Single PNFBLKLCCGM; // 0x90
		::System::Single ILDGGKMIOIF; // 0x94
		::System::Single GJHPHPFHLCA; // 0x98
		::System::Single BOPCDKEKMHE; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJMEPONCEL_CTOR_OFFSET))(this);
		}

	};
