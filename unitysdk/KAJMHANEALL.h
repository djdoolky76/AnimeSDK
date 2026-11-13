#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAJMHANEALL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE23090)

inline static constexpr unsigned int KAJMHANEALL_TypeDefinitionIndex = 44735;

	class KAJMHANEALL : public ::System::Object
	{
	public:
		::System::Single CNHMBFIHLPC; // 0x10
		::System::Boolean HCOFMFKFMDK; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single ECKNFNIPAKN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJMHANEALL_CTOR_OFFSET))(this);
		}

	};
