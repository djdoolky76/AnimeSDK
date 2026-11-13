#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALJDCNLAICE;

#define ALGCHOOFACC_MFOKDMAAOBB_OFFSET UNITYSDK_OFFSET(0x197C1C70)

inline static constexpr unsigned int ALGCHOOFACC_TypeDefinitionIndex = 66545;

	class ALGCHOOFACC : public ::System::Object
	{
	public:
		static ::ALJDCNLAICE* MFOKDMAAOBB(::System::UInt32 a1)
		{
			return ((::ALJDCNLAICE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ALGCHOOFACC_MFOKDMAAOBB_OFFSET))(a1);
		}

	};
