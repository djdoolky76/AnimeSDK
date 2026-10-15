#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/System/Object.h"
class FDHFGKLGEBC;
class IFBOFKLBBKO;

#define FBLEGIOPMKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E3560)

inline static constexpr unsigned int FBLEGIOPMKG_TypeDefinitionIndex = 37244;

	class FBLEGIOPMKG : public ::System::Object
	{
	public:
		::IFBOFKLBBKO* BIHPEGKJNHA; // 0x10
		::FDHFGKLGEBC* KOFBDAHFDDN; // 0x18
		::RPG::GameCore::CakeRaceAIState MEPFOEEGBEA; // 0x20
		::System::UInt32 BDDAMONNJDM; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLEGIOPMKG_CTOR_OFFSET))(this);
		}

	};
