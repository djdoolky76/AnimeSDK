#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ILNPIDMNKDP_LBEDEKEBFBE_OMELBKOLAMM_OFFSET UNITYSDK_OFFSET(0x15C1EDA0)
#define ILNPIDMNKDP_LBEDEKEBFBE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1ED90)

inline static constexpr unsigned int ILNPIDMNKDP_LBEDEKEBFBE_TypeDefinitionIndex = 67650;

class ILNPIDMNKDP_LBEDEKEBFBE : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* HAAJELGELCC; // 0x10
	::System::String* HIAIKHDFCLN; // 0x18
	::System::Action_1<::System::String*>* NPFIONPDFED; // 0x20
	::System::Single OGKEBCPEPED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPIDMNKDP_LBEDEKEBFBE__CTOR_OFFSET))(this);
	}

	::System::Void OMELBKOLAMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPIDMNKDP_LBEDEKEBFBE_OMELBKOLAMM_OFFSET))(this);
	}
};
