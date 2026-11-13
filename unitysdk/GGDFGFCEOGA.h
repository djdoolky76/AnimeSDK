#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMAHHACEANO.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class LOHBCIPAIPI;

#define GGDFGFCEOGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A0C00)
#define GGDFGFCEOGA_HBAHPOFEDDI_OFFSET UNITYSDK_OFFSET(0x1B4A0BF0)

inline static constexpr unsigned int GGDFGFCEOGA_TypeDefinitionIndex = 58857;

	class GGDFGFCEOGA : public ::OMAHHACEANO
	{
	public:
		::LOHBCIPAIPI* BHGGPCPIFCG; // 0x30
		::RPG::GameCore::FixPoint IMKHIDEBGEB; // 0x38
		::System::UInt32 BFMCKHOMLDC; // 0x40
		::System::UInt32 PJIEOECDIFN; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDFGFCEOGA_CTOR_OFFSET))(this);
		}

		::System::Boolean HBAHPOFEDDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDFGFCEOGA_HBAHPOFEDDI_OFFSET))(this);
		}

	};
