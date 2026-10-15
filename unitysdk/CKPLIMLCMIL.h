#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"

#define CKPLIMLCMIL_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2A4A0)
#define CKPLIMLCMIL_KPPBAJJNIII_OFFSET UNITYSDK_OFFSET(0x3C2A4B0)

inline static constexpr unsigned int CKPLIMLCMIL_TypeDefinitionIndex = 37221;

	struct alignas(4) CKPLIMLCMIL
	{
		::RPG::GameCore::CakeRaceCellType GDIGGOLJIBJ; // 0x10
		::System::Int32 FACIFJMPDCC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPLIMLCMIL_CTOR_OFFSET))(this);
		}

		::System::Boolean KPPBAJJNIII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPLIMLCMIL_KPPBAJJNIII_OFFSET))(this);
		}

	};
