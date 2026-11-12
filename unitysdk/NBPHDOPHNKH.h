#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerFinishMode.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerState.h"
#include "unitysdk/System/Object.h"
class NKCPKOOIOPB;
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerRecordFrames; }

#define NBPHDOPHNKH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB053A0)
#define NBPHDOPHNKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB05420)

inline static constexpr unsigned int NBPHDOPHNKH_TypeDefinitionIndex = 44399;

	class NBPHDOPHNKH : public ::System::Object
	{
	public:
		::NKCPKOOIOPB* AHEBJPINDIO; // 0x10
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames* BEANLLJHOPJ; // 0x18
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerFinishMode PFGOOOMLOMK; // 0x20
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerState MEPFOEEGBEA; // 0x24
		::System::Boolean AENMIAFEBKP; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single BMPABCGHPFG; // 0x2C
		::System::Single FMDMNMPAAKI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPHDOPHNKH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPHDOPHNKH_CLEAR_OFFSET))(this);
		}

	};
