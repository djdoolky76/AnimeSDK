#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EngineCurves.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEBAJLJMMK;

#define NAJMEPONCEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF61D0)

inline static constexpr unsigned int NAJMEPONCEL_TypeDefinitionIndex = 43889;

	class NAJMEPONCEL : public ::System::Object
	{
	public:
		::AFEBAJLJMMK* CNEJNFEFIMJ; // 0x10
		::AFEBAJLJMMK* DLNBJJAIMDE; // 0x18
		::RPG::Client::LittleGame::RoadRash::EngineCurves GMBLBAGHHNB; // 0x20
		::System::Single GJHPHPFHLCA; // 0x48
		::System::Single NLHBIIMLAOK; // 0x4C
		::System::Single FPJLLPNHNOH; // 0x50
		::UnityEngine::Vector3 CNCEDLKOHFL; // 0x54
		::System::Single MLHFGGCCNCG; // 0x60
		::System::Single PNFBLKLCCGM; // 0x64
		::System::Single POMKFKDHGJA; // 0x68
		::System::Single OKDFGCFMBBK; // 0x6C
		::System::Single FLGJKCKELEH; // 0x70
		::System::Single ICIMHIMDDAF; // 0x74
		::System::Single CCNGPBEJHLA; // 0x78
		::System::Single GDFILJJIODH; // 0x7C
		::System::Single BOPCDKEKMHE; // 0x80
		::RPG::Client::LittleGame::RoadRash::EEngineState MEPFOEEGBEA; // 0x84
		::System::Single NNPAIABECIB; // 0x88
		::System::Single KJHIMFEHNBA; // 0x8C
		::System::Single LFALOCOLNHC; // 0x90
		::System::Single JBICDNGFDLB; // 0x94
		::System::Single BPFNNMDGCBE; // 0x98
		::System::Single ILDGGKMIOIF; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJMEPONCEL_CTOR_OFFSET))(this);
		}

	};
