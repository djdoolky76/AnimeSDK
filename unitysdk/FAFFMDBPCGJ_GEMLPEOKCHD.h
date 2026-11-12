#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
namespace System { class Object; }

#define FAFFMDBPCGJ_GEMLPEOKCHD_CTOR_OFFSET UNITYSDK_OFFSET(0x304A0E0)
#define FAFFMDBPCGJ_GEMLPEOKCHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x304A240)
#define FAFFMDBPCGJ_GEMLPEOKCHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x304A110)
#define FAFFMDBPCGJ_GEMLPEOKCHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x304A250)

inline static constexpr unsigned int FAFFMDBPCGJ_GEMLPEOKCHD_TypeDefinitionIndex = 79069;

	struct alignas(4) FAFFMDBPCGJ_GEMLPEOKCHD
	{
		::System::Int32 NOGELILBICK; // 0x10
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord FGDAGBDLAHC; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GEMLPEOKCHD_CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Equals(::FAFFMDBPCGJ_GEMLPEOKCHD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAFFMDBPCGJ_GEMLPEOKCHD))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GEMLPEOKCHD_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GEMLPEOKCHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GEMLPEOKCHD_GETHASHCODE_OFFSET))(this);
		}

	};
