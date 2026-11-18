#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DINEOMIEBFH_DFNKBPEMDGP_EIDHGNDIAHN_OFFSET UNITYSDK_OFFSET(0x13440010)
#define DINEOMIEBFH_DFNKBPEMDGP_HMIGEEHGBDI_OFFSET UNITYSDK_OFFSET(0x1343FEE0)
#define DINEOMIEBFH_DFNKBPEMDGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1343FED0)

inline static constexpr unsigned int DINEOMIEBFH_DFNKBPEMDGP_TypeDefinitionIndex = 90239;

class DINEOMIEBFH_DFNKBPEMDGP : public ::System::Object
{
public:
	::UnityEngine::Vector2 KPIJGPJKBAI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINEOMIEBFH_DFNKBPEMDGP__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 HMIGEEHGBDI(::UnityEngine::Vector2& BJONOAOBOHG)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DINEOMIEBFH_DFNKBPEMDGP_HMIGEEHGBDI_OFFSET))(this, BJONOAOBOHG);
	}

	::UnityEngine::Vector2 EIDHGNDIAHN(::System::Single ADHLMCIBJCH, ::System::Single MLEGKGDLCPB)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DINEOMIEBFH_DFNKBPEMDGP_EIDHGNDIAHN_OFFSET))(this, ADHLMCIBJCH, MLEGKGDLCPB);
	}
};
