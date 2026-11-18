#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

#define HHOBGKLENPF_CFGHNPAAEJH_NJPGLFMCDMC_OFFSET UNITYSDK_OFFSET(0x14A15520)
#define HHOBGKLENPF_CFGHNPAAEJH_ODBJIIGGHHL_OFFSET UNITYSDK_OFFSET(0x14A15510)
#define HHOBGKLENPF_CFGHNPAAEJH__CTOR_OFFSET UNITYSDK_OFFSET(0x14A15500)

inline static constexpr unsigned int HHOBGKLENPF_CFGHNPAAEJH_TypeDefinitionIndex = 54307;

class HHOBGKLENPF_CFGHNPAAEJH : public ::System::Object
{
public:
	::System::Boolean PKEKAHMMAJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_CFGHNPAAEJH__CTOR_OFFSET))(this);
	}

	::System::Boolean ODBJIIGGHHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_CFGHNPAAEJH_ODBJIIGGHHL_OFFSET))(this);
	}

	::System::Void NJPGLFMCDMC(::DJDDGKFCNAJ_IGOPHLMOGAO PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + HHOBGKLENPF_CFGHNPAAEJH_NJPGLFMCDMC_OFFSET))(this, PIIPCLCCOIG);
	}
};
