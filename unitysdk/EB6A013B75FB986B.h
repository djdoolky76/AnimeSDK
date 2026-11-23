#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EB6A013B75FB986B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EB6A013B75FB986B_TypeDefinitionIndex = 392;

class EB6A013B75FB986B : public ::E379DE61A548837D
{
public:
	::System::Boolean E580C97C13617576; // 0x38
	::System::Boolean FCE534E1E260087C; // 0x39
	::System::Boolean E2723E4050369EEB; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Single E8CDA54712DFD28B; // 0x3C
	::System::Single FD9E28B525039E76; // 0x40
	::UnityEngine::Vector3 FFF299FAC6915F64; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB6A013B75FB986B__CTOR_OFFSET))(this);
	}
};
