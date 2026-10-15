#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EngineCurves.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AFEBAJLJMMK;

#define NAJMEPONCEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C934CE0)

inline static constexpr unsigned int NAJMEPONCEL_TypeDefinitionIndex = 42908;

	class NAJMEPONCEL : public ::System::Object
	{
	public:
		::AFEBAJLJMMK* CNEJNFEFIMJ; // 0x10
		::RPG::Client::LittleGame::RoadRash::EngineCurves GMBLBAGHHNB; // 0x18
		::AFEBAJLJMMK* DLNBJJAIMDE; // 0x40
		::System::Single MLHFGGCCNCG; // 0x48
		::System::Single BPFNNMDGCBE; // 0x4C
		::System::Single GJHPHPFHLCA; // 0x50
		::System::Single ICIMHIMDDAF; // 0x54
		::System::Single BOPCDKEKMHE; // 0x58
		::RPG::Client::LittleGame::RoadRash::EEngineState MEPFOEEGBEA; // 0x5C
		::System::Single OKDFGCFMBBK; // 0x60
		::System::Single ILDGGKMIOIF; // 0x64
		::System::Single POMKFKDHGJA; // 0x68
		::System::Single NNPAIABECIB; // 0x6C
		::UnityEngine::Vector3 CNCEDLKOHFL; // 0x70
		::System::Single JBICDNGFDLB; // 0x7C
		::System::Single KJHIMFEHNBA; // 0x80
		::System::Single CCNGPBEJHLA; // 0x84
		::System::Single LFALOCOLNHC; // 0x88
		::System::Single PNFBLKLCCGM; // 0x8C
		::System::Single NLHBIIMLAOK; // 0x90
		::System::Single FPJLLPNHNOH; // 0x94
		::System::Single FLGJKCKELEH; // 0x98
		::System::Single GDFILJJIODH; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJMEPONCEL_CTOR_OFFSET))(this);
		}

	};
