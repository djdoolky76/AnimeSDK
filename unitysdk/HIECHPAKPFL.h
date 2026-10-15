#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define HIECHPAKPFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9DE20)

inline static constexpr unsigned int HIECHPAKPFL_TypeDefinitionIndex = 43223;

	class HIECHPAKPFL : public ::System::Object
	{
	public:
		::System::Action* CLOCJNLFPPP; // 0x10
		::System::Action* MGJLINFADJK; // 0x18
		::RPG::GameCore::FourRotateVoxelFinishPointConfig* DOCBCODGIEH; // 0x20
		::UnityEngine::GameObject* CDANMPGNPHN; // 0x28
		::INMMPMDELKE* OFHDAHHPNPJ; // 0x30
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord GCGIFJAEHLP; // 0x38
		::System::Boolean IIDHHGEICBB; // 0x50
		::System::Boolean HCDIMDELHDA; // 0x51
		::System::Boolean KAGICIAJEEA; // 0x52
		::System::Byte _padding0[0x1];
		::System::Int32 BGOFFMAFPNM; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIECHPAKPFL_CTOR_OFFSET))(this);
		}

	};
