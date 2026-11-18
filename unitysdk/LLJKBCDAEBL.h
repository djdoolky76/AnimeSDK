#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace MoleMole::GalGame { class GalScript; }

#define LLJKBCDAEBL_KCFHDPPHOPE_OFFSET UNITYSDK_OFFSET(0x151A6880)

inline static constexpr unsigned int LLJKBCDAEBL_TypeDefinitionIndex = 69274;

class LLJKBCDAEBL : public ::System::Object
{
public:
	static ::System::Boolean KCFHDPPHOPE(::System::Int32 MGMDLMBEDJF, ::MoleMole::GalGame::GalScript*& GPJPMOGCDBK, ::Foundation::AssetRequestHandle& MKFGNFBIDMC)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::GalGame::GalScript*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + LLJKBCDAEBL_KCFHDPPHOPE_OFFSET))(MGMDLMBEDJF, GPJPMOGCDBK, MKFGNFBIDMC);
	}
};
