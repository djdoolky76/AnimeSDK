#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FloatCurve; }

#define POPHFMPBKJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D979460)

inline static constexpr unsigned int POPHFMPBKJL_TypeDefinitionIndex = 37760;

	class POPHFMPBKJL : public ::System::Object
	{
	public:
		::RPG::GameCore::FloatCurve* NLIFDJHPHLP; // 0x10
		::RPG::MVector3 DLKMKNFJLIK; // 0x18
		::System::Boolean IKNKOCPLCHE; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single IEHPFADHJFD; // 0x28
		::RPG::MVector3 IJHDBLGLCMN; // 0x2C
		::System::Single FAFCKJNFKCE; // 0x38
		::System::Single MLKAGGJKCGN; // 0x3C
		::System::Single HLMHCCCJFBA; // 0x40
		::System::Single BJMAMHMCOEL; // 0x44
		::RPG::MVector3 GGPBJBIEBII; // 0x48
		::RPG::GameCore::CakeRaceCurveType OJFNNJIGHDB; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHFMPBKJL_CTOR_OFFSET))(this);
		}

	};
