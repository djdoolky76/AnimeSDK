#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PAEBNDFOCFC_ACLCANBCAJH_OFFSET UNITYSDK_OFFSET(0x1A7DF140)
#define PAEBNDFOCFC_NPMJHHPNDKF_OFFSET UNITYSDK_OFFSET(0x1A7DF130)
#define PAEBNDFOCFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DF150)

inline static constexpr unsigned int PAEBNDFOCFC_TypeDefinitionIndex = 90821;

class PAEBNDFOCFC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEBNDFOCFC__CTOR_OFFSET))(this);
	}

	::System::Boolean NPMJHHPNDKF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEBNDFOCFC_NPMJHHPNDKF_OFFSET))(this);
	}

	::System::Boolean ACLCANBCAJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEBNDFOCFC_ACLCANBCAJH_OFFSET))(this);
	}
};
