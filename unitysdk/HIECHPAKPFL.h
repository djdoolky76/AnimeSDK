#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define HIECHPAKPFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACC1E0)

	class HIECHPAKPFL : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* CDANMPGNPHN; // 0x10
		::System::Action* CLOCJNLFPPP; // 0x18
		::RPG::GameCore::FourRotateVoxelFinishPointConfig* DOCBCODGIEH; // 0x20
		::INMMPMDELKE* OFHDAHHPNPJ; // 0x28
		::System::Action* MGJLINFADJK; // 0x30
		::System::Boolean HCDIMDELHDA; // 0x38
		::System::Boolean IIDHHGEICBB; // 0x39
		::System::Boolean KAGICIAJEEA; // 0x3A
		::System::Byte _padding0[0x1];
		::System::Int32 BGOFFMAFPNM; // 0x3C
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord GCGIFJAEHLP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIECHPAKPFL_CTOR_OFFSET))(this);
		}

	};
