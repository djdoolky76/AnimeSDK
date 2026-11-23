#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F5F7743C240E8D32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace System { class String; }

#define A031B7823E0F2F3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1B36BC0)

inline static constexpr unsigned int A031B7823E0F2F3B_TypeDefinitionIndex = 2111;

class A031B7823E0F2F3B : public ::E379DE61A548837D
{
public:
	::System::String* BC24C5C1A8EB99B3; // 0x38
	::System::Boolean BF3EB79766079C84; // 0x40
	::System::Boolean F84FDA496E1DA5CD; // 0x41
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 E3745817B46098F1; // 0x44
	::System::Boolean AEA3244DE797A1C8; // 0x50
	::System::Byte _padding1[0x3];
	::UnityEngine::Quaternion B14F5F733E2AD130; // 0x54
	::System::Byte _padding2[0x4];
	::AB642D1382756991* ED86FBC5C5B2F222; // 0x68
	::E68AA4EB51923C98::F5F7743C240E8D32 FE670C6F2C67E877; // 0x70
	::System::Int32 F2D70328FDEAE1D8; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A031B7823E0F2F3B__CTOR_OFFSET))(this);
	}
};
