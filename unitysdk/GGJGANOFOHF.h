#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGJGANOFOHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC65730)

inline static constexpr unsigned int GGJGANOFOHF_TypeDefinitionIndex = 44749;

	class GGJGANOFOHF : public ::System::Object
	{
	public:
		::System::Single ECKNFNIPAKN; // 0x10
		::System::Boolean HCOFMFKFMDK; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single CNHMBFIHLPC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJGANOFOHF_CTOR_OFFSET))(this);
		}

	};
