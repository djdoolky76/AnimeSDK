#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EngineCurves.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEBAJLJMMK;

#define NAJMEPONCEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9068E0)

inline static constexpr unsigned int NAJMEPONCEL_TypeDefinitionIndex = 42908;

	class NAJMEPONCEL : public ::System::Object
	{
	public:
		::AFEBAJLJMMK* CNEJNFEFIMJ; // 0x10
		::RPG::Client::LittleGame::RoadRash::EngineCurves GMBLBAGHHNB; // 0x18
		::AFEBAJLJMMK* DLNBJJAIMDE; // 0x40
		::System::Single POMKFKDHGJA; // 0x48
		::System::Single GDFILJJIODH; // 0x4C
		::System::Single MLHFGGCCNCG; // 0x50
		::System::Single FPJLLPNHNOH; // 0x54
		::System::Single NNPAIABECIB; // 0x58
		::System::Single KJHIMFEHNBA; // 0x5C
		::System::Single PNFBLKLCCGM; // 0x60
		::System::Single LFALOCOLNHC; // 0x64
		::System::Single GJHPHPFHLCA; // 0x68
		::System::Single BPFNNMDGCBE; // 0x6C
		::System::Single FLGJKCKELEH; // 0x70
		::UnityEngine::Vector3 CNCEDLKOHFL; // 0x74
		::System::Single CCNGPBEJHLA; // 0x80
		::System::Single ILDGGKMIOIF; // 0x84
		::System::Single NLHBIIMLAOK; // 0x88
		::RPG::Client::LittleGame::RoadRash::EEngineState MEPFOEEGBEA; // 0x8C
		::System::Single OKDFGCFMBBK; // 0x90
		::System::Single ICIMHIMDDAF; // 0x94
		::System::Single JBICDNGFDLB; // 0x98
		::System::Single BOPCDKEKMHE; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJMEPONCEL_CTOR_OFFSET))(this);
		}

	};
