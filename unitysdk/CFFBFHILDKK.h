#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CFFBFHILDKK_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA11680)

inline static constexpr unsigned int CFFBFHILDKK_TypeDefinitionIndex = 69496;

	class CFFBFHILDKK : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFFBFHILDKK_CCTOR_OFFSET))();
		}

	};
