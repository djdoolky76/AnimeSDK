#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerState.h"
#include "unitysdk/System/Object.h"
class NKCPKOOIOPB;
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerRecordFrames; }

#define NBPHDOPHNKH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C915520)
#define NBPHDOPHNKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9155B0)

inline static constexpr unsigned int NBPHDOPHNKH_TypeDefinitionIndex = 43417;

	class NBPHDOPHNKH : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerRecordFrames* BEANLLJHOPJ; // 0x10
		::NKCPKOOIOPB* AHEBJPINDIO; // 0x18
		::System::Single FMDMNMPAAKI; // 0x20
		::RPG::Client::LittleGame::FiveDim::PhantomPlayerState MEPFOEEGBEA; // 0x24
		::System::Boolean BNIMJJNOLAI; // 0x28
		::System::Boolean IGHNIGHKKFM; // 0x29
		::System::Boolean AENMIAFEBKP; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Single BMPABCGHPFG; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPHDOPHNKH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPHDOPHNKH_CLEAR_OFFSET))(this);
		}

	};
