#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GEMHCNFMNLE_HOLKCPDCCPJ_OMELBKOLAMM_OFFSET UNITYSDK_OFFSET(0x11DA1250)
#define GEMHCNFMNLE_HOLKCPDCCPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA1240)

inline static constexpr unsigned int GEMHCNFMNLE_HOLKCPDCCPJ_TypeDefinitionIndex = 48168;

class GEMHCNFMNLE_HOLKCPDCCPJ : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* NPFIONPDFED; // 0x10
	::System::Action_1<::System::Single>* HAAJELGELCC; // 0x18
	::System::String* HIAIKHDFCLN; // 0x20
	::System::Single OGKEBCPEPED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMHCNFMNLE_HOLKCPDCCPJ__CTOR_OFFSET))(this);
	}

	::System::Void OMELBKOLAMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMHCNFMNLE_HOLKCPDCCPJ_OMELBKOLAMM_OFFSET))(this);
	}
};
