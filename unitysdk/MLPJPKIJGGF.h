#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelGameState.h"
#include "unitysdk/System/Object.h"
class DODPFANHNDG;

#define MLPJPKIJGGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FF3B0)

inline static constexpr unsigned int MLPJPKIJGGF_TypeDefinitionIndex = 41944;

	class MLPJPKIJGGF : public ::System::Object
	{
	public:
		::DODPFANHNDG* BFLLJJBHLDF; // 0x10
		::RPG::Client::LittleGame::ChimeraDuelGameState MEPFOEEGBEA; // 0x18
		::System::Boolean PAKNNEFOEON; // 0x1C
		::System::Boolean MAEJNJNNOCI; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 IAKDNNCLGAN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPJPKIJGGF_CTOR_OFFSET))(this);
		}

	};
