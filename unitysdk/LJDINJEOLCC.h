#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define LJDINJEOLCC_CTOR_OFFSET UNITYSDK_OFFSET(0xBF7C9E0)

inline static constexpr unsigned int LJDINJEOLCC_TypeDefinitionIndex = 66326;

	class LJDINJEOLCC : public ::System::Object
	{
	public:
		::PMDPEENJIHC* Base; // 0x10
		::System::String* ShareCode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDINJEOLCC_CTOR_OFFSET))(this);
		}

	};
