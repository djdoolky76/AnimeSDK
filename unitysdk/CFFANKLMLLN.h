#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CFFANKLMLLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DDC70)

inline static constexpr unsigned int CFFANKLMLLN_TypeDefinitionIndex = 44654;

	class CFFANKLMLLN : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x10
		::System::UInt32 BOKJJKFCFME; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFANKLMLLN_CTOR_OFFSET))(this);
		}

	};
