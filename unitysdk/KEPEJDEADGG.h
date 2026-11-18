#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/NKCKADEDLED.h"
#include "unitysdk/System/Object.h"

#define KEPEJDEADGG__CTOR_OFFSET UNITYSDK_OFFSET(0x176FD930)

inline static constexpr unsigned int KEPEJDEADGG_TypeDefinitionIndex = 61427;

class KEPEJDEADGG : public ::System::Object
{
public:
	// static const ::System::Int32 PFDNMJJMDGD = 0xC4E4; // 0x0
	// static const ::System::Int32 JMKEEFNPJLP = 0xC4E6; // 0x0
	::NKCKADEDLED OIOJNIMBFJI; // 0x10
	::System::Single CCFBNKLALHH; // 0x20
	::System::Single MHLGIENJHCD; // 0x24
	::System::Int32 NHPDLGMJFGH; // 0x28
	::System::Boolean ACHLHKLLNCL; // 0x2C
	::System::Boolean NCEBODCJOJF; // 0x2D
	::System::Byte _padding0[0x2];
	::System::Int32 CFNHKJCDOKC; // 0x30
	::Foundation::Coroutine::CoroutineHandle CEDGBGFOMIK; // 0x34
	::System::Int32 DBGJNFKBEJK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPEJDEADGG__CTOR_OFFSET))(this);
	}
};
