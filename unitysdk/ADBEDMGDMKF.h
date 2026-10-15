#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/System/Object.h"

#define ADBEDMGDMKF_DNPIOGOPBAD_OFFSET UNITYSDK_OFFSET(0x1C849F30)

inline static constexpr unsigned int ADBEDMGDMKF_TypeDefinitionIndex = 43573;

	class ADBEDMGDMKF : public ::System::Object
	{
	public:
		// static const ::System::Object MOHGGKOIIFE; // 0x0
		// static const ::System::Object AJKGNFKKIPP; // 0x0
		// static const ::System::Object JLGGIEDFAGG; // 0x0
		static ::System::Boolean DNPIOGOPBAD(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + ADBEDMGDMKF_DNPIOGOPBAD_OFFSET))(a1);
		}

	};
