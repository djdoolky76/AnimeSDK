#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FC8C3CD569556777__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF730)

inline static constexpr unsigned int FC8C3CD569556777_TypeDefinitionIndex = 1360;

class FC8C3CD569556777 : public ::E379DE61A548837D
{
public:
	::UnityEngine::Vector3 E3745817B46098F1; // 0x38
	::System::Single AFA4B2D19D84D026; // 0x44
	::System::Single FB7FD9D52BAEBEA2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC8C3CD569556777__CTOR_OFFSET))(this);
	}
};
