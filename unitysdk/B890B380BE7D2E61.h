#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseBank.h"
#include "unitysdk/E379DE61A548837D.h"

template <typename T> class FA9B773E8C9B97E9;

#define B890B380BE7D2E61__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B890B380BE7D2E61_TypeDefinitionIndex = 7096;

class B890B380BE7D2E61 : public ::E379DE61A548837D
{
public:
	::FA9B773E8C9B97E9<::ABC::Config::WwiseBank>* AB7F86FCC2BAE8EA; // 0x38
	::System::Boolean EBFB0EC782251F12; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B890B380BE7D2E61__CTOR_OFFSET))(this);
	}
};
