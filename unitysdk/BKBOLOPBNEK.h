#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::ChenLing { class ChenLingHPMemoryInfo; }

#define BKBOLOPBNEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3D000)

inline static constexpr unsigned int BKBOLOPBNEK_TypeDefinitionIndex = 44822;

	class BKBOLOPBNEK : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChenLing::ChenLingHPMemoryInfo* ILEEBALHOPM; // 0x10
		::RPG::MVector2 MFGPNLOLMAJ; // 0x18
		::RPG::MVector2 NOFMIGAKELG; // 0x20
		::System::Boolean BJNABCCHDFJ; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 AIFJEHFDMPD; // 0x2C
		::System::Int32 PLNFOGFFGCK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBOLOPBNEK_CTOR_OFFSET))(this);
		}

	};
