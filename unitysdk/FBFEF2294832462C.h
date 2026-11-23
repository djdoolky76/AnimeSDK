#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FBFEF2294832462C_AFE765A0D1832E10_OFFSET UNITYSDK_OFFSET(0x3BD16A0)
#define FBFEF2294832462C_F08BE8E8A8AF95AC_OFFSET UNITYSDK_OFFSET(0x3BD16B0)
#define FBFEF2294832462C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FBFEF2294832462C_TypeDefinitionIndex = 11218;

class FBFEF2294832462C : public ::System::Object
{
public:
	::System::Int32 A8F8BA101A1935FB; // 0x10

	::System::Boolean F08BE8E8A8AF95AC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFEF2294832462C_F08BE8E8A8AF95AC_OFFSET))(this);
	}

	::System::Void AFE765A0D1832E10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFEF2294832462C_AFE765A0D1832E10_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFEF2294832462C__CTOR_OFFSET))(this);
	}
};
