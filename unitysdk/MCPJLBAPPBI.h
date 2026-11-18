#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APEBIFHOIHI.h"
#include "unitysdk/System/Object.h"

#define MCPJLBAPPBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDC3F0)

inline static constexpr unsigned int MCPJLBAPPBI_TypeDefinitionIndex = 43434;

class MCPJLBAPPBI : public ::System::Object
{
public:
	::System::Int32 KCGAEAKJJOC; // 0x10
	::System::Int32 DLFANHHIHCE; // 0x14
	::System::Boolean KDDMOKOHBJA; // 0x18
	::System::Boolean BOJCBBGFMGK; // 0x19
	::System::Boolean JNOKJHOBLEL; // 0x1A
	::System::Byte _padding0[0x1];
	::System::Int32 HDOMEONLADJ; // 0x1C
	::System::Int32 PFPAPJONAOD; // 0x20
	::APEBIFHOIHI KGONNDCPJGB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPJLBAPPBI__CTOR_OFFSET))(this);
	}
};
