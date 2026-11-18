#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EJHHPFFPFOJ;

#define HPCONFEPCPD_FNEGJIBBGDF_EHOGKLNBLPP_OFFSET UNITYSDK_OFFSET(0x140CD900)
#define HPCONFEPCPD_FNEGJIBBGDF_FJHKELGFIOA_OFFSET UNITYSDK_OFFSET(0x140CD6C0)
#define HPCONFEPCPD_FNEGJIBBGDF__CTOR_OFFSET UNITYSDK_OFFSET(0x140CD6B0)

inline static constexpr unsigned int HPCONFEPCPD_FNEGJIBBGDF_TypeDefinitionIndex = 90924;

class HPCONFEPCPD_FNEGJIBBGDF : public ::System::Object
{
public:
	::EJHHPFFPFOJ* OPMPKFEHOBM; // 0x10
	::MoleMole::EntityHandle HPADNAEINPK; // 0x18
	::System::Boolean OAMOFLLANJK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_FNEGJIBBGDF__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 FJHKELGFIOA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_FNEGJIBBGDF_FJHKELGFIOA_OFFSET))(this);
	}

	::System::Single EHOGKLNBLPP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_FNEGJIBBGDF_EHOGKLNBLPP_OFFSET))(this);
	}
};
