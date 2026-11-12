#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CustomPropMoveType.h"
#include "unitysdk/System/Object.h"
class NNDJBGAGHLD;

#define BKAJCAADCOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA3CF60)
#define BKAJCAADCOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3CFE0)

inline static constexpr unsigned int BKAJCAADCOG_TypeDefinitionIndex = 44529;

	class BKAJCAADCOG : public ::System::Object
	{
	public:
		::NNDJBGAGHLD* NNANJMDMAOC; // 0x10
		::RPG::Client::LittleGame::FiveDim::CustomPropMoveType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAJCAADCOG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAJCAADCOG_CLEAR_OFFSET))(this);
		}

	};
