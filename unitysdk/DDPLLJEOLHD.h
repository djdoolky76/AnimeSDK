#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DDPLLJEOLHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F70C0)

inline static constexpr unsigned int DDPLLJEOLHD_TypeDefinitionIndex = 43693;

	class DDPLLJEOLHD : public ::System::Object
	{
	public:
		::System::Int32 FMLGGKAFMKC; // 0x10
		::System::Int32 NNLNPHHHINC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPLLJEOLHD_CTOR_OFFSET))(this);
		}

	};
