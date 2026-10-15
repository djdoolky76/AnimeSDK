#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define DACBHHEMGHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13E00)

inline static constexpr unsigned int DACBHHEMGHB_TypeDefinitionIndex = 42218;

	class DACBHHEMGHB : public ::System::Object
	{
	public:
		::System::ValueTuple LBMFPCIBMAC; // 0x10
		::System::UInt32 KBONLPELBKH; // 0x18
		::System::UInt32 JCAEANLAGMB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACBHHEMGHB_CTOR_OFFSET))(this);
		}

	};
