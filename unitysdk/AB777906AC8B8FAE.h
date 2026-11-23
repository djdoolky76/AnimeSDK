#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E0B1EB005A75FE28.h"
#include "unitysdk/System/Object.h"

#define AB777906AC8B8FAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AB777906AC8B8FAE_TypeDefinitionIndex = 1188;

class AB777906AC8B8FAE : public ::System::Object
{
public:
	::ABC::Config::GUID B1E6422003773C9F; // 0x10
	::E0B1EB005A75FE28 BAA593D0D3742EAE; // 0x20
	::System::Boolean BDCD933611105E44; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB777906AC8B8FAE__CTOR_OFFSET))(this);
	}
};
